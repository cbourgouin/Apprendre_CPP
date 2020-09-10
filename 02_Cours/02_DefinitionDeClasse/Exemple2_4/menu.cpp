#include "menu.h"

using namespace std;

Menu::Menu(const std::string &_nom):nom(_nom), longueurMax(0)
{
    ifstream leFichier(nom.c_str());
    if(!leFichier.is_open()){
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
        delete options;
}
