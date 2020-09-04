#include <iostream>
#include <iomanip>
#define N 5
using namespace std;

int main()
{
    int tabl[N] = {21,45,32,1,47};
    int indMini;
    int valMini;

   for(int i=0; i<N; i++){
        valMini = tabl[i];
        indMini = i;
        for(int u=0; u<N; u++){
            if(u>=i && tabl[u]<valMini){
                indMini = u;
                valMini = tabl[u];
            }
        }
        tabl[indMini] = tabl[i];
        tabl[i] = valMini;

        for(int u=0; u<N; u++){
            cout  << "|" << setw(2) << tabl[u];
        }
        cout << "|" << endl;
    }

    return 0;
}
