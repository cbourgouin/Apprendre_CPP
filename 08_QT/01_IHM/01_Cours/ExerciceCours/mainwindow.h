#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_lineEditName_textChanged(const QString &arg1);

    void on_checkBoxWin_clicked(bool checked);

    void on_checkBoxOSXL_clicked(bool checked);

    void on_checkBoxLin_clicked(bool checked);

    void on_radioButtonWin_clicked();

    void on_radioButtonOSXL_clicked();

    void on_radioButtonLin_clicked();

    void on_pushButtonLin_clicked();

    void on_pushButtonWin_clicked();

    void on_pushButtonOSXL_clicked();

    void on_comboBoxChoice_activated(const QString &arg1);

    void on_actionC_triggered();

    void on_actionJava_triggered();

    void on_actionC_2_triggered();

    void on_actionPHP_triggered();

    void on_actionJavaScript_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
