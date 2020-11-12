#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_lineEditName_textChanged(const QString &arg1)
{
    ui->textEditEvent->append(arg1);
}

void MainWindow::on_checkBoxWin_clicked(bool checked)
{
    if(checked == true){
        ui->textEditEvent->append("windows coche");
    }else{
        ui->textEditEvent->append("windows decoche");
    }
}

void MainWindow::on_checkBoxOSXL_clicked(bool checked)
{
    if(checked == true){
        ui->textEditEvent->append("OS X Lion coche");
    }else{
        ui->textEditEvent->append("OS X Lion decoche");
    }
}

void MainWindow::on_checkBoxLin_clicked(bool checked)
{
    if(checked == true){
        ui->textEditEvent->append("linux coche");
    }else{
        ui->textEditEvent->append("linux decoche");
    }
}

void MainWindow::on_radioButtonWin_clicked()
{
    ui->textEditEvent->append("radio Windows");
}

void MainWindow::on_radioButtonOSXL_clicked()
{
    ui->textEditEvent->append("radio OS X Lion");
}

void MainWindow::on_radioButtonLin_clicked()
{
    ui->textEditEvent->append("radio Linux");
}

void MainWindow::on_pushButtonLin_clicked()
{
    ui->textEditEvent->append("bouton Linux");
}

void MainWindow::on_pushButtonWin_clicked()
{
    ui->textEditEvent->append("bouton Windows");
}

void MainWindow::on_pushButtonOSXL_clicked()
{
    ui->textEditEvent->append("bouton OS X Lion");
}

void MainWindow::on_comboBoxChoice_activated(const QString &arg1)
{
    ui->textEditEvent->append(arg1);
}

void MainWindow::on_actionC_triggered()
{
    ui->textEditEvent->append("C");
}

void MainWindow::on_actionJava_triggered()
{
    ui->textEditEvent->append("Java");
}

void MainWindow::on_actionC_2_triggered()
{
    ui->textEditEvent->append("C++");
}

void MainWindow::on_actionPHP_triggered()
{
    ui->textEditEvent->append("PHP");
}

void MainWindow::on_actionJavaScript_triggered()
{
    ui->textEditEvent->append("JavaScript");
}
