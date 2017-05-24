#ifndef WINDOWNUEVAPARTIDA_H
#define WINDOWNUEVAPARTIDA_H

#include <QMainWindow>
#include <QDebug>
#include <QTimer>
#include "estructurasTablero.h"

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

private:
    Ui::windownuevapartida *ui;
    ListaPlagas * lista;
    listaNodosArboles * tiposInfoArboles;
    Mercado * infoMercado;
    Espantapajaros * infoEspantapajaros;
    QTimer * timer;
    int tipoPlaga;
    int tipoArbol;
};

#endif // WINDOWNUEVAPARTIDA_H
