#include <iostream>
#include <iomanip>

#define NB_ACQUIS 6

using namespace std;

void AfficherTableau(float donnees[], int nbElement){
    for(int i=0; i<nbElement-2; i++){
        cout << "+" << setfill('-') << setw(10);
    }
    cout << setfill(' ') << endl;
    for(int i=0; i<nbElement-2; i++){
        cout <<  "|" << setw(9) << left << donnees[i];
    }
    cout << endl;
    for(int i=0; i<nbElement-2; i++){
        cout << "+" << setfill('-') << setw(10);
    }
    cout << endl;
}

int main()
{
    float valeursBrute[NB_ACQUIS];
    float valeursMoyenne[NB_ACQUIS - 2];

    //Recuperation des valeurs saisi
    for(int i=0; i<NB_ACQUIS; i++){
        cin >> valeursBrute[i];
    }

    //calcules des moyenne
    for(int i=0; i<NB_ACQUIS-2; i++){
        valeursMoyenne[i] = (valeursBrute[i] + valeursBrute[i+1] + valeursBrute[i+2])/3;
    }

    //Afficher
    AfficherTableau(valeursMoyenne, NB_ACQUIS);

    return 0;
}

