#ifndef BARRECARREE_H
#define BARRECARREE_H
#include "barre.h"


class BarreCarree : public Barre
{
public:
    BarreCarree(float _cote, string _reference, string _name);
private:
    float cote;
};

#endif // BARRECARREE_H
