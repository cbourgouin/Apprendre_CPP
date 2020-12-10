#include "banquemainwindow.h"
#include "ui_banquemainwindow.h"

BanqueMainWindow::BanqueMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BanqueMainWindow)
{
    ui->setupUi(this);
    leServeur = new ServeurBanque(parent);
    leServeur->Start();
}

BanqueMainWindow::~BanqueMainWindow()
{
    delete ui;
    leServeur->Stop();
}

