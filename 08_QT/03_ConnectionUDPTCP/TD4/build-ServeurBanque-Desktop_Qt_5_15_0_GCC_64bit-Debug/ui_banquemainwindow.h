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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BanqueMainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButtonQuitter;
    QGroupBox *groupBox;
    QPushButton *pushButtonConnect;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelIP;
    QLineEdit *lineEditIP;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelName;
    QLineEdit *lineEditName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelLogin;
    QLineEdit *lineEditLogin;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelPassword;
    QLineEdit *lineEditPassword;
    QGroupBox *groupBox_2;
    QPushButton *pushButtonInfoComplete;
    QTableWidget *tableWidgetInfos;

    void setupUi(QMainWindow *BanqueMainWindow)
    {
        if (BanqueMainWindow->objectName().isEmpty())
            BanqueMainWindow->setObjectName(QString::fromUtf8("BanqueMainWindow"));
        BanqueMainWindow->resize(618, 519);
        centralwidget = new QWidget(BanqueMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButtonQuitter = new QPushButton(centralwidget);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(250, 490, 111, 21));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 601, 181));
        pushButtonConnect = new QPushButton(groupBox);
        pushButtonConnect->setObjectName(QString::fromUtf8("pushButtonConnect"));
        pushButtonConnect->setGeometry(QRect(380, 70, 131, 61));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 40, 271, 124));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelIP = new QLabel(widget);
        labelIP->setObjectName(QString::fromUtf8("labelIP"));

        horizontalLayout->addWidget(labelIP);

        lineEditIP = new QLineEdit(widget);
        lineEditIP->setObjectName(QString::fromUtf8("lineEditIP"));

        horizontalLayout->addWidget(lineEditIP);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelName = new QLabel(widget);
        labelName->setObjectName(QString::fromUtf8("labelName"));

        horizontalLayout_2->addWidget(labelName);

        lineEditName = new QLineEdit(widget);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        horizontalLayout_2->addWidget(lineEditName);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelLogin = new QLabel(widget);
        labelLogin->setObjectName(QString::fromUtf8("labelLogin"));

        horizontalLayout_3->addWidget(labelLogin);

        lineEditLogin = new QLineEdit(widget);
        lineEditLogin->setObjectName(QString::fromUtf8("lineEditLogin"));

        horizontalLayout_3->addWidget(lineEditLogin);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labelPassword = new QLabel(widget);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));

        horizontalLayout_4->addWidget(labelPassword);

        lineEditPassword = new QLineEdit(widget);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));

        horizontalLayout_4->addWidget(lineEditPassword);


        verticalLayout->addLayout(horizontalLayout_4);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setEnabled(false);
        groupBox_2->setGeometry(QRect(10, 200, 601, 271));
        pushButtonInfoComplete = new QPushButton(groupBox_2);
        pushButtonInfoComplete->setObjectName(QString::fromUtf8("pushButtonInfoComplete"));
        pushButtonInfoComplete->setGeometry(QRect(120, 40, 351, 24));
        tableWidgetInfos = new QTableWidget(groupBox_2);
        if (tableWidgetInfos->columnCount() < 4)
            tableWidgetInfos->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetInfos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetInfos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetInfos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetInfos->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidgetInfos->setObjectName(QString::fromUtf8("tableWidgetInfos"));
        tableWidgetInfos->setGeometry(QRect(10, 70, 581, 192));
        tableWidgetInfos->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidgetInfos->horizontalHeader()->setMinimumSectionSize(50);
        tableWidgetInfos->horizontalHeader()->setDefaultSectionSize(144);
        tableWidgetInfos->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidgetInfos->horizontalHeader()->setStretchLastSection(false);
        BanqueMainWindow->setCentralWidget(centralwidget);

        retranslateUi(BanqueMainWindow);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), BanqueMainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(BanqueMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BanqueMainWindow)
    {
        BanqueMainWindow->setWindowTitle(QCoreApplication::translate("BanqueMainWindow", "BanqueMainWindow", nullptr));
        pushButtonQuitter->setText(QCoreApplication::translate("BanqueMainWindow", "Quitter", nullptr));
        groupBox->setTitle(QCoreApplication::translate("BanqueMainWindow", "Connexion", nullptr));
        pushButtonConnect->setText(QCoreApplication::translate("BanqueMainWindow", "Connexion a la bdd", nullptr));
        labelIP->setText(QCoreApplication::translate("BanqueMainWindow", "Adresse IP", nullptr));
        lineEditIP->setText(QCoreApplication::translate("BanqueMainWindow", "172.18.58.14", nullptr));
        labelName->setText(QCoreApplication::translate("BanqueMainWindow", "Nom de la bdd", nullptr));
        lineEditName->setText(QCoreApplication::translate("BanqueMainWindow", "banque", nullptr));
        labelLogin->setText(QCoreApplication::translate("BanqueMainWindow", "Login", nullptr));
        lineEditLogin->setText(QCoreApplication::translate("BanqueMainWindow", "snir", nullptr));
        labelPassword->setText(QCoreApplication::translate("BanqueMainWindow", "Mot de passe", nullptr));
        lineEditPassword->setText(QCoreApplication::translate("BanqueMainWindow", "snir", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("BanqueMainWindow", "Affichage infos comptes", nullptr));
        pushButtonInfoComplete->setText(QCoreApplication::translate("BanqueMainWindow", "Afficher les informations de tous les comptes", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetInfos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("BanqueMainWindow", "Nouvelle colonne", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetInfos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("BanqueMainWindow", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetInfos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("BanqueMainWindow", "Prenom", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetInfos->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("BanqueMainWindow", "Solde", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BanqueMainWindow: public Ui_BanqueMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANQUEMAINWINDOW_H
