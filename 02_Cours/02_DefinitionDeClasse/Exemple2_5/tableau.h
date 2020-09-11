#ifndef TABLEAU_H
#define TABLEAU_H
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <errno.h>
#include <algorithm>


class Tableau
{
private:
    int *ptr;
    int taille;
public:
    Tableau(int _taille);
    ~Tableau();
    void Affecter(int _indice, int _valeur);
    int &operator[](int _indice);
};

class ErreurCreation
{
private:
    int codeErreur;
    string message;
};

#endif // TABLEAU_H
