#include <iostream>
#include "cadran.h"
#include <unistd.h>

using namespace std;

int main()
{
    Cadran leCadran;
    Cadran unAutreCadran(10, 10, 2, 20);
    for(int i=0; i<11; i++){
        leCadran.Afficher(i, 2);
        unAutreCadran.Afficher(10-i, 4, 1);
        sleep(1);
    }
    leCadran.Afficher("Fin ", 0);
    unAutreCadran.Effacer();
    unAutreCadran.Afficher("Fin ", 0, 1);
    char touche;
    cin >> touche;
    return 0;
}
