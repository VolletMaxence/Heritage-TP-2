#include "Historiqu.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Historiqu w;
    w.show();

    return a.exec();
}
