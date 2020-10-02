#ifndef HORLOGE_H
#define HORLOGE_H
/**
  * @file   :   horloge.h
  * @author :   Bourgouin Charly
  * @date   :   01/10/2020
  * @detail :   Assure le bon deroulement de l'horloge
  *             ainsi que la gestion des parametres
  */

#include <time.h>
#include "cadran.h"
#include "clavier.h"

enum MODE_HORLOGE{
    AUCUN_REGLAGE = 0,
    REGLAGE_HEURES,
    REGLAGE_MINUTES
};

class Horloge
{
private:
    int heure;          /// valeurs des heures
    int minute;         /// valeurs des minutes
    int nbMode;         /// nombre de mode disponible ( par default 3 )
    int resolution;     /// resolution de l'horloge, 12 ou 24 heures ( par default 24 )
    int mode;  /// mode actuelle de l'horloge
    time_t valAvant;
public:
    Clavier *leClavier;
    Cadran *leCadran;
    Horloge(int _nbMode = 3, int _resolution = 24);
    ~Horloge();
    bool AvancerMinutes();
    bool AvancerHeures();
    void ChangerMode();
    void ReculerHeure();
    void ReculerMinute();
    void Operation();
    void ActualiserHeure();
    TOUCHES_CLAVIER Controler(TOUCHES_CLAVIER _laTouche);
};

#endif // HORLOGE_H
