#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QTableView>
#include <QStandardItem>
#include <QString>
#include <QTextEdit>
#include <chrono>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), database(nullptr) {
    ui->setupUi(this);

    tableView = ui->tableDB;

    // Подключаем кнопки к слотам
    connect(ui->createButton, &QPushButton::clicked, this, &MainWindow::onCreateDatabase);
    connect(ui->deleteButton, &QPushButton::clicked, this, &MainWindow::onDeleteDatabase);
    connect(ui->openButton, &QPushButton::clicked, this, &MainWindow::onOpenDatabase);
    connect(ui->addButton, &QPushButton::clicked, this, &MainWindow::onAddData);
    connect(ui->clearButton, &QPushButton::clicked, this, &MainWindow::onClearData);
    connect(ui->deleteByID, &QPushButton::clicked, this, &MainWindow::onDeleteByID);
    connect(ui->deleteByWord, &QPushButton::clicked, this, &MainWindow::onDeleteByWord);
    connect(ui->deleteByTranslate, &QPushButton::clicked, this, &MainWindow::onDeleteByTranslation);
    connect(ui->deleteByTranscription, &QPushButton::clicked, this,
            &MainWindow::onDeleteByTranscription);
    connect(ui->backupButton, &QPushButton::clicked, this, &MainWindow::onBackupButton);
    connect(ui->importButton, &QPushButton::clicked, this, &MainWindow::onImportButton);
    connect(ui->searchID, &QPushButton::clicked, this, &MainWindow::onSearchID);
    connect(ui->clearSearch, &QPushButton::clicked, this, &MainWindow::onClearSearch);
    connect(ui->searchWord, &QPushButton::clicked, this, &MainWindow::onSearchByWord);
    connect(ui->searchTranslation, &QPushButton::clicked, this, &MainWindow::onSearchByTranslation);
    connect(ui->searchTranscription, &QPushButton::clicked, this,
            &MainWindow::onSearchByTranscription);
}

MainWindow::~MainWindow() {
    delete ui;
    delete database;
}

void MainWindow::populateTableView() {
    if (database) {
        QStandardItemModel *model = new QStandardItemModel(tableView);
        model->setHorizontalHeaderLabels(
            {"ID", "Слово", "Перевод", "Транскрипция", "Количество повторений"});

        for (const auto &entry : database->db) {
            int id = entry.first;
            auto values = entry.second;

            QList<QStandardItem *> rowItems;
            rowItems.append(new QStandardItem(QString::number(id)));
            database->count_delete_by_id = std::max(database->count_delete_by_id, id);
            rowItems.append(new QStandardItem(QString::fromStdString(std::get<0>(values))));
            rowItems.append(new QStandardItem(QString::fromStdString(std::get<1>(values))));
            rowItems.append(new QStandardItem(QString::fromStdString(std::get<2>(values))));
            rowItems.append(new QStandardItem(QString::number(std::get<3>(values))));

            model->appendRow(rowItems);
        }

        database->count_delete_by_id -= database->db.size();

        tableView->setModel(model);
    }
}

void MainWindow::populateTableView(
    std::map<int, std::tuple<std::string, std::string, std::string, int>> &new_db) {
    QStandardItemModel *model = new QStandardItemModel(tableView);
    model->setHorizontalHeaderLabels(
        {"ID", "Слово", "Перевод", "Транскрипция", "Количество повторений"});

    for (const auto &entry : new_db) {
        int id = entry.first;
        auto values = entry.second;

        QList<QStandardItem *> rowItems;
        rowItems.append(new QStandardItem(QString::number(id)));
        database->count_delete_by_id = std::max(database->count_delete_by_id, id);
        rowItems.append(new QStandardItem(QString::fromStdString(std::get<0>(values))));
        rowItems.append(new QStandardItem(QString::fromStdString(std::get<1>(values))));
        rowItems.append(new QStandardItem(QString::fromStdString(std::get<2>(values))));
        rowItems.append(new QStandardItem(QString::number(std::get<3>(values))));

        model->appendRow(rowItems);
    }

    database->count_delete_by_id -= database->db.size();

    tableView->setModel(model);
}

void MainWindow::onClearSearch() {
    populateTableView();
}

void MainWindow::onSearchID() {
    std::map<int, std::tuple<std::string, std::string, std::string, int>> new_db;
    if (!ui->deleteInputID->toPlainText().toStdString().empty() &&
        database->db.find(std::stoi(ui->deleteInputID->toPlainText().toStdString())) !=
            database->db.end()) {
        int id = std::stoi(ui->deleteInputID->toPlainText().toStdString());

        new_db[id] = database->db[id];
    }
    populateTableView(new_db);

    ui->deleteInputID->clear();
}

void MainWindow::onSearchByWord() {
    std::string word = ui->deleteInputWord->toPlainText().toStdString();
    std::vector<int> id_for_delete;
    for (const auto &entry : database->db) {
        int key = entry.first;
        const auto &value = entry.second;

        std::string s = std::get<0>(value);

        if (s == word) {
            id_for_delete.push_back(key);
        }
    }
    std::map<int, std::tuple<std::string, std::string, std::string, int>> new_db;

    for (auto id : id_for_delete) {
        new_db[id] = database->db[id];
    }
    populateTableView(new_db);
    ui->deleteInputWord->clear();
}

