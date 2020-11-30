#ifndef PILE_H
#define PILE_H

template <typename T>
class Pile
{
private:
    int taille;
    int sommet;
    T *laPile;
public:
    Pile(const int _taille=10);
    ~Pile();
    void Empiler(const T element);
    T Depiler();
    bool PileVide();
};

template <typename T>
Pile<T>::Pile(const int _taille):
    taille(_taille),
    sommet(0)
{
    laPile = new T[taille];
}

template <typename T>
T Pile<T>::Depiler()
{
    T retour;
    if(!PileVide())
        retour = laPile[--sommet];
    return retour;
}

template <typename T>
Pile<T>::~Pile()
{
    delete[] laPile;
}

template <typename T>
bool Pile<T>::PileVide()
{
    bool retour = false;
    if(sommet == 0)
        retour = true;
    return retour;
}

template <typename T>
void Pile<T>::Empiler(const T element)
{
    if(sommet < taille)
        laPile[sommet++] = element;
}
#endif // PILE_H
