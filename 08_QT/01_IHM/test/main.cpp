#include "ihmtest.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    IhmTest w;
    w.show();
    return a.exec();
}
