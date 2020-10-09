#ifndef BARRERONDE_H
#define BARRERONDE_H
#include "barre.h"


class BarreRonde : public Barre
{
public:
    BarreRonde(string _reference, int _longueur, float _densite, float _rayon);
    virtual ~BarreRonde();
    virtual float CalculerMasse();
private:
    float rayon;
};

#endif // BARRERONDE_H

