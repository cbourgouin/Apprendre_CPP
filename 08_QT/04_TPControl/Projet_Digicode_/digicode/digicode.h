#ifndef DIGICODE_H
#define DIGICODE_H

#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include <QLineEdit>
#include <QString>
#include <QMessageBox>
#include "porte.h"
#include <QTimer>
#include "boutonpoussoir.h"

#define NBLIGNE 4
#define NBCOLONNE 3

QT_BEGIN_NAMESPACE
namespace Ui { class Digicode; }
QT_END_NAMESPACE

class Digicode : public QWidget
{
    Q_OBJECT

public:
    Digicode(QWidget *parent = nullptr);
    ~Digicode();

private:
    Ui::Digicode *ui;           /// interface
    QPushButton *touches[NBLIGNE][NBCOLONNE]; /// touches du digicode
    QGridLayout *grille;        /// grille de l'interface
    QLineEdit *afficheur;       /// affichage du nombre de caractere du digicode
    QString code;               /// code rentré par l'utilisateur
    QString codeSecret = "1234";/// code secret du Digicode
    Porte *laPorte;             /// etat de la porte
    QTimer *tempoGache;         /// Timer de deverouillage de la porte
    QTimer * tempoVerrouillage; /// Timer de verouillage du digicode apres 3 erreurs
    int compteur;
    BoutonPoussoir *leBoutonPousoir;/// Bouton de deverouillage interieur


private slots:
    void onQPushButtonClicked();
    void onTimerTempoGache_timeout();
    void onTimerTempoVerrouillage_timeout();
    void onBoutonPoussoirActionne();


};
#endif // DIGICODE_H
