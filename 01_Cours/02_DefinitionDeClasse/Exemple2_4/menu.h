#ifndef MENU_H
#define MENU_H
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <errno.h>
#include <algorithm>

class Menu
{
private:
    std::string nom;
    std::string *options;
    int nbOptions;
    int longueurMax;
public:
    Menu(const std::string &_nom);
    ~Menu();
    int Afficher();
    static void AttendreAppuiTouche();
};

#endif // MENU_H
