#include "compteclient.h"

CompteClient::CompteClient(QObject *parent):
    QTcpSocket(parent)
{

}

CompteClient::~CompteClient()
{

}

bool CompteClient::Retirer(float montant)
{
    bool retraitPossible = false;
    if(solde >= montant)
    {
        retraitPossible = true;
        solde -= montant;
    }
    return retraitPossible;
}

void CompteClient::Deposer(float montant)
{
    solde += montant;
}

float CompteClient::ObtenirSolde()
{
    return solde;
}

void CompteClient::DefinirNumCompte(int nc)
{
    numCompte = nc;
    solde = 200,0;
}

int CompteClient::ObtenirNumCompte()
{
    return numCompte;
}
