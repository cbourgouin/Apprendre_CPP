#include "creationclient.h"
#include "ui_creationclient.h"

CreationClient::CreationClient(QTcpSocket *_socket, int _numCompte, QWidget *parent):
QWidget(parent),
ui(new Ui::CreationClient),
  numCompte(_numCompte),
  socketClientBanque(_socket)
{
    ui->setupUi(this);
    QChar commande = 'A';
    quint16 tailleDonnees = 0;
    QBuffer tampon;
    tampon.open(QIODevice::WriteOnly);
    QDataStream out(&tampon);
    out << tailleDonnees << commande;
    tailleDonnees = tampon.size() - sizeof (tailleDonnees);
    tampon.seek(0);
    out << tailleDonnees;
    socketClientBanque->write(tampon.buffer());
}

CreationClient::~CreationClient()
{
    delete ui;
}

void CreationClient::on_pushButtonEnvoyer_clicked()
{
    QJsonObject requete;

    if(ui->lineEditNom->text() == "" || ui->lineEditPrenom->text() == "" || ui->lineEditVille->text() == "")
    {
        QMessageBox message;
        message.setText("données manquante");
        message.exec();
    }
    else
    {
        requete["idCompte"] = numCompte;
        requete["nom"] = ui->lineEditNom->text();
        requete["prenom"] = ui->lineEditPrenom->text();
        requete["ville"] = ui->lineEditVille->text();
        requete["idAgence"] = (ui->comboBoxAgence->currentIndex() + 1);
    }

    QChar commande = 'C';
    quint16 tailleDonnees = 0;
    QBuffer tampon;
    tampon.open(QIODevice::WriteOnly);
    QDataStream out(&tampon);
    out << tailleDonnees << commande << requete;
    tailleDonnees = tampon.size() - sizeof (tailleDonnees);
    tampon.seek(0);
    out << tailleDonnees;
    socketClientBanque->write(tampon.buffer());

}
