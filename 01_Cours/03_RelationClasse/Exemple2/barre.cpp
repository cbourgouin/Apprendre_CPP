#include "barre.h"



Barre::Barre(string _reference, string _name):
    reference(_reference),
    name(_name)
{

}

void Barre::AfficherCaracteristiques()
{
    cout << "nom : " << name << endl;
    cout << "référence : " << reference << endl;
}
