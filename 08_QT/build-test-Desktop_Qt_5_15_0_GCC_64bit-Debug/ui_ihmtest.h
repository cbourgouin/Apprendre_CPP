/********************************************************************************
** Form generated from reading UI file 'ihmtest.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IHMTEST_H
#define UI_IHMTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IhmTest
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *IhmTest)
    {
        if (IhmTest->objectName().isEmpty())
            IhmTest->setObjectName(QString::fromUtf8("IhmTest"));
        IhmTest->resize(388, 307);
        verticalLayout_3 = new QVBoxLayout(IhmTest);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(IhmTest);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(IhmTest);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox = new QGroupBox(IhmTest);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);


        horizontalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(IhmTest);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        verticalLayout_2->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        verticalLayout_2->addWidget(radioButton_4);


        horizontalLayout_3->addWidget(groupBox_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 121, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(IhmTest);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(IhmTest);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(IhmTest);
        QObject::connect(pushButton, SIGNAL(clicked()), IhmTest, SLOT(close()));

        QMetaObject::connectSlotsByName(IhmTest);
    } // setupUi

    void retranslateUi(QWidget *IhmTest)
    {
        IhmTest->setWindowTitle(QCoreApplication::translate("IhmTest", "IhmTest", nullptr));
        label->setText(QCoreApplication::translate("IhmTest", "TextLabel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("IhmTest", "GroupBox", nullptr));
        radioButton->setText(QCoreApplication::translate("IhmTest", "RadioButton", nullptr));
        radioButton_2->setText(QCoreApplication::translate("IhmTest", "RadioButton", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("IhmTest", "GroupBox", nullptr));
        radioButton_3->setText(QCoreApplication::translate("IhmTest", "RadioButton", nullptr));
        radioButton_4->setText(QCoreApplication::translate("IhmTest", "RadioButton", nullptr));
        pushButton->setText(QCoreApplication::translate("IhmTest", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("IhmTest", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IhmTest: public Ui_IhmTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IHMTEST_H
