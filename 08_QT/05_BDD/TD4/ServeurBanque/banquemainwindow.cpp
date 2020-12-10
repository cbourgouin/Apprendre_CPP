#include "banquemainwindow.h"
#include "ui_banquemainwindow.h"


BanqueMainWindow::BanqueMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BanqueMainWindow)
{
    ui->setupUi(this);
    leServeur = new ServeurBanque(parent);
    leServeur->Start();
    bdd = nullptr;
}

BanqueMainWindow::~BanqueMainWindow()
{
    delete ui;
    leServeur->Stop();
}


void BanqueMainWindow::on_pushButtonConnect_clicked()
{
    //bdd = new QSqlDatabase();
    if(ui->lineEditIP->text() != "" && ui->lineEditName->text() != "" && ui->lineEditLogin->text() != "" && ui->lineEditPassword->text() != "")
    {
        bdd = new QSqlDatabase();
        *bdd = QSqlDatabase::addDatabase("QMYSQL");
        bdd->setHostName(ui->lineEditIP->text());
        bdd->setDatabaseName(ui->lineEditName->text());
        bdd->setUserName(ui->lineEditLogin->text());
        bdd->setPassword(ui->lineEditPassword->text());
        if(!bdd->open())
        {
            qDebug()<<"pb acces bd "<<bdd->lastError();
        }
        else
        {
            qDebug()<<"acces bd ok";
            ui->groupBox->setEnabled(false);
            ui->groupBox_2->setEnabled(true);

        }
    }
    else
    {
        qDebug()<<"il n'y a pas les informations necessaire";
    }
}

void BanqueMainWindow::on_pushButtonInfoComplete_clicked()
{
    QSqlQuery requete("select * from comptes;");
    if(!requete.exec())
    {
        qDebug()<<"pb requete "<<requete.lastError();
    }
    int ligne=0;
    while(requete.next())
    {
          ui->tableWidgetInfos->insertRow(ui->tableWidgetInfos->rowCount());
          int col=0;
          // ajouter un nom
          QTableWidgetItem *nomItem = new QTableWidgetItem(requete.value("nom").toString());
          ui->tableWidgetInfos->setItem(ligne,col,nomItem);
          col++;
          // ajouter un prenom
          QTableWidgetItem *prenomItem = new QTableWidgetItem(requete.value("prenom").toString());
          ui->tableWidgetInfos->setItem(ligne,col,prenomItem);
          col++;
          // ajouter le numero de compte
          QTableWidgetItem *idCompteItem = new QTableWidgetItem(requete.value("idCompte").toString());
          ui->tableWidgetInfos->setItem(ligne,col,idCompteItem);
          col++;
          // ajouter le solde
          QTableWidgetItem *soldeItem = new QTableWidgetItem(requete.value("solde").toString());
          ui->tableWidgetInfos->setItem(ligne,col,soldeItem);
          ligne++;
    }

}
