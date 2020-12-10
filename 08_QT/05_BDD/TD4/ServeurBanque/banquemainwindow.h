#ifndef BANQUEMAINWINDOW_H
#define BANQUEMAINWINDOW_H

#include <QMainWindow>
#include "serveurbanque.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
#include <QTableWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class BanqueMainWindow; }
QT_END_NAMESPACE

class BanqueMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    BanqueMainWindow(QWidget *parent = nullptr);
    ~BanqueMainWindow();

private slots:
    void on_pushButtonConnect_clicked();

    void on_pushButtonInfoComplete_clicked();

private:
    Ui::BanqueMainWindow *ui;
    ServeurBanque *leServeur;
    QSqlDatabase *bdd;
};
#endif // BANQUEMAINWINDOW_H
