#include <math.h>
#include <time.h>
#include <iostream>
#include <iomanip>

void InitialiserAleatoire()
{
     srand(time(nullptr));
}

int TirerAleatoire()
{
      return (((rand() % 2) +1 ) * 2);
}

void InitialiserGrille(int gri[][4]){
    InitialiserAleatoire();
    for(int i=0; i<4; i++){
        for(int u=0; u<4; u++){
            gri[i][u] = 0;
        }
    }
    gri[rand() % 4][rand() % 4] = TirerAleatoire();
}

void AfficherGrille(int gri[][4]){
    using namespace std;
    for(int u=0; u<4; u++){
        cout << setfill('-') << setw(13) << " " << endl;
        cout << "|";
        for(int i=0; i<4; i++){
            if(gri[u][i] == 0){
               cout << setfill(' ') << setw(3) << "|";
            }else{
                cout << setfill(' ') << setw(2) << gri[u][i] << "|";
            }
        }
        cout << " " << endl;
    }
    cout << setfill('-') << setw(13) << " " << endl;
}

int RechercherValeurMax(int gri[][4]){
    int valMax = gri[0][0];
    for(int i=0; i<4; i++){
        for(int u=0; u<4; u++){
            if(gri[i][u] > valMax){
                valMax = gri[i][u];
            }
        }
    }
    return valMax;
}

void DeplaceGrille(int gri[][4], char cdj){
    switch(cdj){
        case 'D' : for(int i=0; i<4; i++){
            int nbInd = 3;
            for(int u=3; u>=0; u--){
                if(gri[i][u] != 0){
                    gri[i][nbInd] = gri[i][u];
                    if(u!=nbInd){
                        gri[i][u] = 0;
                    }
                    nbInd--;
                }
            }
        } break;
        case 'G' : for(int i=0; i<4; i++){
            int nbInd = 0;
            for(int u=0; u<4; u++){
                if(gri[i][u] != 0){
                    gri[i][nbInd] = gri[i][u];
                    if(u!=nbInd){
                        gri[i][u] = 0;
                    }
                    nbInd++;
                }
            }
        } break;
        case 'H' : for(int i=0; i<4; i++){
            int nbInd = 0;
            for(int u=0; u<4; u++){
                if(gri[i][u] != 0){
                    gri[nbInd][u] = gri[i][u];
                    if(i!=nbInd){
                        gri[i][u] = 0;
                    }
                    nbInd++;
                }
            }
        }
        case 'B' : for(int i=0; i<4; i++){
            int nbInd = 3;
            for(int u=3; u>=0; u--){
                if(gri[i][u] != 0){
                    gri[nbInd][u] = gri[i][u];
                    if(i!=nbInd){
                        gri[i][u] = 0;
                    }
                    nbInd--;
                }
            }
        }
    }
}
