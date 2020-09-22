
#include "jeu2048.h"

using namespace std;

void AfficherGrille(Jeu2048 _leJeu);

int main()
{
    Jeu2048 leJeu;
    bool fin;
    char direction;
    do{
        AfficherGrille(leJeu);
        do{
            cin >> direction;
        }while(direction != 'G' && direction != 'g' && direction != 'D' && direction != 'd' && direction != 'H' && direction != 'h' && direction != 'B' && direction != 'b' && direction != 'F' && direction != 'f' );
        switch (direction) {
        case 'g' : direction = 'G';
            break;
        case 'd' : direction = 'D';
            break;
        case 'h' : direction = 'H';
            break;
        case 'b' : direction = 'B';
            break;
        }
        if(direction == 'f' || direction == 'F')
            fin = true;
        leJeu.JouerCoup(direction);
    }while (fin == true);
    return 0;
}

void AfficherGrille(Jeu2048 _leJeu){
    int score = _leJeu.ObtenirScore();
    int nbCoup = _leJeu.ObtenirNbCoups();
    int grille[NB_CASE][NB_CASE];

    system("clear");
    _leJeu.ObtenirGrille(grille);

    //afichage de l'interface
    cout << "Score : " << score << " | Nombre de coups : " << nbCoup << " |" << endl;

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
