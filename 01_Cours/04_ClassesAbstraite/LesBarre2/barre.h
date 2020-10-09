#ifndef BARRE_H
#define BARRE_H
#include <string.h>
#include <iostream>
#include <string>

using namespace std;

class Barre
{
public:
    Barre(const string _reference, const int _longueur, const float _densite);
    virtual ~Barre();
    virtual void AfficherCaracteristiques();
    virtual float CalculerMasse() {return 0;}
protected:
    string reference;
    int longueur;
    float densite;
};

#endif // BARRE_H
