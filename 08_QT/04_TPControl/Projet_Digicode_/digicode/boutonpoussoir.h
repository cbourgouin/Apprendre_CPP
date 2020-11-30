#ifndef BOUTONPOUSSOIR_H
#define BOUTONPOUSSOIR_H

#include <QWidget>

namespace Ui {
class BoutonPoussoir;
}

class BoutonPoussoir : public QWidget
{
    Q_OBJECT

public:
    explicit BoutonPoussoir(QWidget *parent = nullptr);
    ~BoutonPoussoir();

private:
    Ui::BoutonPoussoir *ui;

signals:
    void action();  ///signal d'appuis sur le bouton

private slots:
    void on_pushButton_clicked();
};

#endif // BOUTONPOUSSOIR_H
