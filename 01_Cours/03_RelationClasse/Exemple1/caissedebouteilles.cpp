#include "caissedebouteilles.h"

using namespace std;

CaisseDeBouteilles::CaisseDeBouteilles(const int _nbBouteilles, const int _contenance, const int _largeur, const int _hauteur, const int _profondeur):
    Contenant(_largeur, _hauteur, _profondeur),
    nbBouteilles(_nbBouteilles),
    contenance(_contenance)
{
    cout << "constructeur de caisseDeBouteille" << endl;
}

CaisseDeBouteilles::~CaisseDeBouteilles()
{
    cout << "destructeur de caisseDeBouteille" << endl;
}

int CaisseDeBouteilles::CalculerVolume()
{
    return contenance / nbBouteilles;
}
