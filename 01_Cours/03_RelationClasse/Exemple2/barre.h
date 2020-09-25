#ifndef BARRE_H
#define BARRE_H
#include <string.h>
#include <iostream>

using namespace std;

class Barre
{
public:
    Barre(string _reference, string _name);
    void AfficherCaracteristiques();
protected:
    string reference;
    string name;
};

#endif // BARRE_H
