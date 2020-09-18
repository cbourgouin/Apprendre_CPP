#ifndef BIBLIO2048_H
#define BIBLIO2048_H
#define NB_VAL 4


void InitialiserAleatoire();
int TirerAleatoire();
void InitialiserGrille(int uneGrille[][NB_VAL]);
void AfficherEcran(int uneGrille[][NB_VAL]);
void PlacerNouvelleTuile(int uneGrille[][NB_VAL]);
void JouerCoup(int uneGrille[][NB_VAL], char direction);
void Deplacer(int uneGrille[][NB_VAL], char direction);
void Calculer(int uneGrille[][NB_VAL], char direction);
int CalculerScore(int uneGrille[][NB_VAL]);
bool RechercheFinDePartie(int uneGrille[][NB_VAL]);


#endif // BIBLIO2048_H
