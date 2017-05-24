#ifndef HEAP_H
#define HEAP_H

#include <QtCore>
#include "estructurasTablero.h"

struct Heap
{
    int *arbol, largo;
    NodoInfoArbol * nodoInfoArbol;

    Heap(NodoInfoArbol * pNodoInfoArbol){
        this->nodoInfoArbol = pNodoInfoArbol;
    }

    void insertar(int dato);
    void imprimir();
    void eliminar();
    int maximo(int, int);
};

#endif // HEAP_H
