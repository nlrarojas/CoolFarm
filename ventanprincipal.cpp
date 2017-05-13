#include "ventanprincipal.h"
#include "ui_ventanprincipal.h"

VentanPrincipal::VentanPrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VentanPrincipal)
{
    ui->setupUi(this);
}

VentanPrincipal::~VentanPrincipal()
{
    delete ui;
}
