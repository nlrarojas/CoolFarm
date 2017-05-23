#include "windownuevapartida.h"
#include "ui_windownuevapartida.h"

windownuevapartida::windownuevapartida(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::windownuevapartida)
{
    ui->setupUi(this);

    QLabel *terreno[8][8];
        for (int x=0; x<8; x++){
            for (int y=0; y<8; y++){
                terreno[x][y] = new QLabel(this->ui->juego);
                terreno[x][y]->setPixmap(QPixmap(":/imagenes/tierra.png"));
                terreno[x][y]->setGeometry(x*50+50,y*50+50, 50, 50);
                terreno[x][y]->setScaledContents(true);
                terreno[x][y]->show();
            }
        }

    ui->tipoAnimales->addItem("Ovejas");
    ui->tipoAnimales->addItem("Plagas");
    ui->tipoAnimales->addItem("Cuervos");
    ui->tipoArboles->addItem("ABB");
    ui->tipoArboles->addItem("HEAP");
    ui->tipoArboles->addItem("AVL");
    ui->tipoArboles->addItem("SPLAY");
}

windownuevapartida::~windownuevapartida()
{
    delete ui;
}



