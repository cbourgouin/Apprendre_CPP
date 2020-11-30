/********************************************************************************
** Form generated from reading UI file 'serveurwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVEURWIDGET_H
#define UI_SERVEURWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServeurWidget
{
public:
    QPushButton *pushButtonLancementServeur;
    QLabel *labelClients;
    QPushButton *pushButtonQuitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelPort;
    QSpinBox *spinBoxPort;
    QListWidget *listWidgetClients;

    void setupUi(QWidget *ServeurWidget)
    {
        if (ServeurWidget->objectName().isEmpty())
            ServeurWidget->setObjectName(QString::fromUtf8("ServeurWidget"));
        ServeurWidget->resize(287, 262);
        pushButtonLancementServeur = new QPushButton(ServeurWidget);
        pushButtonLancementServeur->setObjectName(QString::fromUtf8("pushButtonLancementServeur"));
        pushButtonLancementServeur->setGeometry(QRect(20, 50, 251, 24));
        labelClients = new QLabel(ServeurWidget);
        labelClients->setObjectName(QString::fromUtf8("labelClients"));
        labelClients->setGeometry(QRect(20, 80, 58, 16));
        pushButtonQuitter = new QPushButton(ServeurWidget);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(20, 230, 251, 24));
        layoutWidget = new QWidget(ServeurWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 251, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelPort = new QLabel(layoutWidget);
        labelPort->setObjectName(QString::fromUtf8("labelPort"));

        horizontalLayout->addWidget(labelPort);

        spinBoxPort = new QSpinBox(layoutWidget);
        spinBoxPort->setObjectName(QString::fromUtf8("spinBoxPort"));
        spinBoxPort->setMaximum(9999);
        spinBoxPort->setValue(8888);

        horizontalLayout->addWidget(spinBoxPort);

        listWidgetClients = new QListWidget(ServeurWidget);
        listWidgetClients->setObjectName(QString::fromUtf8("listWidgetClients"));
        listWidgetClients->setGeometry(QRect(20, 100, 251, 121));

        retranslateUi(ServeurWidget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), ServeurWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(ServeurWidget);
    } // setupUi

    void retranslateUi(QWidget *ServeurWidget)
    {
        ServeurWidget->setWindowTitle(QCoreApplication::translate("ServeurWidget", "ServeurWidget", nullptr));
        pushButtonLancementServeur->setText(QCoreApplication::translate("ServeurWidget", "Lancement serveur", nullptr));
        labelClients->setText(QCoreApplication::translate("ServeurWidget", "Clients", nullptr));
        pushButtonQuitter->setText(QCoreApplication::translate("ServeurWidget", "Quitter", nullptr));
        labelPort->setText(QCoreApplication::translate("ServeurWidget", "Num\303\251ro de Port", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServeurWidget: public Ui_ServeurWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVEURWIDGET_H
