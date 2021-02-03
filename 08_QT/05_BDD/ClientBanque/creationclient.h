#ifndef CREATIONCLIENT_H
#define CREATIONCLIENT_H

#include <QWidget>
#include <QJsonObject>
#include <QTcpSocket>
#include <QBuffer>
#include <QMessageBox>

namespace Ui {
class CreationClient;
}

class CreationClient : public QWidget
{
    Q_OBJECT

public:
    explicit CreationClient(QTcpSocket *_socket, int _numCompte, QWidget *parent = nullptr);
    ~CreationClient();

private slots:
    void on_pushButtonEnvoyer_clicked();

private:
    Ui::CreationClient *ui;
    int numCompte;
    QTcpSocket *socketClientBanque;
};

#endif // CREATIONCLIENT_H
