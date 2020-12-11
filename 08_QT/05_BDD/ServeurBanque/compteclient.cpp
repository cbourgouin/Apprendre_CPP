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

void CompteClient::DefinirNumCompte(QJsonObject donne)
{
    numCompte = 0;
    double solde = 200;
    QString nom;
    QString prenom;
    QString ville;
    int idAgence = 0;

    if (donne.contains("idCompte"))
            numCompte = donne["idCompte"].toInt();

    if (donne.contains("solde"))
            solde = donne["solde"].toDouble();

    if (donne.contains("nom") && donne["nom"].isString())
            nom = donne["nom"].toString();

    if (donne.contains("prenom") && donne["prenom"].isString())
            prenom = donne["prenom"].toString();

    if (donne.contains("ville") && donne["ville"].isString())
            ville = donne["ville"].toString();

    if (donne.contains("idAgence"))
            idAgence = donne["Agence"].toInt();


    bd.CreerCompte(numCompte, solde, nom, prenom, ville, idAgence);
}

int CompteClient::ObtenirNumCompte()
{
    return numCompte;
}

bool CompteClient::InterfaceAccesBDBanque_compteExiste()
{
    return bd.CompteExiste(numCompte);
}


