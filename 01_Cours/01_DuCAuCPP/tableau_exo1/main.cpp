#include <iostream>

using namespace std;

int main()
{
    float temprature;
    float humidite;
    int pression;

    cout << "Rentrer les valeurs" << endl;
    cin >> temprature >> humidite >> pression;

    cout << "la temperature est de " << temprature << " °" << endl;
    cout << "l'humidité est de " << humidite << " %" << endl;
    cout << "la pression est de " << pression << " hPa" << endl;
    return 0;
}
