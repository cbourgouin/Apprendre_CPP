#ifndef CALCULATRICE_H
#define CALCULATRICE_H

#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QScriptEngine>
#include <QListWidget>

#define NBTOUCHES 16

QT_BEGIN_NAMESPACE
namespace Ui { class Calculatrice; }
QT_END_NAMESPACE

class Calculatrice : public QWidget
{
    Q_OBJECT

public:
    Calculatrice(QWidget *parent = nullptr);
    ~Calculatrice();

public slots:
    void onQPushButtonClicked();

private:
    Ui::Calculatrice *ui;
    const QString tablesDesSymboles[NBTOUCHES] = {"0","1","2","3","4","5","6","7","8","9","c","=","/","*","-","+"};
    QGridLayout *grille;
    QPushButton *touches[NBTOUCHES];
    QLineEdit *afficheur;
    QListWidget *historique;

};
#endif // CALCULATRICE_H
