#include <iostream>
#include "cadran.h"
#include <unistd.h>

using namespace std;

int main()
{
    Cadran leCadran;
    for(int i=0; i<11; i++){
        leCadran.Afficher(i, 3);
        sleep(1);
    }
    leCadran.Afficher("Fin ", 1);
    char touche;
    cin >> touche;
    return 0;
}
