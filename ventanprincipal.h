#ifndef VENTANPRINCIPAL_H
#define VENTANPRINCIPAL_H

#include <QMainWindow>

namespace Ui {
class VentanPrincipal;
}

class VentanPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit VentanPrincipal(QWidget *parent = 0);
    ~VentanPrincipal();

private:
    Ui::VentanPrincipal *ui;
};

#endif // VENTANPRINCIPAL_H
