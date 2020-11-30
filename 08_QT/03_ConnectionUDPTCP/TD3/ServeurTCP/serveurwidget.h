#ifndef SERVEURWIDGET_H
#define SERVEURWIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QTcpServer>
#include <QSpinBox>
#include <QHostInfo>
#include <QProcess>

QT_BEGIN_NAMESPACE
namespace Ui { class ServeurWidget; }
QT_END_NAMESPACE

class ServeurWidget : public QWidget
{
    Q_OBJECT

public:
    ServeurWidget(QWidget *parent = nullptr);
    ~ServeurWidget();

private:
    Ui::ServeurWidget *ui;
    QTcpServer *socketEcouteServeur;
    QTcpSocket *socketDialogueClient;
    QProcess *process;

private slots:
    void onQTcpServeur_newConnection();
    void onQTcpSocket_readyRead();
    void onQTcpSocket_disconnected();

    void on_pushButtonLancementServeur_clicked();
    void on_spinBoxPort_textChanged(const QString &arg1);
    void onQProcess_readyReadStandardOutpout();
};
#endif // SERVEURWIDGET_H
