#include <iostream>
#include "carton.h"
#include "caissedebouteilles.h"

using namespace std;

int main()
{
    CaisseDeBouteilles maCaisse(30, 30, 20, 8, 33);
    cout << maCaisse.Contenant::CalculerVolume();

    return 0;
}
