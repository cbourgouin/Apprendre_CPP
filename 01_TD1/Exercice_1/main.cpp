#include <iostream>
#define NB_ELEVES 5

using namespace std;

int main()
{
    float note[NB_ELEVES] = {10, 18, 5, 4, 0};
    int i;
    float som = 0.0;
    int nbSup10 = 0;
    float mini = 20.0;
    float maxi = 0.0;
    float moyenne;

    cout << "donner les note" << endl;
    for( i=0; i<NB_ELEVES; i++){

        cin >> note[i];

        //trouve la valeur minimal
        if(note[i] < mini){
            mini = note[i];
        }

        //trouve la valeur maximal
        if(note[i] > maxi){
            maxi = note[i];
        }

        //compte les note superieur a 10
        if(note[i] >= 10){
            nbSup10++;
        }

        //fait la somme des valeur pour la moyenne
        som = som + note[i];
    }

    //calcule de la moyenne
    moyenne = som / NB_ELEVES;

    //affichage
   for( i=0; i<NB_ELEVES; i++){
       cout << "L'élève numéro " << i << "a eu la note " << note[i] << " / 20" << endl;
   }
   cout << endl;
   cout << "note superieur a 10 : " << nbSup10 << endl;
   cout << "moyenne : " << moyenne << endl;
   cout << "Minimum : " << mini << endl;
   cout << "Maximal : " << maxi << endl;


    return 0;
}
