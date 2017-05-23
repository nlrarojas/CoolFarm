#include "windowiniciajuego.h"
#include "ui_windowiniciajuego.h"
#include<QLabel>
#include<QPixmap>

windowiniciajuego::windowiniciajuego(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::windowiniciajuego)
{
    ui->setupUi(this);
    QLabel *terreno[8][8];
    for (int x=0; x<8; x++){
        for (int y=0; y<8; y++){
            terreno[x][y] = new QLabel(this);
            terreno[x][y]->setPixmap(QPixmap(":/imagenes/tierra.png"));
            terreno[x][y]->setGeometry(x*65+50,y*65+50, 65, 65);
            terreno[x][y]->setScaledContents(true);
            terreno[x][y]->show();

        }
    }
    terreno[1][1]->setPixmap(QPixmap(":/imagenes/Avl.png"));
    terreno[1][1]->setGeometry(1*65+50,1*65+50, 65, 65);
    terreno[1][1]->setScaledContents(true);
    terreno[1][1]->show();
    QLabel *granjero;
    //granjero = new QLabel(this);
    //granjero->setPixmap(QPixmap(":/imagenes/granjero.png"));
    //granjero->setGeometry(55,30, 65, 65);
    //granjero->setScaledContents(true);
    //granjero->show();
}


windowiniciajuego::~windowiniciajuego()
{
    delete ui;
}
