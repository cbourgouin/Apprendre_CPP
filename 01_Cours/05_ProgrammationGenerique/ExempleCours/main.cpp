#include <QCoreApplication>
#include <iostream>
#include <iomanip>
#include <vector>
#include <iostream>

using namespace std;

template <typename T>
T RechercherPlusPetit(const T &a, const T &b)
{
    T retour;
    if(a<b)
        retour = a;
    else
        retour = b;
    return retour;
}

int main(int argc, char *argv[])
{
    /*double a(2.7);
    double b(8.9);

    cout << RechercherPlusPetit<double>(a, b) << endl;

    int c(-1);
    int d(5);

    cout << RechercherPlusPetit<int>(c, d) << endl;

    return 0;*/

    vector <int> tableau(10);
}

