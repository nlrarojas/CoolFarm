#ifndef HILOABB_H
#define HILOABB_H

#include <QThread>
#include <QMutex>
#include <random>
#include "arbolescomprados.h"
#include "estructurasTablero.h"

using namespace std;

class HiloABB : public QThread
{
private:
    QMutex mutex;
    void run(void);
    int aleatorio(void);

public:
    HiloABB();
    NodoArbolesTerreno * matrizArbolesTerreno[8][8];
    int matrizJuego[8][8];
    bool estado;
    bool crecio;
    NodoInfoArbol * nodoArbol;
};

#endif // HILOABB_H
