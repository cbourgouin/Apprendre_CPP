#include "barre.h"



Barre::Barre(const string _reference, const int _longueur, const float _densite):
    reference(_reference),
    longueur(_longueur),
    densite(_densite)
{
    cout << "Appel du constructeur de Barre" << endl;
}

Barre::~Barre()
{
    cout << "Appel du destructeur de Barre" << endl;
}

void Barre::AfficherCaracteristiques()
{
    cout << "référence : " << reference << endl;
    cout << "longueur : " << longueur << endl;
    cout << "densite : " << densite << endl;
}
