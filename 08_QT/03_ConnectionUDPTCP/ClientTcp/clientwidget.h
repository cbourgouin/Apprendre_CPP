#ifndef CLIENTWIDGET_H
#define CLIENTWIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QHostAddress>

QT_BEGIN_NAMESPACE
namespace Ui { class ClientWidget; }
QT_END_NAMESPACE

class ClientWidget : public QWidget
{
    Q_OBJECT

public:
    ClientWidget(QWidget *parent = nullptr);
    ~ClientWidget();

private slots:
    void on_pushButtonConnexion_clicked();
    void on_pushButtonNomMachine_clicked();
    void on_pushButtonNomUtilisateur_clicked();
    void on_pushButtonProcesseur_clicked();
    void on_pushButtonOS_clicked();
    void onQTcpSocket_connected();
    void onQTcpSocket_disconnected();
    void onQTcpSocket_hostFound();
    void onQTcpSocket_stateChanged(QAbstractSocket::SocketState socketState);
    void onQTcpSocket_aboutToClose();
    void onQTcpSocket_bytesWritten(quint64 bytes);
    void onQTcpSocket_readChannelFinished();
    void onQTcpSocket_readyRead();
    void onQTcpSocket_error(QAbstractSocket::SocketError socketError);
private:
    Ui::ClientWidget *ui;
    QTcpSocket *socketDeDialogueAvecServeur;
    QString typeDeDemande;
};
#endif // CLIENTWIDGET_H
