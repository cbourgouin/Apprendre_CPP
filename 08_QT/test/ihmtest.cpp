#include "ihmtest.h"
#include "ui_ihmtest.h"

IhmTest::IhmTest(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::IhmTest)
{
    ui->setupUi(this);
}

IhmTest::~IhmTest()
{
    delete ui;
}


void IhmTest::on_pushButton_2_clicked()
{
    ui->pushButton->setText("bujur");
    QString texte;
    texte=ui->pushButton_2->text();
    ui->label->setText(texte);
}
