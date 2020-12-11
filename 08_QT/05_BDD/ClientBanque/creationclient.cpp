#include "creationclient.h"
#include "ui_creationclient.h"

CreationClient::CreationClient(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreationClient)
{
    ui->setupUi(this);
}

CreationClient::~CreationClient()
{
    delete ui;
}
