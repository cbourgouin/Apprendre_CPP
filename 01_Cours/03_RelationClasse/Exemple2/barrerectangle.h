#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H
#include "barre.h"


class BarreRectangle : public Barre
{
public:
    BarreRectangle(float _longueur, float _largeur, string _reference, string _name);
private:
    float longueur;
    float largeur;
};

#endif // BARRERECTANGLE_H
