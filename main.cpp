#include "Boombox.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Boombox w;
    w.show();
    return a.exec();
}
