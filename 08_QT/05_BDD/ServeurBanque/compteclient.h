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
    void DefinirNumCompte(QJsonObject donne);
    int ObtenirNumCompte();
    InterfaceAccesBDBanque bd;
    bool InterfaceAccesBDBanque_compteExiste();
private:
    int numCompte;
    float solde;
};

#endif // COMPTECLIENT_H
