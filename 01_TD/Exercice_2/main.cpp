#include <iostream>
#define NB_VAL 8

using namespace std;

int main()
{
    int tabl[NB_VAL];
    int save;
    int indMax = NB_VAL-1;
    int i;
    int u;

    cout << "donner " << NB_VAL << " entier(s) : " << endl;
    for(i=0; i<NB_VAL; i++){
        cin >> tabl[i];
    }
    cout << endl;
    for(i=0; i<NB_VAL; i++){
        save = tabl[indMax];
        for(u=NB_VAL-1; u>=0; u--){
            tabl[u] = tabl[u-1];
        }
        tabl[0] = save;
        for(u=0; u<NB_VAL; u++){

            cout << tabl[u] << " ";
        }
        cout << endl;
    }
}
