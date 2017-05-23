#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->botonNuevaPartida, SIGNAL(clicked()), this, SLOT(openNewWindow()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openNewWindow()
{
    mywindownuevapartida = new windownuevapartida();
    mywindownuevapartida->show();
}

void MainWindow::on_botonNuevaPartida_clicked()
{
    openNewWindow();
}
