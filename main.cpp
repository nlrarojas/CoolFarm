#include "ventanprincipal.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VentanPrincipal w;
    w.show();

    return a.exec();
}
