#ifndef CENTRALEDALARME_H
#define CENTRALEDALARME_H

#include <QObject>
#include <QVector>
#define TAILLE_CODE 4

class Clavier;


class CentraleDalarme : public QObject
{
    Q_OBJECT
public:
    explicit CentraleDalarme(const int _tailleCode = 4, QObject *_parent = nullptr);
    ~CentraleDalarme();
    void FabriquerCode(const quint8 _chiffre);

private:
    const int tailleCode;
    QVector<quint8> combinaison;
    int indiceCourant;
    Clavier *leClavier;
};

#endif // CENTRALEDALARME_H
