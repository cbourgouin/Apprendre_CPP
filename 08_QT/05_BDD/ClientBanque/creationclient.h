#ifndef CREATIONCLIENT_H
#define CREATIONCLIENT_H

#include <QWidget>

namespace Ui {
class CreationClient;
}

class CreationClient : public QWidget
{
    Q_OBJECT

public:
    explicit CreationClient(QWidget *parent = nullptr);
    ~CreationClient();

private:
    Ui::CreationClient *ui;
};

#endif // CREATIONCLIENT_H