void MainWindow::onSearchByTranslation() {
    std::string word = ui->deleteInputTranslation->toPlainText().toStdString();
    std::vector<int> id_for_delete;
    for (const auto &entry : database->db) {
        int key = entry.first;
        const auto &value = entry.second;

        std::string s = std::get<1>(value);

        if (s == word) {
            id_for_delete.push_back(key);
        }
    }

    std::map<int, std::tuple<std::string, std::string, std::string, int>> new_db;

    for (auto id : id_for_delete) {
        new_db[id] = database->db[id];
    }
    populateTableView(new_db);
    ui->deleteInputTranslation->clear();
}

void MainWindow::onSearchByTranscription() {
    std::string word = ui->deleteInputTranscription->toPlainText().toStdString();
    std::vector<int> id_for_delete;
    for (const auto &entry : database->db) {
        int key = entry.first;
        const auto &value = entry.second;

        std::string s = std::get<2>(value);

        if (s == word) {
            id_for_delete.push_back(key);
        }
    }

    std::map<int, std::tuple<std::string, std::string, std::string, int>> new_db;

    for (auto id : id_for_delete) {
        new_db[id] = database->db[id];
    }
    populateTableView(new_db);
    ui->deleteInputTranscription->clear();
}

void MainWindow::onCreateDatabase() {
    QString filePath = QFileDialog::getSaveFileName(this, "Create Database", "",
                                                    "Text Files (*.txt);;All Files (*)");
    if (filePath.isEmpty()) {
        return;  // Пользователь отменил выбор
    }

    if (database) {
        delete database;
    }
    database = new TextDatabase(filePath);
    database->create();

    populateTableView();

    QMessageBox::information(this, "Database Created",
                             "The database has been successfully created.");
}

void MainWindow::onDeleteDatabase() {
    QString filePath = QFileDialog::getOpenFileName(this, "Delete Database", "",
                                                    "Text Files (*.txt);;All Files (*)");
    if (filePath.isEmpty()) {
        return;
    }

    if (QFile::remove(filePath)) {
        QMessageBox::information(this, "Database Deleted",
                                 "The database has been successfully deleted.");
    } else {
        QMessageBox::warning(this, "Deletion Failed", "Failed to delete the selected database.");
    }
}

void MainWindow::onOpenDatabase() {
    QString filePath = QFileDialog::getOpenFileName(this, "Open Database", "",
                                                    "Text Files (*.txt);;All Files (*)");
    if (filePath.isEmpty()) {
        return;
    }

    if (database) {
        delete database;
    }
    database = new TextDatabase(filePath);
    database->open();

    populateTableView();

    QMessageBox::information(this, "Database Opened", "The database has been successfully opened.");
}

void MainWindow::onAddData() {
    auto start = std::chrono::high_resolution_clock::now();
    if (!database) {
        std::cout << "Data base is not open\n";
        return;
    }

    std::string word = ui->wordInput->toPlainText().toStdString();
    std::string translation = ui->translateInput->toPlainText().toStdString();
    std::string transcription = ui->transcriptionInput->toPlainText().toStdString();

    database->db[static_cast<int>(database->db.size()) + 1 + database->count_delete_by_id] =
        std::make_tuple(word, translation, transcription, 0);

    populateTableView();

    std::cout << "Data Added\n";
    ui->wordInput->clear();
    ui->translateInput->clear();
    ui->transcriptionInput->clear();

    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double, std::milli> duration = end - start;
    std::cout << "Время выполнения: " << duration.count() << " мс" << std::endl;
}

void MainWindow::onClearData() {
    database->db.clear();
    database->count_delete_by_id = 0;
    populateTableView();
}

void MainWindow::onDeleteByID() {
    int id = std::stoi(ui->deleteInputID->toPlainText().toStdString());

    if (database->db.find(id) != database->db.end()) {
        database->db.erase(id);
        ++database->count_delete_by_id;
        populateTableView();
        ui->deleteInputID->clear();
    }
}

void MainWindow::onDeleteByWord() {
    std::string word = ui->deleteInputWord->toPlainText().toStdString();
    std::vector<int> id_for_delete;
    for (const auto &entry : database->db) {
        int key = entry.first;
        const auto &value = entry.second;

        std::string s = std::get<0>(value);

        if (s == word) {
            id_for_delete.push_back(key);
        }
    }

    for (auto id : id_for_delete) {
        database->db.erase(id);
    }
    populateTableView();
    ui->deleteInputWord->clear();
}

void MainWindow::onDeleteByTranslation() {
    std::string word = ui->deleteInputTranslation->toPlainText().toStdString();
    std::vector<int> id_for_delete;
    for (const auto &entry : database->db) {
        int key = entry.first;
        const auto &value = entry.second;

        std::string s = std::get<1>(value);

        if (s == word) {
            id_for_delete.push_back(key);
        }
    }

    for (auto id : id_for_delete) {
        database->db.erase(id);
    }
    ui->deleteInputTranslation->clear();
    populateTableView();
}

void MainWindow::onDeleteByTranscription() {
    std::string word = ui->deleteInputTranscription->toPlainText().toStdString();
    std::vector<int> id_for_delete;
    for (const auto &entry : database->db) {
        int key = entry.first;
        const auto &value = entry.second;

        std::string s = std::get<2>(value);

        if (s == word) {
            id_for_delete.push_back(key);
        }
    }

    for (auto id : id_for_delete) {
        database->db.erase(id);
    }
    ui->deleteInputTranscription->clear();
    populateTableView();
}

void MainWindow::onBackupButton() {
    database->BackupDatabase("backups");
}

void MainWindow::onImportButton() {
    database->ImportToCSV("imports");
}