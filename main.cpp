#include "windows/WMenuMain.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WMenuMain w;
    w.show();

    return a.exec();
}
