#ifndef SERVEURBANQUE_H
#define SERVEURBANQUE_H

#include "compteclient.h"
#include <QTcpServer>
#include <QBuffer>

class ServeurBanque : public QTcpServer
{
public:
    ServeurBanque(QObject *parent = nullptr);
    void Start();
    void Stop();
    void EnvoyerMessage(QString msg, CompteClient *client);
private:
    QList<CompteClient *> lesConnexionsClients;
private slots:
    void onServeurBanque_newConnection();
    void onCompteClient_disconnected();
    void onCompteClient_readyRead();
};

#endif // SERVEURBANQUE_H
