#ifndef INTERFACEACCESBDBANQUE_H
#define INTERFACEACCESBDBANQUE_H
 #include <QSqlDatabase>

class InterfaceAccesBDBanque
{
public:
    InterfaceAccesBDBanque(QString hote, QString bdd, QString login, QString mdp);
    float ObtenirSolde(int numCompte);
    void MettreAJourLeSolde(int numCompte, float nouveauSolde);
private:
    QSqlDatabase bdd;
};

#endif // INTERFACEACCESBDBANQUE_H
