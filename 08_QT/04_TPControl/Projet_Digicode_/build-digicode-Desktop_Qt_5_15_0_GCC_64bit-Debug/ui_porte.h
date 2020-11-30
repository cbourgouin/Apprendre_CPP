/********************************************************************************
** Form generated from reading UI file 'porte.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTE_H
#define UI_PORTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Porte
{
public:
    QLabel *labelEtat;
    QLabel *labelImage;

    void setupUi(QWidget *Porte)
    {
        if (Porte->objectName().isEmpty())
            Porte->setObjectName(QString::fromUtf8("Porte"));
        Porte->resize(269, 300);
        labelEtat = new QLabel(Porte);
        labelEtat->setObjectName(QString::fromUtf8("labelEtat"));
        labelEtat->setGeometry(QRect(20, 220, 331, 71));
        QFont font;
        font.setPointSize(17);
        labelEtat->setFont(font);
        labelImage = new QLabel(Porte);
        labelImage->setObjectName(QString::fromUtf8("labelImage"));
        labelImage->setGeometry(QRect(70, 50, 111, 161));
        labelImage->setPixmap(QPixmap(QString::fromUtf8(":/img/porte_fermee.png")));

        retranslateUi(Porte);

        QMetaObject::connectSlotsByName(Porte);
    } // setupUi

    void retranslateUi(QWidget *Porte)
    {
        Porte->setWindowTitle(QCoreApplication::translate("Porte", "Form", nullptr));
        labelEtat->setText(QCoreApplication::translate("Porte", "Porte est verrouill\303\251e", nullptr));
        labelImage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Porte: public Ui_Porte {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTE_H
