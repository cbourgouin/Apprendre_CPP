#ifndef CADRAN_H
#define CADRAN_H
/**
  * @file   :   cadran.h
  * @author :   Philippe Cruchet
  * @date   :   24/08/2020
  * @detail :   Assure la gestion d'un cadran en mode texte
  *             à partir des séquences d’échappement ANSI
  */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Cadran
{
public:
    Cadran(const int _posX=1,const int _posY=1,const int _hauteur=1,const int _largeur=7,const int _cFG=33,const int _cBG=42);
    ~Cadran();
    void Afficher(const string _texte, const int _position=0, const int _ligne=0);
    void Afficher(const int _valeur, const int _position=0, const int _ligne=0);
    void Effacer();
private:
    void PositionnerCurseur(const int _posx, const int _posy);
    int posX;   /// coordonnée en X du premier caractère dans le cadran
    int posY;   /// coordonnée en Y du premier caractère dans le cadran
    int hauteur;    /// nombre de lignes du cadran
    int largeur;    /// nombre de caractères par ligne
    int cFG; /// couleur de la police d'ecriture
    int cBG; /// couleur du background
};
#endif // CADRAN_H
