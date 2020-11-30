#include "serveurwidget.h"
#include "ui_serveurwidget.h"

ServeurWidget::ServeurWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ServeurWidget)
{
    ui->setupUi(this);
    socketEcouteServeur = new QTcpServer(this);
    socketDialogueClient = new QTcpSocket(this);
    process = new QProcess(this);
    connect(socketEcouteServeur, &QTcpServer::newConnection, this, &ServeurWidget::onQTcpServeur_newConnection);
}

ServeurWidget::~ServeurWidget()
{
    delete ui;
}

void ServeurWidget::onQTcpServeur_newConnection()
{
    ui->listWidgetClients->addItem("Nouvelle connection");
    socketDialogueClient = socketEcouteServeur->nextPendingConnection();
    connect(socketDialogueClient, &QTcpSocket::readyRead, this, &ServeurWidget::onQTcpSocket_readyRead);
    connect(socketDialogueClient, &QTcpSocket::disconnected, this, &ServeurWidget::onQTcpSocket_disconnected);
    connect(process, &QProcess::readyReadStandardOutput, this, &ServeurWidget::onQProcess_readyReadStandardOutpout);
}

void ServeurWidget::onQTcpSocket_readyRead()
{
    QChar commande;
    QString reponse;
    QString message;
    if(socketDialogueClient->bytesAvailable()){
        QByteArray demande = socketDialogueClient->readAll();
        commande = demande.at(0);
        switch (commande.toLatin1()) {
        case 'u' : reponse = getenv("USER");
            socketDialogueClient->write(reponse.toLatin1(), reponse.length());
            message = "Réponse envoyée à " + socketDialogueClient->peerAddress().toString()+" : "+reponse;
            ui->listWidgetClients->addItem(message);
            break;
        case 'c': reponse = QHostInfo::localHostName();
            socketDialogueClient->write(reponse.toLatin1(), reponse.length());
            message = "Réponse envoyée à " + socketDialogueClient->peerAddress().toString()+" : "+reponse;
            ui->listWidgetClients->addItem(message);
            break;
        case 'o': process->start("uname");
            socketDialogueClient->write(reponse.toLatin1(), reponse.length());
            break;
        case 'a': process->start("uname", QStringList("-p"));
            socketDialogueClient->write(reponse.toLatin1(), reponse.length());
            break;
        }
    }
}

void ServeurWidget::onQTcpSocket_disconnected()
{
    ui->listWidgetClients->addItem("Client deconnecté");
    socketDialogueClient = nullptr;
}


void ServeurWidget::on_pushButtonLancementServeur_clicked()
{
    if(ui->pushButtonLancementServeur->text() == "Lancement serveur"){
        socketEcouteServeur->listen(QHostAddress::Any, ui->spinBoxPort->value());
        ui->pushButtonLancementServeur->setText("Fermeture serveur");
    }else{
        socketDialogueClient->disconnectFromHost();
        ui->pushButtonLancementServeur->setText("Lancement serveur");
    }

}

void ServeurWidget::on_spinBoxPort_textChanged(const QString &arg1)
{

}

void ServeurWidget::onQProcess_readyReadStandardOutpout()
{
    QString reponse = process->readAllStandardOutput();
    if(!reponse.isEmpty())
    {
        QString message = "Réponse envoyée à " + socketDialogueClient->peerAddress().toString()+" : "+reponse;
        ui->listWidgetClients->addItem(message);
        socketDialogueClient->write(reponse.toLatin1());
    }
}
