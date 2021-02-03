#include "compteclient.h"

CompteClient::CompteClient(QObject *parent):
    QTcpSocket(parent)
{
    bd = new InterfaceAccesBDBanque();
}

CompteClient::~CompteClient()
{
    delete bd;
}

bool CompteClient::Retirer(float montant)
{
    bool retraitPossible = false;
    float solde = bd->ObtenirSolde(numCompte);
    if(solde >= montant)
    {
        retraitPossible = true;
        bd->MettreAJourLeSolde(numCompte, (solde - montant));
    }
    return retraitPossible;
}

void CompteClient::Deposer(float montant)
{
    float solde = bd->ObtenirSolde(numCompte);
    bd->MettreAJourLeSolde(numCompte, (solde + montant));
}

float CompteClient::ObtenirSolde()
{
    return bd->ObtenirSolde(numCompte);
}

void CompteClient::DefinirCompte(QJsonObject donne)
{
    double solde = 200;
    QString nom;
    QString prenom;
    QString ville;
    int idAgence = 0;

    if (donne.contains("nom") && donne["nom"].isString())
            nom = donne["nom"].toString();

    if (donne.contains("prenom") && donne["prenom"].isString())
            prenom = donne["prenom"].toString();

    if (donne.contains("ville") && donne["ville"].isString())
            ville = donne["ville"].toString();

    if (donne.contains("idAgence"))
            idAgence = donne["idAgence"].toInt();


    bd->CreerCompte(numCompte, solde, nom, prenom, ville, idAgence);
}

QString CompteClient::ObtenirNomCompte()
{
    return bd->ObtenirNom(numCompte);
}

bool CompteClient::InterfaceAccesBDBanque_compteExiste()
{
    return bd->CompteExiste(numCompte);
}

void CompteClient::DefinirNumCompte(const int _numCompte)
{
    numCompte = _numCompte;
}

QJsonObject CompteClient::EnvoyerAgence()
{
    return bd->ObtenirAgence();
}


