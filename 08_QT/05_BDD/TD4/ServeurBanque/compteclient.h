#ifndef COMPTECLIENT_H
#define COMPTECLIENT_H

#include <QTcpSocket>

class CompteClient : public QTcpSocket
{
    Q_OBJECT
public:
    CompteClient(QObject *parent = nullptr);
    ~CompteClient();
    bool Retirer(float montant);
    void Deposer(float montant);
    float ObtenirSolde();
    void DefinirNumCompte(int nc);
    int ObtenirNumCompte();
private:
    int numCompte;
    float solde;
};

#endif // COMPTECLIENT_H
