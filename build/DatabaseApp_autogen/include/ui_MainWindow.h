/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableView *tableDB;
    QTextEdit *wordInput;
    QTextEdit *translateInput;
    QTextEdit *transcriptionInput;
    QPushButton *addButton;
    QPushButton *openButton;
    QPushButton *createButton;
    QPushButton *backupButton;
    QPushButton *importButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *clearButton;
    QPushButton *deleteByWord;
    QPushButton *deleteByTranslate;
    QPushButton *deleteByTranscription;
    QTextEdit *deleteInputWord;
    QTextEdit *deleteInputTranslation;
    QTextEdit *deleteInputTranscription;
    QPushButton *deleteByID;
    QTextEdit *deleteInputID;
    QPushButton *deleteButton;
    QPushButton *searchWord;
    QPushButton *searchTranslation;
    QPushButton *searchTranscription;
    QPushButton *searchID;
    QPushButton *clearSearch;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tableDB = new QTableView(centralwidget);
        tableDB->setObjectName("tableDB");
        tableDB->setGeometry(QRect(10, 10, 780, 300));
        wordInput = new QTextEdit(centralwidget);
        wordInput->setObjectName("wordInput");
        wordInput->setGeometry(QRect(20, 340, 231, 21));
        translateInput = new QTextEdit(centralwidget);
        translateInput->setObjectName("translateInput");
        translateInput->setGeometry(QRect(280, 340, 231, 21));
        transcriptionInput = new QTextEdit(centralwidget);
        transcriptionInput->setObjectName("transcriptionInput");
        transcriptionInput->setGeometry(QRect(540, 340, 231, 21));
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(550, 370, 211, 41));
        openButton = new QPushButton(centralwidget);
        openButton->setObjectName("openButton");
        openButton->setGeometry(QRect(690, 440, 100, 32));
        createButton = new QPushButton(centralwidget);
        createButton->setObjectName("createButton");
        createButton->setGeometry(QRect(690, 480, 100, 32));
        backupButton = new QPushButton(centralwidget);
        backupButton->setObjectName("backupButton");
        backupButton->setGeometry(QRect(10, 520, 100, 32));
        importButton = new QPushButton(centralwidget);
        importButton->setObjectName("importButton");
        importButton->setGeometry(QRect(10, 480, 100, 32));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 320, 58, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(370, 320, 58, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(620, 320, 91, 16));
        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(690, 520, 101, 32));
        deleteByWord = new QPushButton(centralwidget);
        deleteByWord->setObjectName("deleteByWord");
        deleteByWord->setGeometry(QRect(140, 440, 181, 32));
        deleteByTranslate = new QPushButton(centralwidget);
        deleteByTranslate->setObjectName("deleteByTranslate");
        deleteByTranslate->setGeometry(QRect(140, 480, 181, 32));
        deleteByTranscription = new QPushButton(centralwidget);
        deleteByTranscription->setObjectName("deleteByTranscription");
        deleteByTranscription->setGeometry(QRect(140, 520, 181, 32));
        deleteInputWord = new QTextEdit(centralwidget);
        deleteInputWord->setObjectName("deleteInputWord");
        deleteInputWord->setGeometry(QRect(340, 440, 231, 31));
        deleteInputTranslation = new QTextEdit(centralwidget);
        deleteInputTranslation->setObjectName("deleteInputTranslation");
        deleteInputTranslation->setGeometry(QRect(340, 480, 231, 31));
        deleteInputTranscription = new QTextEdit(centralwidget);
        deleteInputTranscription->setObjectName("deleteInputTranscription");
        deleteInputTranscription->setGeometry(QRect(340, 520, 231, 31));
        deleteByID = new QPushButton(centralwidget);
        deleteByID->setObjectName("deleteByID");
        deleteByID->setGeometry(QRect(140, 400, 81, 32));
        deleteInputID = new QTextEdit(centralwidget);
        deleteInputID->setObjectName("deleteInputID");
        deleteInputID->setGeometry(QRect(250, 400, 71, 31));
        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setGeometry(QRect(10, 440, 101, 32));
        searchWord = new QPushButton(centralwidget);
        searchWord->setObjectName("searchWord");
        searchWord->setGeometry(QRect(580, 440, 81, 32));
        searchTranslation = new QPushButton(centralwidget);
        searchTranslation->setObjectName("searchTranslation");
        searchTranslation->setGeometry(QRect(580, 480, 81, 32));
        searchTranscription = new QPushButton(centralwidget);
        searchTranscription->setObjectName("searchTranscription");
        searchTranscription->setGeometry(QRect(580, 520, 81, 32));
        searchID = new QPushButton(centralwidget);
        searchID->setObjectName("searchID");
        searchID->setGeometry(QRect(340, 400, 51, 32));
        clearSearch = new QPushButton(centralwidget);
        clearSearch->setObjectName("clearSearch");
        clearSearch->setGeometry(QRect(420, 400, 121, 32));
        MainWindow->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273\320\276\320\262\320\260\321\217 \320\261\320\260\320\267\320\260 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        openButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        createButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        backupButton->setText(QCoreApplication::translate("MainWindow", "\320\221\320\265\320\272\320\260\320\277", nullptr));
        importButton->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\320\277\320\276\321\200\321\202", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\241\320\273\320\276\320\262\320\276", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\262\320\276\320\264", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\242\321\200\320\260\320\275\321\201\320\272\321\200\320\270\320\277\321\206\320\270\321\217", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        deleteByWord->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\320\273\320\276\320\262\320\276", nullptr));
        deleteByTranslate->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\277\320\265\321\200\320\265\320\262\320\276\320\264", nullptr));
        deleteByTranscription->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\202\321\200\320\260\320\275\321\201\320\272\321\200\320\270\320\277\321\206\320\270\321\216", nullptr));
        deleteByID->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 ID", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\221\320\224", nullptr));
        searchWord->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        searchTranslation->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        searchTranscription->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        searchID->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        clearSearch->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214 \320\277\320\276\320\270\321\201\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
