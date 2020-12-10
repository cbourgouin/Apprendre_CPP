#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    bdd=QSqlDatabase::addDatabase("QMYSQL");
    bdd.setHostName("172.18.58.7");
    bdd.setDatabaseName("france2018");
    bdd.setUserName("snir");
    bdd.setPassword("snir");
    //ouverture de la base
    if(!bdd.open()){
     qDebug()<<"pb ouverture"<< bdd.lastError();
    }else{
    qDebug()<<"ouverture bdd ok";
    }

    QSqlQuery requete("select code, name from regions order by name;" );
        if (!requete.exec()){
            qDebug()<<"pb requete "<<requete.lastError();
        }
        QString nom;
        QString id;

        while(requete.next())
        {
            nom=requete.value("name").toString();
            id=requete.value("code").toString();
            ui->comboBoxRegions->addItem(nom,id);
        }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonNomDep_clicked()
{
    if(ui->lineEditNumDep->isModified())
    {
        QSqlQuery query;
        query.prepare("select name from departments where code=:nro ;");
        query.bindValue(":nro", ui->lineEditNumDep->text());
        if(!query.exec())
        {
            qDebug()<<"pb requete : "<<query.lastError();
        }
        else
        {
            query.next();
            ui->labelNomDep->setText(query.value("name").toString());
        }

    }
}

void MainWindow::on_comboBoxRegions_currentIndexChanged(int index)
{
        // recupere l'id de la region
        QString idRegion=ui->comboBoxRegions->itemData(index).toString();
        // vider la liste des departements
        ui->comboBoxDepartements->clear();
        ui->comboBoxDepartements->addItem("Choisissez un département");

        QSqlQuery requete;
        requete.prepare("select code, name from departments where region_code=:cde ;" );
        requete.bindValue(":cde", idRegion);
            if (!requete.exec()){
                qDebug()<<"pb requete "<<requete.lastError();
            }
            QString nom;
            QString id;

            while(requete.next())
            {
                nom=requete.value("name").toString();
                id=requete.value("code").toString();
                ui->comboBoxDepartements->addItem(nom,id);
            }
}

void MainWindow::on_comboBoxDepartements_currentIndexChanged(int index)
{
    // recupere l'id deu departement
    QString idDep=ui->comboBoxDepartements->itemData(index).toString();
    // vider la liste des ville
    ui->comboBoxVilles->clear();
    ui->comboBoxVilles->addItem("Choisissez un département");

    QSqlQuery requete;
    requete.prepare("select id, name from cities where department_code=:cde ;" );
    requete.bindValue(":cde", idDep);
        if (!requete.exec()){
            qDebug()<<"pb requete "<<requete.lastError();
        }
        QString nom;
        QString id;

        while(requete.next())
        {
            nom=requete.value("name").toString();
            id=requete.value("id").toString();
            ui->comboBoxVilles->addItem(nom,id);
        }
}
