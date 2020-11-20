#include "code.h"



Code::Code(int _tailleCode):
    tailleCode(_tailleCode)
{
    codeUsine = new quint8[_tailleCode];
    codeUtilisateur = new quint8[_tailleCode];

    for(int i=0; i < _tailleCode; i++){
        codeUsine[i] = i+1;
        codeUtilisateur[i] = 0;
    }
}
