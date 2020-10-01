#include <iostream>
#include "clavier.h"

using namespace std;

int main()
{
    Clavier leClavier;
    TOUCHES_CLAVIER touche;
    do{
        touche = leClavier.ScruterClavier();
        if(touche != AUCUNE){
            cout << touche << endl;
        }
    }while(touche != FIN);
    return 0;
}
