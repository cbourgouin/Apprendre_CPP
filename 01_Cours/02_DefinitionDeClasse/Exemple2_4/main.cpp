#include "menu.h"
#include <iostream>

using namespace std;

enum CHOIX_MENU{
    OPTION_1=1,
    OPTION_2,
    OPTION_3,
    OPTION_4,
    OPTION_5,
    QUITTER
};

int main()
{
    int choix;
    Menu leMenu("menu.txt");
    do{
        choix=leMenu.Afficher();
        switch(choix){
        case OPTION_1 : cout << "Vous avez choisi l'option Enregistrer"<<endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_2 : cout << "Vous avez choisi l'option Enregistrer sous"<<endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_3 : cout << "Vous avez choisi l'option Envoyer"<<endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_4 : cout << "Vous avez choisi l'option Editer"<<endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_5 : cout << "Vous avez choisi l'option Quitter"<<endl;
            Menu::AttendreAppuiTouche();
            break;// à compléter
        }

    }while(choix != QUITTER);

    return 0;

}
