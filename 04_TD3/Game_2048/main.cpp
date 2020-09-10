#include <iostream>
#include "biblio2048.h"

using namespace std;

int main()
{
    int grille[4][4];
    int g = 1;

    InitialiserGrille(grille);
    do{
        AfficherGrille(grille);
        DeplaceGrille(grille);
        AjouterValeurCase(grille);
    }while(g != 0);
    return 0;
}


