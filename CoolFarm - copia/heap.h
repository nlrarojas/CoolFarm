#ifndef HEAPARBOL_H
#define HEAPARBOL_H

#endif // HEAPARBOL_H
#ifndef HEAP_H
#define HEAP_H
#include <QtCore>


struct Heap
{
    int *arbol, largo;
    Heap();
    void insertar(int dato);
    void imprimir();
    void eliminar();
    int maximo(int, int);
};

#endif // HEAP_H
