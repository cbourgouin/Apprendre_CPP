#include "barrecarree.h"



BarreCarree::BarreCarree(float _cote, string _reference, int _longueur, float _densite):
    Barre(_reference, _longueur, _densite),
    cote(_cote)
{
    cout << "Appel du constructeur de BarreCarree" << endl;
}

BarreCarree::~BarreCarree()
{
    cout << "Appel du destructeur de BarreCarree" << endl;
}

float BarreCarree::CalculerMasse()
{
    return longueur*(cote*cote)*densite;
}
