#ifndef BARRERONDE_H
#define BARRERONDE_H
#include "barre.h"


class BarreRonde : public Barre
{
public:
    BarreRonde(float _rayon, string _reference, string _name);
private:
    float rayon;
};

#endif // BARRERONDE_H
