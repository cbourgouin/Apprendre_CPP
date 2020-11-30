#include <QDebug>
#include "centraledalarme.h"
#include "clavier.h"

CentraleDalarme::CentraleDalarme(const int _tailleCode, QObject *_parent) :
    QObject(_parent),
    tailleCode(_tailleCode),
    indiceCourant(0)
{
    combinaison = new quint8;
    for(int i = 0 ; i < tailleCode ; i++)
        combinaison[i]=0;

    leClavier = new Clavier(this);
    leClavier->show();
}

CentraleDalarme::~CentraleDalarme()
{
    delete[] combinaison;
    delete leClavier;
}

void CentraleDalarme::FabriquerCode(const quint8 _chiffre)
{
    if(indiceCourant < TAILLE_CODE){
        combinaison[indiceCourant] = _chiffre;
        indiceCourant++;
    }else{
        for(int i=0; i<TAILLE_CODE-1; i++){
            combinaison[i] = combinaison[i+1];
        }
        combinaison[TAILLE_CODE-1] = _chiffre;
    }



    // Affichage de la combinaison lors de sa construction
    QString tampon = "Combinaison = ";
    for(int i = 0 ; i < tailleCode; i++)
        tampon += QString::number(combinaison[i]);
    qDebug() << tampon;

}
