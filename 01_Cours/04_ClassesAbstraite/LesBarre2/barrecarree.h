#ifndef BARRECARREE_H
#define BARRECARREE_H
#include "barre.h"


class BarreCarree : public Barre
{
public:
    BarreCarree(float _cote, string _reference, int _longueur, float _densite);
    virtual ~BarreCarree();
    virtual float CalculerMasse();
private:
    float cote;
};

#endif // BARRECARREE_H

