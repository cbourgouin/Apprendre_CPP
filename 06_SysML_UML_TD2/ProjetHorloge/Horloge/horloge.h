#ifndef HORLOGE_H
#define HORLOGE_H
#include <time.h>
#include "cadran.h"
#include "clavier.h"

enum MODE_HORLOGE{
    AUCUN_REGLAGE,
    REGLAGE_HEURES,
    REGLAGE_MINUTES
};

class Horloge
{
private:
    int heure;
    int minute;
    int nbMode;
    int resolution;
    MODE_HORLOGE mode;
    Clavier *leClavier;
    Cadran *leCadran;
    time_t valAvant;
public:
    Horloge(int _nbMode, int _resolution = 24);
    ~Horloge();
    bool AvancerMinutes();
    void AvancerHeures();
    void ChangerMode();
    void ReculerHeure();
    void ReculerMinute();
    void Operation();
};

#endif // HORLOGE_H
