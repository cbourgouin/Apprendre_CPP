#include <iostream>
using namespace std;

int main()
{
    int nombre1, nombre2;
    try {

        cout << "Entrez deux nombres entiers : ";
        cin >> nombre1 >> nombre2;
        if(nombre2 == 0)
            throw string("Erreur de division par ZERO !");
        else
            cout << nombre1 / nombre2 << endl;

    } catch (string const& chaine) {
        cerr << chaine << endl;
    }

    return 0;
}
