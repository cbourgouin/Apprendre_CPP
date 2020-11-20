#include "detecteurtemporise.h"

DetecteurTemporise::DetecteurTemporise():
    tempo(new QTimer)
{
    connect(&tempo, &QTimer::timeout,this,&DetecteurTemporise::onTempo_timeout);
    setWindowTitle("Détecteur Temporisé");
}

void DetecteurTemporise::onTempo_timeout()
{
    QMessageBox messageMarche;
    messageMarche.setText("Un intru a été détecté");
    messageMarche.exec();
    tempo.stop();
}

void DetecteurTemporise::on_pushButton_clicked()
{
    tempo.start(3000);
}
