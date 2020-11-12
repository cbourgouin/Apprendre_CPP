#include "poidideal.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PoidIdeal w;
    w.show();
    return a.exec();
}
