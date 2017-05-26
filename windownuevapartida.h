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

private:
    Ui::windownuevapartida *ui;

    ListaPlagas * lista;
    ListaNodosArboles * tiposInfoArboles;

    Mercado * infoMercado;
    Espantapajaros * infoEspantapajaros;
    Granjero * granjero;
    MercadoPlataforma * mercadoPlataforma;

    QTimer * timer;
    int tipoPlaga;
    int tipoArbol;
    int cantidadEspantapajaros;
    int matrizJuego[8][8];
    QLabel * terreno[8][8];

    void datosMercado(void);
    void pintarTablero(void);
    void estadoMercado(void);
};

#endif // WINDOWNUEVAPARTIDA_H
