#include <iostream>
#include "barrecarree.h"

using namespace std;

int main()
{
    BarreCarree uneBarre(2, "Barre 2x2 en Cuivre", 200, 8.920);
    uneBarre.AfficherCaracteristiques();
    cout << "Le poids de la barre est : ";
    cout << uneBarre.CalculerMasse() / 1000.0;
    cout << " kg" << endl;
    cout << endl;
    return 0;
}
