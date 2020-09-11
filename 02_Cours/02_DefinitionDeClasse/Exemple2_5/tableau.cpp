#include "tableau.h"

Tableau::Tableau(int _taille): taille(_taille)
{
    if(taille <= 0)
    {
        ptr = nullptr;
        ErreurCreation excep(CREATION, "taille incorrecte lors de la creation du tableau");
        throw (excep);
    }
}
