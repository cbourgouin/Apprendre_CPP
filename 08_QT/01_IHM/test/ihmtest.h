#ifndef IHMTEST_H
#define IHMTEST_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class IhmTest; }
QT_END_NAMESPACE

class IhmTest : public QWidget
{
    Q_OBJECT

public:
    IhmTest(QWidget *parent = nullptr);
    ~IhmTest();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::IhmTest *ui;
};
#endif // IHMTEST_H
