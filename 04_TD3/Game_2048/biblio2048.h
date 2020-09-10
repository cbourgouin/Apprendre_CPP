#ifndef BIBLIO2048_H
#define BIBLIO2048_H

void InitialiserAleatoire();
int TirerAleatoire();
void InitialiserGrille(int gri[][4]);
void AfficherGrille(int gri[][4]);
int RechercherValeurMax(int gri[][4]);
void DeplaceGrille(int gri[][4]);
void AjouterValeurCase(int gri[][4]);

#endif // BIBLIO2048_H


