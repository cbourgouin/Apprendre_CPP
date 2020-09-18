#include "biblio2048.h"
#include <math.h>
#include <time.h>
#include <iostream>
#include <iomanip>

void InitialiserAleatoire()
{
     srand(time(nullptr));
}

int TirerAleatoire()
{
      return (((rand() % 2) +1 ) * 2);
}

void InitialiserGrille(int uneGrille[][NB_VAL])
{
    for(int l=0; l<NB_VAL-1; l++){
        for(int c=0; c<NB_VAL-1; c++){
            uneGrille[l][c] = 0;
        }
    }
}



void AfficherEcran(int uneGrille[][NB_VAL])
{
    do{
        int ligne = TirerAleatoire();
        int colonne = TirerAleatoire();
    }while(uneGrille[ligne][colonne] != 0);
    unr
}

