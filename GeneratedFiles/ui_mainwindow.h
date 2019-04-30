/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *actionNew;
    QAction *actionExit;
    QAction *actionOpen;
    QWidget *centralWidget;
    QPushButton *startButton;
    QTextEdit *urlEdit;
    QPushButton *pauseButton;
    QLabel *statusLabel;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
        MainWindowClass->resize(599, 385);
        MainWindowClass->setStyleSheet(QString::fromUtf8(""));
        actionNew = new QAction(MainWindowClass);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionExit = new QAction(MainWindowClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionOpen = new QAction(MainWindowClass);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8("QWidget#centralWidget {background-color: qlineargradient(spread:pad, x1:0.517, y1:0.534, x2:1, y2:0, stop:0 rgba(139, 148, 171, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(90, 170, 201, 71));
        urlEdit = new QTextEdit(centralWidget);
        urlEdit->setObjectName(QString::fromUtf8("urlEdit"));
        urlEdit->setGeometry(QRect(90, 20, 421, 141));
        pauseButton = new QPushButton(centralWidget);
        pauseButton->setObjectName(QString::fromUtf8("pauseButton"));
        pauseButton->setGeometry(QRect(310, 170, 201, 71));
        statusLabel = new QLabel(centralWidget);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setGeometry(QRect(90, 260, 421, 61));
        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 599, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindowClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(MainWindowClass);
        QObject::connect(startButton, SIGNAL(clicked()), MainWindowClass, SLOT(startDownload()));

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "\350\277\205\344\272\206\344\270\252\351\233\267", nullptr));
        actionNew->setText(QApplication::translate("MainWindowClass", "\346\226\260\345\273\272\344\270\213\350\275\275", nullptr));
        actionExit->setText(QApplication::translate("MainWindowClass", "\351\200\200\345\207\272", nullptr));
        actionOpen->setText(QApplication::translate("MainWindowClass", "\346\211\223\345\274\200...", nullptr));
        startButton->setText(QApplication::translate("MainWindowClass", "\345\274\200\345\247\213", nullptr));
        pauseButton->setText(QApplication::translate("MainWindowClass", "\346\232\202\345\201\234", nullptr));
        statusLabel->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindowClass", "\346\226\207\344\273\266", nullptr));
#ifndef QT_NO_TOOLTIP
        statusBar->setToolTip(QString());
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
