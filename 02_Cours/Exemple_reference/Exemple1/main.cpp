#include <iostream>
#include <lib.h>

using namespace std;

int main()
{

    int a = 1;
    int b = -2;
    int c = 0;

    cout<<"avant l'appel de Ajouter"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;

    // Appel de la fonction Ajouter à compléter dans le tableau suivant le cas
    Ajouter(a, b, c);

    cout<<"après l'appel de Ajouter"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;

    return 0;
}
