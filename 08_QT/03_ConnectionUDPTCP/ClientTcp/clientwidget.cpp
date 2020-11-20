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
        QHostAddress adresse;
        adresse.operator=(ui->lineEditIpServeur->text());
        socketDeDialogueAvecServeur->connectToHost(adresse, ui->spinBoxPort->value());
        ui->pushButtonConnexion->setText("Déconnexion");
    }else{
        socketDeDialogueAvecServeur->disconnectFromHost();
        ui->pushButtonConnexion->setText("Connexion");
    }
}

void ClientWidget::on_pushButtonNomMachine_clicked()
{

}

void ClientWidget::on_pushButtonNomUtilisateur_clicked()
{

}

void ClientWidget::on_pushButtonProcesseur_clicked()
{

}

void ClientWidget::on_pushButtonOS_clicked()
{

}

void ClientWidget::onQTcpSocket_connected()
{
    ui->textEditEtatConnexion->append("Connecté");
}

void ClientWidget::onQTcpSocket_disconnected()
{
    ui->textEditEtatConnexion->append("Déconnecté");
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
}

void ClientWidget::onQTcpSocket_error(QAbstractSocket::SocketError socketError)
{

}

