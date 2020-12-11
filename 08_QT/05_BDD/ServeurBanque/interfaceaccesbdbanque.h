#ifndef INTERFACEACCESBDBANQUE_H
#define INTERFACEACCESBDBANQUE_H

#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>

class InterfaceAccesBDBanque
{
public:
    InterfaceAccesBDBanque(QString hote = "172.18.58.14", QString bd = "banque", QString login = "snir", QString mdp = "snir");
    float ObtenirSolde(int numCompte);
    void MettreAJourLeSolde(int numCompte, float solde);
    void CreerCompte(int numCompte, double solde, QString nom, QString prenom, QString ville, int idAgence);
    bool CompteExiste(int numCompte);
private:
    QSqlDatabase bdd;
};

#endif // INTERFACEACCESBDBANQUE_H
