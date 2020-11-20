/********************************************************************************
** Form generated from reading UI file 'clientwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWIDGET_H
#define UI_CLIENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWidget
{
public:
    QGroupBox *groupBoxServeur;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *labelIPServeur;
    QLineEdit *lineEditIpServeur;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelPortServeur;
    QSpinBox *spinBoxPort;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonQuitter;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonConnexion;
    QVBoxLayout *verticalLayout;
    QLabel *labelEtatConnexion;
    QTextEdit *textEditEtatConnexion;
    QGroupBox *groupBoxClient;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButtonNomMachine;
    QPushButton *pushButtonNomUtilisateur;
    QPushButton *pushButtonProcesseur;
    QPushButton *pushButtonOS;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEditNomMachine;
    QLineEdit *lineEditNomUtilisateur;
    QLineEdit *lineEditProcesseur;
    QLineEdit *lineEditOS;

    void setupUi(QWidget *ClientWidget)
    {
        if (ClientWidget->objectName().isEmpty())
            ClientWidget->setObjectName(QString::fromUtf8("ClientWidget"));
        ClientWidget->resize(534, 350);
        groupBoxServeur = new QGroupBox(ClientWidget);
        groupBoxServeur->setObjectName(QString::fromUtf8("groupBoxServeur"));
        groupBoxServeur->setGeometry(QRect(30, 30, 471, 131));
        widget = new QWidget(groupBoxServeur);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 451, 96));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelIPServeur = new QLabel(widget);
        labelIPServeur->setObjectName(QString::fromUtf8("labelIPServeur"));

        horizontalLayout->addWidget(labelIPServeur);

        lineEditIpServeur = new QLineEdit(widget);
        lineEditIpServeur->setObjectName(QString::fromUtf8("lineEditIpServeur"));

        horizontalLayout->addWidget(lineEditIpServeur);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelPortServeur = new QLabel(widget);
        labelPortServeur->setObjectName(QString::fromUtf8("labelPortServeur"));

        horizontalLayout_2->addWidget(labelPortServeur);

        spinBoxPort = new QSpinBox(widget);
        spinBoxPort->setObjectName(QString::fromUtf8("spinBoxPort"));
        spinBoxPort->setFrame(true);
        spinBoxPort->setReadOnly(false);
        spinBoxPort->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBoxPort->setKeyboardTracking(true);
        spinBoxPort->setMaximum(100000);
        spinBoxPort->setValue(8888);

        horizontalLayout_2->addWidget(spinBoxPort);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButtonQuitter = new QPushButton(widget);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));

        horizontalLayout_3->addWidget(pushButtonQuitter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonConnexion = new QPushButton(widget);
        pushButtonConnexion->setObjectName(QString::fromUtf8("pushButtonConnexion"));

        horizontalLayout_3->addWidget(pushButtonConnexion);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelEtatConnexion = new QLabel(widget);
        labelEtatConnexion->setObjectName(QString::fromUtf8("labelEtatConnexion"));

        verticalLayout->addWidget(labelEtatConnexion);

        textEditEtatConnexion = new QTextEdit(widget);
        textEditEtatConnexion->setObjectName(QString::fromUtf8("textEditEtatConnexion"));

        verticalLayout->addWidget(textEditEtatConnexion);


        horizontalLayout_4->addLayout(verticalLayout);

        groupBoxClient = new QGroupBox(ClientWidget);
        groupBoxClient->setObjectName(QString::fromUtf8("groupBoxClient"));
        groupBoxClient->setGeometry(QRect(30, 170, 471, 171));
        widget1 = new QWidget(groupBoxClient);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 30, 451, 131));
        horizontalLayout_5 = new QHBoxLayout(widget1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushButtonNomMachine = new QPushButton(widget1);
        pushButtonNomMachine->setObjectName(QString::fromUtf8("pushButtonNomMachine"));

        verticalLayout_3->addWidget(pushButtonNomMachine);

        pushButtonNomUtilisateur = new QPushButton(widget1);
        pushButtonNomUtilisateur->setObjectName(QString::fromUtf8("pushButtonNomUtilisateur"));

        verticalLayout_3->addWidget(pushButtonNomUtilisateur);

        pushButtonProcesseur = new QPushButton(widget1);
        pushButtonProcesseur->setObjectName(QString::fromUtf8("pushButtonProcesseur"));

        verticalLayout_3->addWidget(pushButtonProcesseur);

        pushButtonOS = new QPushButton(widget1);
        pushButtonOS->setObjectName(QString::fromUtf8("pushButtonOS"));

        verticalLayout_3->addWidget(pushButtonOS);


        horizontalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lineEditNomMachine = new QLineEdit(widget1);
        lineEditNomMachine->setObjectName(QString::fromUtf8("lineEditNomMachine"));

        verticalLayout_4->addWidget(lineEditNomMachine);

        lineEditNomUtilisateur = new QLineEdit(widget1);
        lineEditNomUtilisateur->setObjectName(QString::fromUtf8("lineEditNomUtilisateur"));

        verticalLayout_4->addWidget(lineEditNomUtilisateur);

        lineEditProcesseur = new QLineEdit(widget1);
        lineEditProcesseur->setObjectName(QString::fromUtf8("lineEditProcesseur"));

        verticalLayout_4->addWidget(lineEditProcesseur);

        lineEditOS = new QLineEdit(widget1);
        lineEditOS->setObjectName(QString::fromUtf8("lineEditOS"));

        verticalLayout_4->addWidget(lineEditOS);


        horizontalLayout_5->addLayout(verticalLayout_4);


        retranslateUi(ClientWidget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), ClientWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(ClientWidget);
    } // setupUi

    void retranslateUi(QWidget *ClientWidget)
    {
        ClientWidget->setWindowTitle(QCoreApplication::translate("ClientWidget", "ClientWidget", nullptr));
        groupBoxServeur->setTitle(QCoreApplication::translate("ClientWidget", "Connexion au serveur", nullptr));
        labelIPServeur->setText(QCoreApplication::translate("ClientWidget", "Adresse IP du serveur : ", nullptr));
        lineEditIpServeur->setText(QCoreApplication::translate("ClientWidget", "172.18.58.83", nullptr));
        labelPortServeur->setText(QCoreApplication::translate("ClientWidget", "Num\303\251ro de port du serveur : ", nullptr));
        pushButtonQuitter->setText(QCoreApplication::translate("ClientWidget", "Quitter", nullptr));
        pushButtonConnexion->setText(QCoreApplication::translate("ClientWidget", "Connexion", nullptr));
        labelEtatConnexion->setText(QCoreApplication::translate("ClientWidget", "Etat de la connexion", nullptr));
        groupBoxClient->setTitle(QCoreApplication::translate("ClientWidget", "Informations Client", nullptr));
        pushButtonNomMachine->setText(QCoreApplication::translate("ClientWidget", "Nom de l'ordinateur distant", nullptr));
        pushButtonNomUtilisateur->setText(QCoreApplication::translate("ClientWidget", "Nom de l'utilisateur", nullptr));
        pushButtonProcesseur->setText(QCoreApplication::translate("ClientWidget", "Architecture Processeur", nullptr));
        pushButtonOS->setText(QCoreApplication::translate("ClientWidget", "OS de l'ordinateur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWidget: public Ui_ClientWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWIDGET_H
