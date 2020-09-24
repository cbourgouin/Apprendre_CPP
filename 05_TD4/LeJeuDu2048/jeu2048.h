#include <math.h>
#include <time.h>
#include <iostream>
#include <iomanip>
#include <string.h>

#ifndef JEU2049_H
#define JEU2049_H
#define NB_CASE 4

enum MODE_ALEATOIRE{
    POSITION, TUILE
};

class Jeu2048
{
private:
    int  grille[NB_CASE][NB_CASE];
    char direction;
    int  nbCoups;
    int  score;
public:
    Jeu2048();
    bool JouerCoup(char _direction);
    int  ObtenirNbCoups();
    int  ObtenirScore();
    void ObtenirGrille(int _grille[][NB_CASE]);
private:
    int  TirerAleatoire(MODE_ALEATOIRE _mode);
    void PlacerNouvelleTuile();
    bool Calculer();
    void Deplacer();
    void CalculerScore();
    bool RechercherFinDePartie();
};

#endif // JEU2049_H
