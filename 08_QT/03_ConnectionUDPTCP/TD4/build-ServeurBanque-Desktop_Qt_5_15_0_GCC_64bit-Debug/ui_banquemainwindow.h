/********************************************************************************
** Form generated from reading UI file 'banquemainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANQUEMAINWINDOW_H
#define UI_BANQUEMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BanqueMainWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BanqueMainWindow)
    {
        if (BanqueMainWindow->objectName().isEmpty())
            BanqueMainWindow->setObjectName(QString::fromUtf8("BanqueMainWindow"));
        BanqueMainWindow->resize(800, 600);
        centralwidget = new QWidget(BanqueMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        BanqueMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BanqueMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        BanqueMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(BanqueMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BanqueMainWindow->setStatusBar(statusbar);

        retranslateUi(BanqueMainWindow);

        QMetaObject::connectSlotsByName(BanqueMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BanqueMainWindow)
    {
        BanqueMainWindow->setWindowTitle(QCoreApplication::translate("BanqueMainWindow", "BanqueMainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BanqueMainWindow: public Ui_BanqueMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANQUEMAINWINDOW_H
