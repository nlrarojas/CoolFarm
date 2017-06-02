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
    HiloABB * hiloAbb;

public:
    ControladorHilos(NodoArbolesTerreno * [8][8], int [8][8], NodoInfoArbol *);
    void cambiarEstado(int);
};

#endif // CONTROLADORHILOS_H
