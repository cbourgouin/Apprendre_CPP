#include <iostream>
#include <iomanip>

#define NB_RELEVE 5
using namespace std;

int main()
{
    unsigned int mesure[NB_RELEVE];
    unsigned int som = 0;
    float moy;
    bool test;
    int indMin = 0;
    int indMax = 0;

    //Test des valeurs saisi
    do{
        cout << "Donner les valeur : " << endl;
        test = false;
        for(int i=0; i<NB_RELEVE; i++){
            cin >> mesure[i];
            if(mesure[i] > 4095 || mesure[i] < 0){
                cout << "mesure non valide" << endl;
                test = true;
            }
        }
    }while(test == true);

    //Recuperation de la valeur max et minimum
    for(int i=0; i<NB_RELEVE; i++){
        if(mesure[indMin] > mesure[i]){
            indMin = i;
        }
        if(mesure[indMax] < mesure[i]){
            indMax = i;
        }
    }

    //Calcule de la moyenne
    for(int i=0; i<NB_RELEVE; i++){
        if(i != indMin && i != indMax){
            som = som + mesure[i];
        }
    }
    moy = som / (NB_RELEVE - 2);

    //Affichage
    cout << "+" << setfill('-') << setw(12) << "+" << setw(7) << "+" << setfill(' ') << endl;
    cout << "|" << setw(11) << "Min : " << "|" << setw(6) <<  mesure[indMin] << "|" << endl;
    cout << "|" << setw(11) << "Max : " << "|" << setw(6) << mesure[indMax] << "|" << endl;
    cout << "|" << setw(11) << "Moyenne : " << "|" << setw(6) << moy << "|" << endl;
    cout << "+" << setfill('-') << setw(12) << "+" << setw(7) << "+" << setfill(' ') << endl;

    return 0;
}
