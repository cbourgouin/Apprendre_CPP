#include "detecteur.h"
#include "ui_detecteur.h"

Detecteur::Detecteur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Detecteur)
{
    ui->setupUi(this);
    setWindowTitle("Détecteur");
}

Detecteur::~Detecteur()
{
    delete ui;
}

void Detecteur::on_pushButton_clicked()
{
    QMessageBox messageMarche;
    messageMarche.setText("Un intru a été détecté");
    messageMarche.exec();
}
