#include "dab_mainwindow.h"
#include "ui_dab_mainwindow.h"

DAB_MainWindow::DAB_MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DAB_MainWindow)
{
    ui->setupUi(this);
    socketClientBanque = new QTcpSocket(this);
    connect(socketClientBanque, &QTcpSocket::connected, this, &DAB_MainWindow::onQTcpSocket_connected);
    connect(socketClientBanque, &QTcpSocket::disconnected, this, &DAB_MainWindow::onQTcpSocket_disconnected);
    connect(socketClientBanque, &QTcpSocket::readyRead, this, &DAB_MainWindow::onQTcpSocket_readyRead);
        connect(socketClientBanque,
        QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error),
        this,
        &DAB_MainWindow::onQTcpSocket_error);
}

DAB_MainWindow::~DAB_MainWindow()
{
    delete ui;
}


void DAB_MainWindow::on_pushButtonConnexion_clicked()
{
    if(ui->pushButtonConnexion->text() == "Connexion"){
        QHostAddress adresse = QHostAddress(ui->lineEditAdresse->text());
        socketClientBanque->connectToHost(adresse, ui->spinBoxPort->value());
    }else{
        socketClientBanque->disconnectFromHost();
    }
}

void DAB_MainWindow::onQTcpSocket_connected()
{
    ui->listWidgetEtatConnexion->addItem("Connecté");
    ui->pushButtonConnexion->setText("Deconnexion");
    ui->pushButtonEnvoi->setEnabled(true);
    ui->pushButtonNumeroCompte->setEnabled(true);
}

void DAB_MainWindow::onQTcpSocket_disconnected()
{
    ui->listWidgetEtatConnexion->addItem("Déconnecté");
    ui->pushButtonConnexion->setText("Connexion");
    ui->pushButtonEnvoi->setEnabled(false);
    ui->pushButtonNumeroCompte->setEnabled(false);
}

void DAB_MainWindow::onQTcpSocket_error(QAbstractSocket::SocketError socketError)
{

}

void DAB_MainWindow::onQTcpSocket_readyRead()
{
    ui->listWidgetEtatConnexion->addItem("prêt pour la lecture");
    quint16 taille=0;
    QString message="";
    if(socketClientBanque->bytesAvailable() >= (qint64)sizeof(taille)){
        QDataStream in(socketClientBanque);
        in >> taille;
        if(socketClientBanque->bytesAvailable() >= (qint64)taille){
            in >> message;
        }
    }
    ui->lineEditMessageBanque->clear();
    ui->lineEditMessageBanque->setText(message);
}

void DAB_MainWindow::on_pushButtonNumeroCompte_clicked()
{
    if(ui->spinBoxNumeroCompte->value() > 0){
        int numeroDeCompte = ui->spinBoxNumeroCompte->value();
        QChar commande = 'N';
        quint16 tailleDonnees = 0;
        QBuffer tampon;
        tampon.open(QIODevice::WriteOnly);
        QDataStream out(&tampon);
        out << tailleDonnees << commande << numeroDeCompte;
        tailleDonnees = tampon.size() - sizeof (tailleDonnees);
        tampon.seek(0);
        out << tailleDonnees;
        socketClientBanque->write(tampon.buffer());
    }
}

void DAB_MainWindow::on_pushButtonEnvoi_clicked()
{
    if(ui->spinBoxNumeroCompte->value() > 0){
        if(ui->radioButtonDepot->isChecked()){
            float montant = ui->doubleSpinBoxMontant->value();
            QChar commande = 'D';
            quint16 tailleDonnees = 0;
            QBuffer tampon;
            tampon.open(QIODevice::WriteOnly);
            QDataStream out(&tampon);
            out << tailleDonnees << commande << montant;
            tailleDonnees = tampon.size() - sizeof (tailleDonnees);
            tampon.seek(0);
            out << tailleDonnees;
            socketClientBanque->write(tampon.buffer());
        }
        if(ui->radioButtonRetrait->isChecked()){
            float montant = ui->doubleSpinBoxMontant->value();
            QChar commande = 'R';
            quint16 tailleDonnees = 0;
            QBuffer tampon;
            tampon.open(QIODevice::WriteOnly);
            QDataStream out(&tampon);
            out << tailleDonnees << commande << montant;
            tailleDonnees = tampon.size() - sizeof (tailleDonnees);
            tampon.seek(0);
            out << tailleDonnees;
            socketClientBanque->write(tampon.buffer());
        }
        if(ui->radioButtonSolde->isChecked()){
            QChar commande = 'S';
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
    }
}
