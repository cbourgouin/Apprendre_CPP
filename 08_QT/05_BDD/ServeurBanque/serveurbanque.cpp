#include "serveurbanque.h"
#include <QMessageBox>


ServeurBanque::ServeurBanque(QObject *parent):
    QTcpServer(parent)
{
    if(!connect(this, &QTcpServer::newConnection, this, &ServeurBanque::onServeurBanque_newConnection))
    {
        QMessageBox msgBox;
        msgBox.setText("La liaison n’a pu avoir lieu");
        msgBox.exec();
        this->close();
    }

}

void ServeurBanque::Start()
{
    if(!listen(QHostAddress::Any, 8888))
    {
        QMessageBox msgBox;
        msgBox.setText("La liaison n’a pu avoir lieu");
        msgBox.exec();
        this->close();
    }
}

void ServeurBanque::Stop()
{
    this->close();
}

void ServeurBanque::EnvoyerMessage(QString msg, CompteClient *client)
{
    quint16 tailleDonnees = 0;
    QBuffer tampon;
    tampon.open(QIODevice::WriteOnly);
    QDataStream out(&tampon);
    out << tailleDonnees << msg;
    tailleDonnees = tampon.size() - sizeof (tailleDonnees);
    tampon.seek(0);
    out << tailleDonnees;
    client->write(tampon.buffer());
}

void ServeurBanque::onServeurBanque_newConnection()
{
    while(hasPendingConnections()){
        CompteClient *newClient = static_cast<CompteClient *>(nextPendingConnection());
        connect(newClient, &QTcpSocket::readyRead, this, &ServeurBanque::onCompteClient_readyRead);
        connect(newClient, &QTcpSocket::disconnected, this, &ServeurBanque::onCompteClient_disconnected);
        lesConnexionsClients.append(newClient);
        EnvoyerMessage("Connecté", lesConnexionsClients.last());
    }
}

void ServeurBanque::onCompteClient_disconnected()
{
    CompteClient *client=(CompteClient*)sender();
    if(!client)
    {
        QMessageBox msg;
        msg.setText("erreur deconnexion : "+client->errorString());
        msg.exec();
    }
    else
    {
        lesConnexionsClients.removeOne(client);
        client->deleteLater();
    }
}

void ServeurBanque::onCompteClient_readyRead()
{
    CompteClient *client=(CompteClient*)sender();
    quint16 taille=0;
    QChar commande;
    QString message;
    int paramNumCompte;
    float param;
    QJsonObject paramCreate;
    if(!client)
    {
        QMessageBox msg;
        msg.setText("erreur de lecture : "+client->errorString());
        msg.exec();
    }
    else
    {
        if(client->bytesAvailable() >= (qint64)sizeof(taille)){
            QDataStream in(client);
            in >> taille;
            if(client->bytesAvailable() >= (qint64)taille){
                in >> commande;
                switch (commande.toLatin1()) {
                case 'N' :if(client->InterfaceAccesBDBanque_compteExiste()){
                        message = "Bienvenue sur le compte " + QString::number(client->ObtenirNumCompte());
                        EnvoyerMessage(message, client);
                    }
                    else
                    {
                        message = "compte inexistant";
                        EnvoyerMessage(message, client);
                    }
                    break;
                case 'R' : in >> param;
                    client->Retirer(param);
                    message = "nouveau solde : " + QString::number(client->ObtenirSolde());
                    EnvoyerMessage(message, client);
                    break;
                case 'D' : in >> param;
                    client->Deposer(param);
                    message = "nouveau solde : " + QString::number(client->ObtenirSolde());
                    EnvoyerMessage(message, client);
                    break;
                case 'S' : message = "solde : " + QString::number(client->ObtenirSolde());
                    EnvoyerMessage(message, client);
                    break;
                case 'C' : in >> paramCreate;
                    client->DefinirNumCompte(paramCreate);
                }
            }
        }
    }
}
