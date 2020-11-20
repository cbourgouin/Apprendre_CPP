#ifndef CODE_H
#define CODE_H

#include <QtGlobal>

class Code
{
public:
    Code(int _tailleCode);
    ~Code();
    bool VerifierCode(quint8 unCode[]);
    void Memoriser(quint8 unCode[]);
private:
    quint8 *codeUsine;
    quint8 *codeUtilisateur;
    int tailleCode;
};

#endif // CODE_H
