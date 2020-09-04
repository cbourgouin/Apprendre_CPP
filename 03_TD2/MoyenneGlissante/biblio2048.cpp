#include "biblio2048.h"
#include <math.h>
#include <time.h>

void InitialiserAleatoire(){
    srand(time(nullptr));
}

int TirerAleatoire(){
    return (((rand() %2) + 1 ) * 2 );
}
