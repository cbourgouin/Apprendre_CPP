#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    sock = new QWebSocketServer("Serveur", QWebSocketServer::NonSecureMode, this);
    connect(sock, &QWebSocketServer::newConnection, this, &Widget::onQWebSocketServer_newConnection);
    connect(majDate, &QTimer::timeout, this, &Widget::onQTimer_majDate);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::onQWebSocketServer_newConnection()
{

}

void Widget::onQWebSocket_textMessageReceived(QString mess)
{

}

void Widget::onQTimer_majDate()
{
    QString date = QDateTime::currentDateTime().toString();
    sock->
}

