#ifndef POIDIDEAL_H
#define POIDIDEAL_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class PoidIdeal; }
QT_END_NAMESPACE

class PoidIdeal : public QWidget
{
    Q_OBJECT

public:
    PoidIdeal(QWidget *parent = nullptr);
    ~PoidIdeal();

private slots:
    void on_pushButtonSuite_clicked();

    void on_pushButtonDev_clicked();

    void on_pushButtonLor_clicked();

    void on_pushButtonLorAge_clicked();

private:
    Ui::PoidIdeal *ui;
    void afficherInfos();
    double poids;
    double taille;
    QString nom;
    QString prenom;
    int age;
    static const int NBIMC=6;
    static const int NBCORPULENCE=7;
};
#endif // POIDIDEAL_H
