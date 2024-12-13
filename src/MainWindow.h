#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableView>
#include "TextDatabase.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void populateTableView();
    void populateTableView(
        std::map<int, std::tuple<std::string, std::string, std::string, int>> &new_db);

private slots:
    void onCreateDatabase();
    void onDeleteDatabase();
    void onOpenDatabase();
    void onAddData();
    void onClearData();
    void onDeleteByID();
    void onDeleteByWord();
    void onDeleteByTranslation();
    void onDeleteByTranscription();
    void onBackupButton();
    void onImportButton();
    void onSearchID();
    void onSearchByWord();
    void onSearchByTranslation();
    void onSearchByTranscription();
    void onClearSearch();

private:
    Ui::MainWindow *ui;
    TextDatabase *database;
    QTableView *tableView;
};

#endif