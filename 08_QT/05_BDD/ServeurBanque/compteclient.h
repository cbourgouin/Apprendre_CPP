#ifndef COMPTECLIENT_H
#define COMPTECLIENT_H

#include <QTcpSocket>
#include "interfaceaccesbdbanque.h"
#include <QJsonObject>
#include <QJsonArray>

class CompteClient : public QTcpSocket
{
    Q_OBJECT
public:
    CompteClient(QObject *parent = nullptr);
    ~CompteClient();
    bool Retirer(float montant);
    void Deposer(float montant);
    float ObtenirSolde();
    void DefinirCompte(QJsonObject donne);
    QString ObtenirNomCompte();
    InterfaceAccesBDBanque *bd;
    bool InterfaceAccesBDBanque_compteExiste();
    void DefinirNumCompte(int _numCompte);
    QJsonObject EnvoyerAgence();
private:
    int numCompte;
};

#endif // COMPTECLIENT_H
