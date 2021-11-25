#include "Historiqu.h"
#include <QtWidgets/QApplication>
#include <Qt>
#include <QtGui>
#include <QKeyEvent>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Historiqu w;
    w.show();

    return a.exec();
}
