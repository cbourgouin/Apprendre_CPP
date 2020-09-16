#include "ipv4_coplien.h"

IPv4::IPv4(){
    adresse = new unsigned char [4];
    masque = new unsigned char [4];
}

IPv4::IPv4(const IPv4 &_ipv4){
    adresse = new unsigned char [4];
    masque = new unsigned char [4];
    for(int i=0; i<4; i++){
        adresse[i] = _ipv4.adresse[i];
        masque[i] = _ipv4.masque[i];
    }
}

IPv4 &IPv4::operator=(const IPv4 &_ipv4){
    if(adresse != nullptr && masque != _ipv4.masque){
        delete []
    }
}
