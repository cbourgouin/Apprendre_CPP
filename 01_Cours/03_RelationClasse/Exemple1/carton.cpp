#include "carton.h"

using namespace std;

Carton::Carton(const int _largeur, const int _hauteur, const int _profondeur, const float _poidsMaxi):
    Contenant(_largeur, _hauteur, _profondeur),
    poidsMaxi(_poidsMaxi)
{
    cout << "constructeur de la classe Carton" << endl;
}

Carton::~Carton()
{
    cout << "destructeur de Carton" << endl;
}
