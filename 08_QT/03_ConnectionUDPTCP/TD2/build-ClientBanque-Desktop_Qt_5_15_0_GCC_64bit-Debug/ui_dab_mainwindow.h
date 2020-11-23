/********************************************************************************
** Form generated from reading UI file 'dab_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAB_MAINWINDOW_H
#define UI_DAB_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DAB_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *labelAdresse;
    QLabel *labelPort;
    QLineEdit *lineEditAdresse;
    QLabel *labelEtatConnexion;
    QPushButton *pushButtonConnexion;
    QLabel *labelMessageBanque;
    QLineEdit *lineEditMessageBanque;
    QGroupBox *groupBox;
    QPushButton *pushButtonNumeroCompte;
    QLabel *labelMontant;
    QRadioButton *radioButtonSolde;
    QRadioButton *radioButtonRetrait;
    QRadioButton *radioButtonDepot;
    QPushButton *pushButtonEnvoi;
    QSpinBox *spinBoxNumeroCompte;
    QDoubleSpinBox *doubleSpinBoxMontant;
    QListWidget *listWidgetEtatConnexion;
    QSpinBox *spinBoxPort;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DAB_MainWindow)
    {
        if (DAB_MainWindow->objectName().isEmpty())
            DAB_MainWindow->setObjectName(QString::fromUtf8("DAB_MainWindow"));
        DAB_MainWindow->resize(639, 520);
        centralwidget = new QWidget(DAB_MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        labelAdresse = new QLabel(centralwidget);
        labelAdresse->setObjectName(QString::fromUtf8("labelAdresse"));
        labelAdresse->setGeometry(QRect(40, 50, 58, 16));
        labelPort = new QLabel(centralwidget);
        labelPort->setObjectName(QString::fromUtf8("labelPort"));
        labelPort->setGeometry(QRect(40, 100, 58, 16));
        lineEditAdresse = new QLineEdit(centralwidget);
        lineEditAdresse->setObjectName(QString::fromUtf8("lineEditAdresse"));
        lineEditAdresse->setGeometry(QRect(150, 50, 113, 24));
        labelEtatConnexion = new QLabel(centralwidget);
        labelEtatConnexion->setObjectName(QString::fromUtf8("labelEtatConnexion"));
        labelEtatConnexion->setGeometry(QRect(310, 50, 121, 16));
        pushButtonConnexion = new QPushButton(centralwidget);
        pushButtonConnexion->setObjectName(QString::fromUtf8("pushButtonConnexion"));
        pushButtonConnexion->setGeometry(QRect(120, 170, 80, 24));
        labelMessageBanque = new QLabel(centralwidget);
        labelMessageBanque->setObjectName(QString::fromUtf8("labelMessageBanque"));
        labelMessageBanque->setGeometry(QRect(40, 230, 141, 16));
        lineEditMessageBanque = new QLineEdit(centralwidget);
        lineEditMessageBanque->setObjectName(QString::fromUtf8("lineEditMessageBanque"));
        lineEditMessageBanque->setGeometry(QRect(40, 260, 571, 24));
        lineEditMessageBanque->setReadOnly(true);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 290, 571, 171));
        pushButtonNumeroCompte = new QPushButton(groupBox);
        pushButtonNumeroCompte->setObjectName(QString::fromUtf8("pushButtonNumeroCompte"));
        pushButtonNumeroCompte->setGeometry(QRect(20, 40, 121, 24));
        labelMontant = new QLabel(groupBox);
        labelMontant->setObjectName(QString::fromUtf8("labelMontant"));
        labelMontant->setGeometry(QRect(20, 80, 58, 16));
        radioButtonSolde = new QRadioButton(groupBox);
        radioButtonSolde->setObjectName(QString::fromUtf8("radioButtonSolde"));
        radioButtonSolde->setGeometry(QRect(400, 60, 100, 22));
        radioButtonSolde->setChecked(true);
        radioButtonRetrait = new QRadioButton(groupBox);
        radioButtonRetrait->setObjectName(QString::fromUtf8("radioButtonRetrait"));
        radioButtonRetrait->setGeometry(QRect(400, 80, 100, 22));
        radioButtonDepot = new QRadioButton(groupBox);
        radioButtonDepot->setObjectName(QString::fromUtf8("radioButtonDepot"));
        radioButtonDepot->setGeometry(QRect(400, 100, 100, 22));
        pushButtonEnvoi = new QPushButton(groupBox);
        pushButtonEnvoi->setObjectName(QString::fromUtf8("pushButtonEnvoi"));
        pushButtonEnvoi->setEnabled(false);
        pushButtonEnvoi->setGeometry(QRect(400, 130, 80, 24));
        spinBoxNumeroCompte = new QSpinBox(groupBox);
        spinBoxNumeroCompte->setObjectName(QString::fromUtf8("spinBoxNumeroCompte"));
        spinBoxNumeroCompte->setGeometry(QRect(170, 40, 111, 25));
        spinBoxNumeroCompte->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxNumeroCompte->setMaximum(9999);
        spinBoxNumeroCompte->setValue(1234);
        doubleSpinBoxMontant = new QDoubleSpinBox(groupBox);
        doubleSpinBoxMontant->setObjectName(QString::fromUtf8("doubleSpinBoxMontant"));
        doubleSpinBoxMontant->setGeometry(QRect(170, 80, 111, 25));
        doubleSpinBoxMontant->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBoxMontant->setMaximum(9999.989999999999782);
        listWidgetEtatConnexion = new QListWidget(centralwidget);
        listWidgetEtatConnexion->setObjectName(QString::fromUtf8("listWidgetEtatConnexion"));
        listWidgetEtatConnexion->setGeometry(QRect(310, 70, 301, 151));
        spinBoxPort = new QSpinBox(centralwidget);
        spinBoxPort->setObjectName(QString::fromUtf8("spinBoxPort"));
        spinBoxPort->setGeometry(QRect(150, 100, 111, 25));
        spinBoxPort->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxPort->setMaximum(9999);
        spinBoxPort->setValue(8888);
        DAB_MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DAB_MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 639, 21));
        DAB_MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(DAB_MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DAB_MainWindow->setStatusBar(statusbar);

        retranslateUi(DAB_MainWindow);

        QMetaObject::connectSlotsByName(DAB_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DAB_MainWindow)
    {
        DAB_MainWindow->setWindowTitle(QCoreApplication::translate("DAB_MainWindow", "DAB_MainWindow", nullptr));
        labelAdresse->setText(QCoreApplication::translate("DAB_MainWindow", "Adresse :", nullptr));
        labelPort->setText(QCoreApplication::translate("DAB_MainWindow", "Port :", nullptr));
        lineEditAdresse->setText(QCoreApplication::translate("DAB_MainWindow", "172.18.58.83", nullptr));
        labelEtatConnexion->setText(QCoreApplication::translate("DAB_MainWindow", "Etat de la connexion", nullptr));
        pushButtonConnexion->setText(QCoreApplication::translate("DAB_MainWindow", "Connexion", nullptr));
        labelMessageBanque->setText(QCoreApplication::translate("DAB_MainWindow", "Message de la banque :", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DAB_MainWindow", "GroupBox", nullptr));
        pushButtonNumeroCompte->setText(QCoreApplication::translate("DAB_MainWindow", "Num\303\251ro de compte", nullptr));
        labelMontant->setText(QCoreApplication::translate("DAB_MainWindow", "Montant :", nullptr));
        radioButtonSolde->setText(QCoreApplication::translate("DAB_MainWindow", "Solde", nullptr));
        radioButtonRetrait->setText(QCoreApplication::translate("DAB_MainWindow", "Retrait", nullptr));
        radioButtonDepot->setText(QCoreApplication::translate("DAB_MainWindow", "D\303\251pot", nullptr));
        pushButtonEnvoi->setText(QCoreApplication::translate("DAB_MainWindow", "Envoi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DAB_MainWindow: public Ui_DAB_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAB_MAINWINDOW_H
