#include "porte.h"
#include "ui_porte.h"

Porte::Porte(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Porte)
{
    ui->setupUi(this);
}

Porte::~Porte()
{
    delete ui;
}

void Porte::deverrouiller()
{
    QPixmap *etatPorte = new QPixmap(":/img/porte_ouverte.png");
    ui->labelEtat->setText("La porte est déverrouillée");
    ui->labelImage->setPixmap(*etatPorte);
}

void Porte::verrouiller()
{
    QPixmap *etatPorte = new QPixmap(":/img/porte_fermee.png");
    ui->labelEtat->setText("La porte est verrouillée");
    ui->labelImage->setPixmap(*etatPorte);
}
