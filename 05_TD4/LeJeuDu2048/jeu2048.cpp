/**
 * @brief implementation de la classe Jeu2048
 * @file jeu2048.cpp
 * @version 1.0
 * @author Bourgouin Charly
 */
#include "jeu2048.h"

/**
 * @brief Constructeur de Jeu2048
 */
Jeu2048::Jeu2048(): nbCoups(0), score(0)
{
    srand(time(nullptr));
    for(int l=0; l<NB_CASE; l++){
        for(int c=0; c<NB_CASE; c++){
            grille[l][c] = 0;
        }
    }
    grille[rand() % NB_CASE][rand() % NB_CASE] = ((rand() % 2) +1 ) * 2;

}

bool Jeu2048::JouerCoup(char _direction)
{
    direction = _direction;
    Deplacer();
    if(Calculer())
        Deplacer();
    CalculerScore();
    bool fin = RechercherFinDePartie();
    if(!fin)
        PlacerNouvelleTuile();
    return fin;
}

/**
 * @brief Jeu2048::ObtenirNbCoups
 * @return nbCoups
 */
int Jeu2048::ObtenirNbCoups()
{
    return nbCoups;
}

/**
 * @brief Jeu2048::ObtenirScore
 * @return
 */
int Jeu2048::ObtenirScore()
{
    return score;
}

void Jeu2048::ObtenirGrille(int _grille[][NB_CASE])
{
    for(int l=0; l<NB_CASE; l++){
        for(int c=0; c<NB_CASE; c++){
            _grille[l][c] = grille[l][c];
        }
    }
}

int Jeu2048::TirerAleatoire(MODE_ALEATOIRE _mode)
{
    int result;
    switch (_mode) {
        case POSITION : result = rand() % NB_CASE;
        break;
        case TUILE : result = ((rand() % 2) +1 ) * 2;
        break;
    }
    return result;
}

void Jeu2048::PlacerNouvelleTuile()
{
    int l;
    int c;
    do{
        l = TirerAleatoire(POSITION);
        c = TirerAleatoire(POSITION);
    }while(grille[l][c] !=0);
    grille[l][c] = TirerAleatoire(TUILE);
}

void Jeu2048::Calculer()
{
    switch (direction) {
    case 'G':for(int l=0; l<NB_CASE; l++){
             for(int c=0; c<NB_CASE-1; c++){
                if(grille[l][c] == grille[l][c+1]){
                    grille[l][c] = grille[l][c]*2;
                    grille[l][c+1] = 0;
                }
            }
        }
        break;
    case 'D':for(int l=0; l<NB_CASE; l++){
            for(int c=NB_CASE-1; c>0; c--){
               if(grille[l][c] == grille[l][c-1]){
                   grille[l][c] = grille[l][c]*2;
                   grille[l][c-1] = 0;
               }
           }
       }
       break;
    case 'B':for(int c=0; c<NB_CASE; c++){
            for(int l=NB_CASE-1; l>0; l--){
               if(grille[l][c] == grille[l-1][c]){
                   grille[l][c] = grille[l][c]*2;
                   grille[l-1][c] = 0;
               }
           }
       }
       break;
    case 'H':for(int c=0; c<NB_CASE; c++){
            for(int l=0; l>NB_CASE-1; l++){
               if(grille[l][c] == grille[l+1][c]){
                   grille[l][c] = grille[l][c]*2;
                   grille[l+1][c] = 0;
               }
           }
       }
       break;
    }
}

void Jeu2048::Deplacer()
{
    switch (direction) {
    case 'G':for(int l=0; l<NB_CASE; l++){
             for(int c=0; c<NB_CASE-1; c++){
                if(grille[l][c] == 0){
                    grille[l][c] = grille[l][c+1];
                    grille[l][c+1] = 0;
                }
            }
        }
        break;
    case 'D':for(int l=0; l<NB_CASE; l++){
            for(int c=NB_CASE-1; c>0; c--){
               if(grille[l][c] == 0){
                   grille[l][c] = grille[l][c-1];
                   grille[l][c-1] = 0;
               }
           }
       }
       break;
    case 'B':for(int c=0; c<NB_CASE; c++){
            for(int l=NB_CASE-1; l>0; l--){
               if(grille[l][c] == 0){
                   grille[l][c] = grille[l-1][c];
                   grille[l-1][c] = 0;
               }
           }
       }
       break;
    case 'H':for(int c=0; c<NB_CASE; c++){
            for(int l=0; l>NB_CASE-1; l++){
               if(grille[l][c] == 0){
                   grille[l][c] = grille[l+1][c];
                   grille[l+1][c] = 0;
               }
           }
       }
       break;
    }
}

void Jeu2048::CalculerScore()
{
    int somme = 0;
    for(int l=0; l<NB_CASE; l++){
        for(int c=0; c<NB_CASE; c++){
            somme += grille[l][c];
        }
    }
    score = somme;
}

bool Jeu2048::RechercherFinDePartie()
{
    bool fin = false;
    int cpt = 0;
    for(int l=0; l<NB_CASE; l++){
        for(int c=0; c<NB_CASE; c++){
            if(grille[l][c] == 2048){
                fin =true;
            }
            if(grille[l][c] == 0){
                cpt++;
            }
        }
    }
    if(cpt == 0){
        fin =true;
    }
    return fin;
}


