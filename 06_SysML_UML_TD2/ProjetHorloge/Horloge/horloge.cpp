#include "horloge.h"

Horloge::Horloge(int _nbMode, int _resolution):
    heure(0),
    minute(0),
    nbMode(_nbMode),
    resolution(_resolution),
    mode(AUCUN_REGLAGE)
{
    leCadran = new Cadran(5, 5);
    leClavier = new Clavier();
    valAvant = time(NULL);
}

Horloge::~Horloge()
{
    delete leCadran;
    delete leClavier;
}
