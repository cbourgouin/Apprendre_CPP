#include "ipv4.h"

IPv4::IPv4(const unsigned char *_adresse, const unsigned char _cidr)
{
    adresse = new unsigned char[4];
    masque = new unsigned char[4];
    for(int indice = 0; indice < 4; indice++){
        adresse[indice] = _adresse[indice];
    }
    if(_cidr <= 32)
        CalculerMasque(_cidr);
}

IPv4::IPv4(const unsigned char *_adresse, const unsigned char *_masque)
{
    adresse = new unsigned char[4];
    masque = new unsigned char [4];
    for(int indice = 0; indice < 4; indice++){
        adresse[indice] = _adresse[indice];
        masque[indice] = _masque[indice];
    }
}

IPv4::~IPv4()
{
    delete [] adresse;
    delete [] masque;
}

void IPv4::CalculerMasque(unsigned char _cidr)
{
    int indice;
    // Le masque est remis à 0 -> 0.0.0.0
    for(indice = 0; indice < 4; indice++)
        masque[indice] = 0;

    indice = 0;
    // tant que le cidr est un multiple de 8
    while(_cidr >= 8){
        masque[indice++] = 255;
        _cidr -= 8;
    }

    //Complément pour la fin du _cidr
    unsigned char puissance = 128;
    while(_cidr-- > 0) // Après le test la variable est décrémentée
    {
        masque[indice] += puissance ;
        puissance /=2;
    }
}

void IPv4::ObtenirMasque(unsigned char *_masque)
{
    for(int indice = 0; indice < 4; indice++)
        _masque[indice] = masque[indice];
}

void IPv4::ObtenirAdresseReseau(unsigned char *_reseau)
{
    for(int indice = 0; indice < 4; indice++)
        _reseau[indice] = adresse[indice] & masque[indice];
}

void IPv4::ObtenirAdresseDiffusion(unsigned char *_diffusion)
{
    unsigned char adresseDuReseau[4];
    ObtenirAdresseReseau(adresseDuReseau);
    for(int indice = 0; indice < 4; indice++)
        _diffusion[indice] = adresseDuReseau[indice] | ~masque[indice];
}

void IPv4::ObtenirPremiereAdresse(unsigned char *_adresse)
{
    unsigned char adresseDuReseau[4];
    ObtenirAdresseReseau(adresseDuReseau);
    for(int indice = 0; indice < 4; indice++)
        if(indice!=3)
            _adresse[indice] = adresseDuReseau[indice];
        else{
            if(adresseDuReseau[3] == 255){
                _adresse[3] = 0;
                _adresse[2]++;
            }else{
                _adresse[3] = adresseDuReseau[3]+1;
            }
        }
}

void IPv4::ObtenirDerniereAdresse(unsigned char *_adresse)
{
    unsigned char adresseDeDiffusion[4];
    ObtenirAdresseDiffusion(adresseDeDiffusion);
    for(int indice = 0; indice < 4; indice++)
        if(indice!=3)
            _adresse[indice] = adresseDeDiffusion[indice];
        else{
            if(adresseDeDiffusion[3] == 0){
                _adresse[3] = 255;
                _adresse[2]--;
            }else{
                _adresse[3] = adresseDeDiffusion[3]-1 ;
            }
        }
}

int IPv4::ObtenirNbMachine()
{
    unsigned char masque[4];
    ObtenirMasque(masque);

};
