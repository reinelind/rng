/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QLabel *label_5;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QGroupBox *groupBox_3;
    QSpinBox *spinBox;
    QPlainTextEdit *plainTextEdit;
    QCustomPlot *widget;
    QProgressBar *progressBar;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(866, 460);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 401, 241));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(210, 10, 181, 111));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 21, 16));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 80, 21, 21));
        spinBox_2 = new QSpinBox(groupBox_2);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(40, 20, 51, 21));
        spinBox_2->setMinimum(6);
        spinBox_2->setMaximum(5000);
        spinBox_3 = new QSpinBox(groupBox_2);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setGeometry(QRect(120, 80, 51, 22));
        spinBox_3->setMinimum(1);
        spinBox_3->setMaximum(5000);
        spinBox_3->setValue(1000);
        spinBox_4 = new QSpinBox(groupBox_2);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setGeometry(QRect(40, 80, 42, 22));
        spinBox_4->setMinimum(1);
        spinBox_4->setMaximum(5000);
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 80, 31, 21));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 20, 191, 22));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 180, 81, 23));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(210, 120, 181, 51));
        spinBox = new QSpinBox(groupBox_3);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(70, 20, 41, 31));
        spinBox->setMaximum(5000);
        spinBox->setValue(1);
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 260, 851, 101));
        widget = new QCustomPlot(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(420, 0, 441, 241));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(10, 400, 871, 23));
        progressBar->setValue(24);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(340, 370, 161, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(350, 240, 161, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 866, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\223\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200 \320\277\321\201\320\265\320\262\320\264\320\276\320\262\320\270\320\277\320\260\320\264\320\272\320\276\320\262\320\270\321\205 \321\207\320\270\321\201\320\265\320\273", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\236\321\201\320\275\320\276\320\262\320\275\320\265 \320\274\320\265\320\275\321\216", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\270 \320\263\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200\320\260", 0));
        label->setText(QApplication::translate("MainWindow", "\320\262\321\226\320\264", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\264\320\276", 0));
        label_5->setText(QApplication::translate("MainWindow", "\320\262\321\226\320\264", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\320\223\320\237\320\222\320\247 \320\275\320\260 \320\276\321\201\320\275\320\276\320\262\321\226 \320\234\320\241\320\232", 0)
         << QApplication::translate("MainWindow", "\320\233\321\226\320\275\321\226\320\271\320\275\320\270\320\271 \320\272\320\276\320\275\320\263\321\200\321\203\320\265\320\275\321\202\320\275\320\270\320\271 \320\274\320\265\321\202\320\276\320\264", 0)
         << QApplication::translate("MainWindow", "\320\220\320\273\320\263\320\276\321\200\320\270\321\202\320\274 \320\233\320\265\320\274\320\265\321\200\320\260", 0)
         << QApplication::translate("MainWindow", "\320\234\320\265\321\202\320\276\320\264 \320\244\321\226\320\261\320\276\320\275\320\260\321\207\321\207\321\226 \320\267 \320\267\320\260\320\277\321\226\320\267\320\275\320\265\320\275\320\275\321\217\320\274\320\270 ", 0)
         << QApplication::translate("MainWindow", "\320\232\320\262\320\260\320\264\321\200\320\260\321\202\320\270\321\207\320\275\320\270\320\271 \320\272\320\276\320\275\320\263\321\200\321\203\320\265\320\275\321\202\320\275\320\270\320\271 \320\274\320\265\321\202\320\276\320\264", 0)
         << QApplication::translate("MainWindow", "\320\234\321\203\320\273\321\214\321\202\320\270\320\277\320\273\321\226\320\272\320\260\321\202\320\270\320\262\320\275\320\270\320\271 \320\274\320\265\321\202\320\276\320\264", 0)
         << QApplication::translate("MainWindow", "\320\233\321\226\320\275\321\226\320\271\320\275\320\270\320\271 \320\274\320\265\321\202\320\276\320\264", 0)
         << QApplication::translate("MainWindow", "\320\222\320\270\321\205\320\276\321\200 \320\234\320\265\321\200\321\201\320\265\320\275\320\275\320\260", 0)
         << QApplication::translate("MainWindow", "Xorshift32", 0)
         << QApplication::translate("MainWindow", "Marsaglia-multicarry", 0)
        );
        pushButton->setText(QApplication::translate("MainWindow", "\320\227\320\263\320\265\320\275\320\265\321\200\321\203\320\262\320\260\321\202\320\270", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\267\320\275\320\260\321\207\320\265\320\275\321\214", 0));
        label_3->setText(QApplication::translate("MainWindow", "\320\223\320\265\320\275\320\265\321\200\320\260\321\206\321\226\321\217 \320\262\320\270\320\277\320\260\320\264\320\272\320\276\320\262\320\270\321\205 \320\267\320\275\320\260\321\207\320\265\320\275\321\214", 0));
        label_4->setText(QApplication::translate("MainWindow", "\320\241\320\263\320\265\320\275\320\265\321\200\320\276\320\262\320\260\320\275\321\226 \320\267\320\275\320\260\321\207\320\265\320\275\320\275\321\217", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
