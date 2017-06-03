#ifndef CONTROLADORHILOS_H
#define CONTROLADORHILOS_H

#include <QThread>
#include <QMutex>
#include "arbolescomprados.h"
#include "estructurasTablero.h"
#include "hiloabb.h"

class ControladorHilos : public QThread {
private:
    int estado;
    void run();
    QMutex mutex;

public:
    ControladorHilos(MatrizArboles * matrizArboles, Matriz * matrizJuego, NodoInfoArbol * pNodoInfoAbb);
    void cambiarEstado(int);
    MatrizArboles * matrizArboles;
    Matriz * matrizJuego;
    HiloABB * hiloAbb;
};

#endif // CONTROLADORHILOS_H
