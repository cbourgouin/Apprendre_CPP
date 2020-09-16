#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    ifstream fichier("config.txt", fstream::in | fstream::out);
    string pays;
    int gold, argent, bronze;

    if(!fichier.is_open())
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
    else{
        cout << "+" << setfill('-') << setw(18) << "+" << setfill('-') << setw(8) << "+" << setfill('-') << setw(8) << "+" << setfill('-') << setw(8) << "+" << endl;
        do{
            fichier >> pays >> gold >> argent >> bronze;
            if(fichier.good()){
                cout << "|" << setfill(' ')<< left << setw(17) << pays << "|" << setw(7) << gold << "|" << setw(7) << argent << "|" << setw(7) << bronze  << "|" << endl;
            }
        }while(!fichier.eof());
        cout << "+" << setfill('-') << setw(18 ) << "+ " << setfill('-') << setw(8) << "+" << setfill('-') << setw(8) << "+" << setfill('-') << setw(8) << "+"  << endl;
    }
    return 0;
}
