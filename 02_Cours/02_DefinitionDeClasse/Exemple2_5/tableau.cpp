#include "tableau.h"

Tableau::Tableau(int _taille): taille(_taille)
{
    if(taille <= 0)
    {
        ptr = nullptr;
        ErreurCreation excep(CREATION, "taille incorrecte lors de la creation du tableau");
        throw (excep);
    }
    ptr = new int[taille];
}

Tableau::~Tableau()
{
    if(ptr != nullptr)
        delete [] ptr;
}

void Tableau::Affecter(int _indice, int _valeur){
    if(_indice < 0 || _indice > taille){
        ErreurCreation excep(INDICE, "L'indice du tableau n'est pas correct pour l'operateur []");
        throw (excep);
    }
    ptr[_indice] = _valeur;
}
