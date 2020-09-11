#include "menu.h"

using namespace std;

Menu::Menu(const string &_nom):nom(_nom), longueurMax(0)
{
    ifstream leFichier(nom.c_str());
    if(leFichier.fail()){
        cerr << "ERREUR DE LECTURE" << endl;
        nbOptions = 0;
    }
    else{
        nbOptions = static_cast<int>(count(istreambuf_iterator<char>(leFichier),istreambuf_iterator<char>(),'\n'));
        leFichier.seekg(0, ios::beg);
        options = new string[nbOptions];
        for(int i=0; i<nbOptions; i++){
            getline(leFichier, options[i]);
            int longueur = static_cast<int>(options[i].length());
            if(longueur > longueurMax)
                longueurMax = longueur;
        }
    }
}

Menu::~Menu()
{
    if(options != nullptr)
        delete [] options;
}

int Menu::Afficher()
{
    cout << "+" << setfill('-') << setw(5) << "+" << setw(20) << "+" << setfill(' ') << endl;
    for(int i=0; i<nbOptions; i++)
        cout << "|" << setw(4) << i+1 << "|" << setw(19) << options[i] << "|" << endl;
    cout << "+" << setfill('-') << setw(5) << "+" << setw(20) << "+" << setfill(' ') << endl;
    cout << endl;
    cout << "Entrer un nombre entre 1 et " << nbOptions << " : ";

    int choix;
    if(!(cin >> choix)){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        choix = -1;
    }
    return choix;
}

void Menu::AttendreAppuiTouche(){
    string uneChaine;
    cout << endl << "appuyer sur la touche Entrée pour continuer...";
    getline(cin,uneChaine);
    cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
    system("clear");
}
