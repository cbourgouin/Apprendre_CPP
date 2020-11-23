#include "clientwidget.h"
#include "ui_clientwidget.h"

ClientWidget::ClientWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ClientWidget)
{
    ui->setupUi(this);
    socketDeDialogueAvecServeur = new QTcpSocket(this);
    connect(socketDeDialogueAvecServeur, &QTcpSocket::connected, this, &ClientWidget::onQTcpSocket_connected);
    connect(socketDeDialogueAvecServeur, &QTcpSocket::disconnected, this, &ClientWidget::onQTcpSocket_disconnected);
    connect(socketDeDialogueAvecServeur, &QTcpSocket::hostFound, this, &ClientWidget::onQTcpSocket_hostFound);
    connect(socketDeDialogueAvecServeur, &QTcpSocket::stateChanged, this, &ClientWidget::onQTcpSocket_stateChanged);
    connect(socketDeDialogueAvecServeur, &QTcpSocket::aboutToClose, this, &ClientWidget::onQTcpSocket_aboutToClose);
    connect(socketDeDialogueAvecServeur, &QTcpSocket::bytesWritten, this, &ClientWidget::onQTcpSocket_bytesWritten);
    connect(socketDeDialogueAvecServeur, &QTcpSocket::readChannelFinished, this, &ClientWidget::onQTcpSocket_readChannelFinished);
    connect(socketDeDialogueAvecServeur, &QTcpSocket::readyRead, this, &ClientWidget::onQTcpSocket_readyRead);
    connect(socketDeDialogueAvecServeur,
    QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error),
    this,
    &ClientWidget::onQTcpSocket_error);
}


ClientWidget::~ClientWidget()
{
    delete ui;
}


void ClientWidget::on_pushButtonConnexion_clicked()
{
    if(ui->pushButtonConnexion->text() != "Déconnexion"){
        QHostAddress adresse = QHostAddress(ui->lineEditIpServeur->text());
        socketDeDialogueAvecServeur->connectToHost(adresse, ui->spinBoxPort->value());
    }else{
        socketDeDialogueAvecServeur->disconnectFromHost();
    }
}

void ClientWidget::on_pushButtonNomMachine_clicked()
{
    typeDeDemande="c";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::on_pushButtonNomUtilisateur_clicked()
{
    typeDeDemande="u";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::on_pushButtonProcesseur_clicked()
{
    typeDeDemande="a";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::on_pushButtonOS_clicked()
{
    typeDeDemande="o";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::onQTcpSocket_connected()
{
    ui->pushButtonConnexion->setText("Déconnexion");
    ui->textEditEtatConnexion->append("Connecté");
    ui->groupBoxClient->setEnabled(true);
    ui->lineEditIpServeur->setEnabled(false);
    ui->spinBoxPort->setEnabled(false);
}

void ClientWidget::onQTcpSocket_disconnected()
{
    ui->pushButtonConnexion->setText("Connexion");
    ui->textEditEtatConnexion->append("Déconnecté");
    ui->groupBoxClient->setEnabled(false);
    ui->lineEditIpServeur->setEnabled(true);
    ui->spinBoxPort->setEnabled(true);
}

void ClientWidget::onQTcpSocket_hostFound()
{
    ui->textEditEtatConnexion->append("Serveur Trouvé");
}

void ClientWidget::onQTcpSocket_stateChanged(QAbstractSocket::SocketState socketState)
{
    ui->textEditEtatConnexion->append("Status du Socket changé");
}

void ClientWidget::onQTcpSocket_aboutToClose()
{
    ui->textEditEtatConnexion->append("sur le point de fermer");
}

void ClientWidget::onQTcpSocket_bytesWritten(quint64 bytes)
{
    ui->textEditEtatConnexion->append("octets écrits");
}

void ClientWidget::onQTcpSocket_readChannelFinished()
{
    ui->textEditEtatConnexion->append("fin du canal de lecture");
}

void ClientWidget::onQTcpSocket_readyRead()
{
    ui->textEditEtatConnexion->append("prêt pour la lecture");
    QByteArray reponse = socketDeDialogueAvecServeur->readAll();
    switch(typeDeDemande.data()->toLatin1()) {
        case 'c' : ui->lineEditNomMachine->setText(reponse);
        break;
        case 'u' : ui->lineEditNomUtilisateur->setText(reponse);
        break;
        case 'a' : ui->lineEditProcesseur->setText(reponse);
        break;
        case 'o' : ui->lineEditOS->setText(reponse);
        break;
    }
}

void ClientWidget::onQTcpSocket_error(QAbstractSocket::SocketError socketError)
{
    ui->textEditEtatConnexion->append(socketDeDialogueAvecServeur->errorString());
}



