#include "interfaceaccesbdbanque.h"

InterfaceAccesBDBanque::InterfaceAccesBDBanque(QString hote, QString bd, QString login, QString mdp)
{
            bdd = QSqlDatabase::addDatabase("QMYSQL");
            bdd.setHostName(hote);
            bdd.setDatabaseName(bd);
            bdd.setUserName(login);
            bdd.setPassword(mdp);
            if(!bdd.open())
            {
                qDebug()<<"pb acces bd "<<bdd.lastError();
            }
}

float InterfaceAccesBDBanque::ObtenirSolde(int numCompte)
{
    QSqlQuery requete;
    float solde;

    requete.prepare("select solde from comptes where idCompte = :nc ;");
    requete.bindValue(":nc", numCompte);
        if(!requete.exec())
        {
            qDebug()<<"pb requete "<<requete.lastError();
        }
        else
        {
            solde = requete.value("solde").toFloat();
        }
        return solde;
}

void InterfaceAccesBDBanque::MettreAJourLeSolde(int numCompte, float solde)
{
    QSqlQuery requete;

    requete.prepare("update comptes set solde = :sol where idCompte = :nc ;");
    requete.bindValue(":sol", solde);
    requete.bindValue(":nc", numCompte);
        if(!requete.exec())
        {
            qDebug()<<"pb requete MettreAJourLeSolde "<<requete.lastError();
        }
}

void InterfaceAccesBDBanque::CreerCompte(int idCompte, double solde, QString nom, QString prenom, QString ville, int idAgence)
{
    if(!CompteExiste(idCompte))
    {
        QSqlQuery requete;

        requete.prepare("insert into comptes (idCompte, solde, nom, prenom, Ville, id_agence) values (:idc , :sld , :nom , :prn , :vll , :ida );");
        requete.bindValue(":idc", idCompte);
        requete.bindValue(":sld", solde);
        requete.bindValue(":nom", nom);
        requete.bindValue(":prn", prenom);
        requete.bindValue(":vll", ville);
        requete.bindValue(":ida", idAgence);
            if(!requete.exec())
            {
                qDebug()<<"pb requete CreerCompte "<<requete.lastError();
            }
    }
}

bool InterfaceAccesBDBanque::CompteExiste(int numCompte)
{
    QSqlQuery requete;
    bool existe=false;
    requete.prepare("select solde from comptes where idCompte=:id;");
    requete.bindValue(":id",numCompte);
    requete.exec();
    if (!requete.exec()){
        qDebug()<<"pb requete CompteExiste "<<requete.lastError();
    }
    // si le compte existe on passe existe a vrai
    if (requete.size()!=0)
    {
        existe=true;
    }
    return existe;
}
