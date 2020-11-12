/********************************************************************************
** Form generated from reading UI file 'poidideal.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POIDIDEAL_H
#define UI_POIDIDEAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PoidIdeal
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButtonSuite;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNom;
    QLineEdit *lineEditNom;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelPrenom;
    QLineEdit *lineEditPrenom;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelSexe;
    QRadioButton *radioButtonFemme;
    QRadioButton *radioButtonHomme;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelAge;
    QSpinBox *spinBoxAge;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBoxPoids;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBoxTaille;
    QWidget *tab_2;
    QTextEdit *textEditAfficheur;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonDev;
    QPushButton *pushButtonLor;
    QPushButton *pushButtonLorAge;
    QPushButton *pushButtonQuitter;

    void setupUi(QWidget *PoidIdeal)
    {
        if (PoidIdeal->objectName().isEmpty())
            PoidIdeal->setObjectName(QString::fromUtf8("PoidIdeal"));
        PoidIdeal->setEnabled(true);
        PoidIdeal->resize(466, 545);
        PoidIdeal->setMinimumSize(QSize(466, 545));
        PoidIdeal->setMaximumSize(QSize(466, 545));
        tabWidget = new QTabWidget(PoidIdeal);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(40, 40, 381, 391));
        tabWidget->setMovable(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pushButtonSuite = new QPushButton(tab);
        pushButtonSuite->setObjectName(QString::fromUtf8("pushButtonSuite"));
        pushButtonSuite->setGeometry(QRect(140, 260, 80, 24));
        widget = new QWidget(tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 60, 185, 189));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelNom = new QLabel(widget);
        labelNom->setObjectName(QString::fromUtf8("labelNom"));

        horizontalLayout->addWidget(labelNom);

        lineEditNom = new QLineEdit(widget);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));

        horizontalLayout->addWidget(lineEditNom);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelPrenom = new QLabel(widget);
        labelPrenom->setObjectName(QString::fromUtf8("labelPrenom"));

        horizontalLayout_2->addWidget(labelPrenom);

        lineEditPrenom = new QLineEdit(widget);
        lineEditPrenom->setObjectName(QString::fromUtf8("lineEditPrenom"));

        horizontalLayout_2->addWidget(lineEditPrenom);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelSexe = new QLabel(widget);
        labelSexe->setObjectName(QString::fromUtf8("labelSexe"));

        horizontalLayout_3->addWidget(labelSexe);

        radioButtonFemme = new QRadioButton(widget);
        radioButtonFemme->setObjectName(QString::fromUtf8("radioButtonFemme"));

        horizontalLayout_3->addWidget(radioButtonFemme);

        radioButtonHomme = new QRadioButton(widget);
        radioButtonHomme->setObjectName(QString::fromUtf8("radioButtonHomme"));

        horizontalLayout_3->addWidget(radioButtonHomme);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labelAge = new QLabel(widget);
        labelAge->setObjectName(QString::fromUtf8("labelAge"));

        horizontalLayout_4->addWidget(labelAge);

        spinBoxAge = new QSpinBox(widget);
        spinBoxAge->setObjectName(QString::fromUtf8("spinBoxAge"));
        spinBoxAge->setValue(20);

        horizontalLayout_4->addWidget(spinBoxAge);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);

        doubleSpinBoxPoids = new QDoubleSpinBox(widget);
        doubleSpinBoxPoids->setObjectName(QString::fromUtf8("doubleSpinBoxPoids"));
        doubleSpinBoxPoids->setValue(75.000000000000000);

        horizontalLayout_5->addWidget(doubleSpinBoxPoids);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_6->addWidget(label_2);

        doubleSpinBoxTaille = new QDoubleSpinBox(widget);
        doubleSpinBoxTaille->setObjectName(QString::fromUtf8("doubleSpinBoxTaille"));
        doubleSpinBoxTaille->setValue(1.750000000000000);

        horizontalLayout_6->addWidget(doubleSpinBoxTaille);


        verticalLayout->addLayout(horizontalLayout_6);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        textEditAfficheur = new QTextEdit(tab_2);
        textEditAfficheur->setObjectName(QString::fromUtf8("textEditAfficheur"));
        textEditAfficheur->setGeometry(QRect(10, 10, 361, 201));
        widget1 = new QWidget(tab_2);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(26, 260, 321, 86));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonDev = new QPushButton(widget1);
        pushButtonDev->setObjectName(QString::fromUtf8("pushButtonDev"));

        verticalLayout_2->addWidget(pushButtonDev);

        pushButtonLor = new QPushButton(widget1);
        pushButtonLor->setObjectName(QString::fromUtf8("pushButtonLor"));

        verticalLayout_2->addWidget(pushButtonLor);

        pushButtonLorAge = new QPushButton(widget1);
        pushButtonLorAge->setObjectName(QString::fromUtf8("pushButtonLorAge"));

        verticalLayout_2->addWidget(pushButtonLorAge);

        tabWidget->addTab(tab_2, QString());
        pushButtonQuitter = new QPushButton(PoidIdeal);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(180, 460, 80, 24));

        retranslateUi(PoidIdeal);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), PoidIdeal, SLOT(close()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(PoidIdeal);
    } // setupUi

    void retranslateUi(QWidget *PoidIdeal)
    {
        PoidIdeal->setWindowTitle(QCoreApplication::translate("PoidIdeal", "PoidIdeal", nullptr));
        pushButtonSuite->setText(QCoreApplication::translate("PoidIdeal", "Suite", nullptr));
        labelNom->setText(QCoreApplication::translate("PoidIdeal", "Nom", nullptr));
        labelPrenom->setText(QCoreApplication::translate("PoidIdeal", "Prenom", nullptr));
        labelSexe->setText(QCoreApplication::translate("PoidIdeal", "Sexe", nullptr));
        radioButtonFemme->setText(QCoreApplication::translate("PoidIdeal", "Femme", nullptr));
        radioButtonHomme->setText(QCoreApplication::translate("PoidIdeal", "Homme", nullptr));
        labelAge->setText(QCoreApplication::translate("PoidIdeal", "Age", nullptr));
        label->setText(QCoreApplication::translate("PoidIdeal", "Poids (kg)", nullptr));
        label_2->setText(QCoreApplication::translate("PoidIdeal", "Taille (m)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("PoidIdeal", "Informations personnelles", nullptr));
        pushButtonDev->setText(QCoreApplication::translate("PoidIdeal", "Poids ideal formule de devine", nullptr));
        pushButtonLor->setText(QCoreApplication::translate("PoidIdeal", "Poids ideal formule de lorentz", nullptr));
        pushButtonLorAge->setText(QCoreApplication::translate("PoidIdeal", "Poids ideal formule de lorentz en fonction de l'age", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("PoidIdeal", "Calcul du poids id\303\251al", nullptr));
        pushButtonQuitter->setText(QCoreApplication::translate("PoidIdeal", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PoidIdeal: public Ui_PoidIdeal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POIDIDEAL_H
