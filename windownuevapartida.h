#ifndef WINDOWNUEVAPARTIDA_H
#define WINDOWNUEVAPARTIDA_H

#include <QMainWindow>
#include <QDebug>
#include <QTimer>
#include "estructurasTablero.h"
#include "mercadoplataforma.h"
#include "ui_windownuevapartida.h"
#include <string>
#include <QKeyEvent>
#include "arbolescomprados.h"
#include <QMessageBox>
#include "avl.h"
#include "arbolbinario.h"
#include "heap.h"

namespace Ui {
class windownuevapartida;
}

class windownuevapartida : public QMainWindow
{
    Q_OBJECT

public:
    explicit windownuevapartida(QWidget *parent = 0);
    ~windownuevapartida();

private slots:
    void actualizarDatosGUI();
    void on_tipoAnimales_currentIndexChanged(const QString &arg1);
    void on_tipoArboles_currentIndexChanged(const QString &arg1);
    void keyPressEvent(QKeyEvent *);

    void on_toolButton_3_clicked();

    void on_toolButton_6_clicked();

    void on_toolButton_4_clicked();

    void on_toolButton_5_clicked();

    void on_toolButton_7_clicked();

private:
    Ui::windownuevapartida *ui;

    ListaPlagas * lista;
    ListaNodosArboles * tiposInfoArboles;

    Mercado * infoMercado;
    Espantapajaros * infoEspantapajaros;
    Granjero * granjero;    
    MercadoPlataforma * mercadoPlataforma;

    ColaAVLComprados * avlComprados;
    ColaABBComprados * abbComprados;
    ColaHeapComprados * heapComprados;


    NodoArbolesTerreno * matrizArbolesTerreno[8][8];
    plaga * matrizPlagas[8][8];

    int cantidadArbolesABB;
    int cantidadArbolesAVL;
    int cantitadArbolesSplay;
    int cantidadArbolesHeap;

    QTimer * timer;
    int tipoPlaga;
    int tipoArbol;
    int cantidadEspantapajaros;
    int matrizJuego[8][8];
    int estado[8][8];
    QLabel * terreno[8][8];

    void datosMercado(void);
    void pintarTablero(void);
    void estadoMercado(void);

    void comprarAbolAVL(void);
    void comprarAbolABB(void);
    void comprarAbolHeap(void);
    void comprarAbolSplay(void);

    void sembrarArbolAVL(void);
    void sembrarArbolABB(void);
    void sembrarArbolHEAP(void);
    void sembrarArbolSPLAY(void);

    void colocarEspantapajaros(void);
    void mostrarMensaje(QString);
};

#endif // WINDOWNUEVAPARTIDA_H
