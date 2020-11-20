#ifndef DETECTEURTEMPORISE_H
#define DETECTEURTEMPORISE_H

#include "detecteur.h"
#include <QTimer>


class DetecteurTemporise : public Detecteur
{
public:
    DetecteurTemporise();
private slots:
    void onTempo_timeout();
    void on_pushButton_clicked();
private:
    QTimer tempo;
};

#endif // DETECTEURTEMPORISE_H
