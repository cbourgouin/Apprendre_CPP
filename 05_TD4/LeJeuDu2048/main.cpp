
#include "jeu2048.h"

using namespace std;

void AfficherGrille(Jeu2048 _leJeu);

int main()
{
    Jeu2048 leJeu;
    AfficherGrille(leJeu);

    return 0;
}

void AfficherGrille(Jeu2048 _leJeu){
    int grille[NB_CASE][NB_CASE];
    _leJeu.ObtenirGrille(grille);

    //afichage de l'interface
    cout << "Score : " << _leJeu.ObtenirScore() << " | Nombre de coups : " << _leJeu.ObtenirNbCoups() << " |" << endl;

    //affichage de la grille
    for(int l=0; l<NB_CASE; l++){
        for(int c=0; c<NB_CASE; c++){
            cout << "+" << setfill('-') << setw(6);
        }
        cout << "+" << endl;
        for(int c=0; c<NB_CASE; c++){
            cout << "|" << setfill(' ');
            if(grille[l][c] != 0){
                cout << setw(5) << grille[l][c];
            }else{
                cout << setw(6);
            }
        }
        cout << "|" << endl;
    }
    for(int l=0; l<NB_CASE; l++){
        cout << "+" << setfill('-') << setw(6);
    }
    cout << "+" << endl;

    //affichage des commandes
    cout << "Votre déplacement : H (haut), B (bas), D (droite), G (gauche) : ";
}
