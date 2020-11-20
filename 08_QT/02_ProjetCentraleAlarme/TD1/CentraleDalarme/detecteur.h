#ifndef DETECTEUR_H
#define DETECTEUR_H

#include <QDialog>
#include <QMessageBox>
#include <QTimer>

namespace Ui {
class Detecteur;
}

class Detecteur : public QDialog
{
    Q_OBJECT

public:
    explicit Detecteur(QWidget *parent = nullptr);
    ~Detecteur();

private slots:
    virtual void on_pushButton_clicked();

private:
    Ui::Detecteur *ui;
signals:
    void detection(QString nom);
};

#endif // DETECTEUR_H
