#ifndef PORTE_H
#define PORTE_H

#include <QWidget>

namespace Ui {
class Porte;
}

class Porte : public QWidget
{
    Q_OBJECT

public:
    explicit Porte(QWidget *parent = nullptr);
    ~Porte();
    void deverrouiller();   ///deverrouillage de la porte
    void verrouiller();     ///verouillage de la porte

private:
    Ui::Porte *ui;
};

#endif // PORTE_H
