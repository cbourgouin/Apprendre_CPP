/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *labelNomDep;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNumDep;
    QLineEdit *lineEditNumDep;
    QPushButton *pushButtonNomDep;
    QGroupBox *groupBox_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBoxRegions;
    QComboBox *comboBoxDepartements;
    QComboBox *comboBoxVilles;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 761, 121));
        labelNomDep = new QLabel(groupBox);
        labelNomDep->setObjectName(QString::fromUtf8("labelNomDep"));
        labelNomDep->setGeometry(QRect(10, 70, 161, 16));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 531, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelNumDep = new QLabel(widget);
        labelNumDep->setObjectName(QString::fromUtf8("labelNumDep"));

        horizontalLayout->addWidget(labelNumDep);

        lineEditNumDep = new QLineEdit(widget);
        lineEditNumDep->setObjectName(QString::fromUtf8("lineEditNumDep"));

        horizontalLayout->addWidget(lineEditNumDep);

        pushButtonNomDep = new QPushButton(widget);
        pushButtonNomDep->setObjectName(QString::fromUtf8("pushButtonNomDep"));

        horizontalLayout->addWidget(pushButtonNomDep);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 150, 761, 141));
        widget1 = new QWidget(groupBox_2);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 40, 498, 26));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBoxRegions = new QComboBox(widget1);
        comboBoxRegions->addItem(QString());
        comboBoxRegions->setObjectName(QString::fromUtf8("comboBoxRegions"));

        horizontalLayout_2->addWidget(comboBoxRegions);

        comboBoxDepartements = new QComboBox(widget1);
        comboBoxDepartements->addItem(QString());
        comboBoxDepartements->setObjectName(QString::fromUtf8("comboBoxDepartements"));

        horizontalLayout_2->addWidget(comboBoxDepartements);

        comboBoxVilles = new QComboBox(widget1);
        comboBoxVilles->addItem(QString());
        comboBoxVilles->setObjectName(QString::fromUtf8("comboBoxVilles"));

        horizontalLayout_2->addWidget(comboBoxVilles);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Recherche de departement par numero ", nullptr));
        labelNomDep->setText(QCoreApplication::translate("MainWindow", "Nom du d\303\251partement", nullptr));
        labelNumDep->setText(QCoreApplication::translate("MainWindow", "Donnez un num\303\251ro de departement", nullptr));
        pushButtonNomDep->setText(QCoreApplication::translate("MainWindow", "Avoir le nom du d\303\251partement", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        comboBoxRegions->setItemText(0, QCoreApplication::translate("MainWindow", "Choisissez une r\303\251gion", nullptr));

        comboBoxRegions->setCurrentText(QCoreApplication::translate("MainWindow", "Choisissez une r\303\251gion", nullptr));
        comboBoxDepartements->setItemText(0, QCoreApplication::translate("MainWindow", "Choisissez un d\303\251partement", nullptr));

        comboBoxVilles->setItemText(0, QCoreApplication::translate("MainWindow", "Choisissez une ville ", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
