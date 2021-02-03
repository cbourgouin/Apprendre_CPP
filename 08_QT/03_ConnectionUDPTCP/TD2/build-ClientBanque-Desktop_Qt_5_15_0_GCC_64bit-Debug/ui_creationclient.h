/********************************************************************************
** Form generated from reading UI file 'creationclient.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATIONCLIENT_H
#define UI_CREATIONCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreationClient
{
public:
    QPushButton *pushButtonEnvoyer;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNom;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEditNom;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelPrenom;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEditPrenom;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelVille;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEditVille;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelAgence;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBoxAgence;

    void setupUi(QWidget *CreationClient)
    {
        if (CreationClient->objectName().isEmpty())
            CreationClient->setObjectName(QString::fromUtf8("CreationClient"));
        CreationClient->resize(400, 300);
        pushButtonEnvoyer = new QPushButton(CreationClient);
        pushButtonEnvoyer->setObjectName(QString::fromUtf8("pushButtonEnvoyer"));
        pushButtonEnvoyer->setGeometry(QRect(140, 250, 80, 31));
        layoutWidget = new QWidget(CreationClient);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 50, 321, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelNom = new QLabel(layoutWidget);
        labelNom->setObjectName(QString::fromUtf8("labelNom"));

        horizontalLayout->addWidget(labelNom);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        lineEditNom = new QLineEdit(layoutWidget);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));

        horizontalLayout->addWidget(lineEditNom);

        layoutWidget1 = new QWidget(CreationClient);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 100, 321, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelPrenom = new QLabel(layoutWidget1);
        labelPrenom->setObjectName(QString::fromUtf8("labelPrenom"));

        horizontalLayout_2->addWidget(labelPrenom);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        lineEditPrenom = new QLineEdit(layoutWidget1);
        lineEditPrenom->setObjectName(QString::fromUtf8("lineEditPrenom"));

        horizontalLayout_2->addWidget(lineEditPrenom);

        layoutWidget2 = new QWidget(CreationClient);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(40, 150, 321, 26));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelVille = new QLabel(layoutWidget2);
        labelVille->setObjectName(QString::fromUtf8("labelVille"));

        horizontalLayout_3->addWidget(labelVille);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        lineEditVille = new QLineEdit(layoutWidget2);
        lineEditVille->setObjectName(QString::fromUtf8("lineEditVille"));

        horizontalLayout_3->addWidget(lineEditVille);

        layoutWidget3 = new QWidget(CreationClient);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(40, 200, 321, 26));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelAgence = new QLabel(layoutWidget3);
        labelAgence->setObjectName(QString::fromUtf8("labelAgence"));

        horizontalLayout_4->addWidget(labelAgence);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        comboBoxAgence = new QComboBox(layoutWidget3);
        comboBoxAgence->addItem(QString());
        comboBoxAgence->addItem(QString());
        comboBoxAgence->addItem(QString());
        comboBoxAgence->setObjectName(QString::fromUtf8("comboBoxAgence"));
        comboBoxAgence->setMaxVisibleItems(10);

        horizontalLayout_4->addWidget(comboBoxAgence);


        retranslateUi(CreationClient);
        QObject::connect(pushButtonEnvoyer, SIGNAL(clicked()), CreationClient, SLOT(close()));

        comboBoxAgence->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CreationClient);
    } // setupUi

    void retranslateUi(QWidget *CreationClient)
    {
        CreationClient->setWindowTitle(QCoreApplication::translate("CreationClient", "Form", nullptr));
        pushButtonEnvoyer->setText(QCoreApplication::translate("CreationClient", "Envoyer", nullptr));
        labelNom->setText(QCoreApplication::translate("CreationClient", "Nom", nullptr));
        labelPrenom->setText(QCoreApplication::translate("CreationClient", "Prenom", nullptr));
        labelVille->setText(QCoreApplication::translate("CreationClient", "Ville", nullptr));
        labelAgence->setText(QCoreApplication::translate("CreationClient", "Agence", nullptr));
        comboBoxAgence->setItemText(0, QCoreApplication::translate("CreationClient", "SnirBanque Boll\303\251", nullptr));
        comboBoxAgence->setItemText(1, QCoreApplication::translate("CreationClient", "SnirBanque R\303\251publique", nullptr));
        comboBoxAgence->setItemText(2, QCoreApplication::translate("CreationClient", "SnirBanque Arnage", nullptr));

        comboBoxAgence->setCurrentText(QCoreApplication::translate("CreationClient", "SnirBanque Boll\303\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreationClient: public Ui_CreationClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATIONCLIENT_H
