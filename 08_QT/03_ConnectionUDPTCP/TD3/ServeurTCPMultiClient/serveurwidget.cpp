#include "serveurwidget.h"
#include "ui_serveurwidget.h"

ServeurWidget::ServeurWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ServeurWidget)
{
    ui->setupUi(this);
    socketEcouteServeur = new QTcpServer(this);
    connect(socketEcouteServeur, &QTcpServer::newConnection, this, &ServeurWidget::onQTcpServeur_newConnection);
}

ServeurWidget::~ServeurWidget()
{
    delete ui;
}

void ServeurWidget::onQTcpServeur_newConnection()
{
    ui->listWidgetClients->addItem("Nouvelle connection");
    QTcpSocket *client;
    client = socketEcouteServeur->nextPendingConnection();
    connect(client, &QTcpSocket::readyRead, this, &ServeurWidget::onQTcpSocket_readyRead);
    connect(client, &QTcpSocket::disconnected, this, &ServeurWidget::onQTcpSocket_disconnected);
    socketDialogueClient.append(client);
    QProcess *leProcess = new QProcess();
    connect(leProcess, &QProcess::readyReadStandardOutput, this, &ServeurWidget::onQProcess_readyReadStandardOutpout);
    process.append(leProcess);
}

void ServeurWidget::onQTcpSocket_readyRead()
{
    QTcpSocket *client = qobject_cast<QTcpSocket*>(sender());
    QProcess *unProcess = process.at(socketDialogueClient.indexOf(client));
    QChar commande;
    QString reponse;
    QString message;
    if(client->bytesAvailable()){
        QByteArray demande = client->readAll();
        commande = demande.at(0);
        switch (commande.toLatin1()) {
        case 'u' : reponse = getenv("USER");
            client->write(reponse.toLatin1(), reponse.length());
            message = "Réponse envoyée à " + client->peerAddress().toString()+" : "+reponse;
            break;
        case 'c': reponse = QHostInfo::localHostName();
            client->write(reponse.toLatin1(), reponse.length());
            message = "Réponse envoyée à " + client->peerAddress().toString()+" : "+reponse;
            break;
        case 'o': unProcess->start("uname");
            client->write(reponse.toLatin1(), reponse.length());
            break;
        case 'a': unProcess->start("uname", QStringList("-p"));
            client->write(reponse.toLatin1(), reponse.length());
            break;
        }
    }
}

void ServeurWidget::onQTcpSocket_disconnected()
{
    QTcpSocket *client = qobject_cast<QTcpSocket*>(sender());
    int index = socketDialogueClient.indexOf(client);
    socketDialogueClient.removeAt(index);
    ui->listWidgetClients->addItem("Client deconnecté");

}


void ServeurWidget::on_pushButtonLancementServeur_clicked()
{
    if(ui->pushButtonLancementServeur->text() == "Lancement serveur"){
        socketEcouteServeur->listen(QHostAddress::Any, ui->spinBoxPort->value());
        ui->pushButtonLancementServeur->setText("fermeture serveur");
    }else{
        socketDialogueClient.clear();
        ui->pushButtonLancementServeur->setText("Lancement serveur");

    }

}

void ServeurWidget::on_spinBoxPort_textChanged(const QString &arg1)
{

}

void ServeurWidget::onQProcess_readyReadStandardOutpout()
{
    QProcess *unProcess = qobject_cast<QProcess*>(sender());
    QTcpSocket *client = socketDialogueClient.at(process.indexOf(unProcess));
    QString reponse = unProcess->readAllStandardOutput();
    if(!reponse.isEmpty())
    {
        QString message = "Réponse envoyée à " + client->peerAddress().toString()+" : "+reponse;
        ui->listWidgetClients->addItem(message);
        client->write(reponse.toLatin1());
    }
}
