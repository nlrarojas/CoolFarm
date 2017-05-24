#ifndef AVL_H
#define AVL_H
#include <QtCore>
#include "estructurasTablero.h"

struct Nodo{
    int dato;
    Nodo* hijoizquierdo;
    Nodo* hijoderecho;
    int balance;

    Nodo(int d){
        dato = d;
        hijoizquierdo = hijoderecho = NULL;
        balance = 0;
    }
};

struct Avl
{
    Nodo *raiz;
    NodoInfoArbol * nodoInfoArbol;

    Avl(NodoInfoArbol * pNodoInfoArbol){
        this->nodoInfoArbol = pNodoInfoArbol;
    }

    void insertar(int);
    Nodo* insertar(int, Nodo*);
    void sacarBalance(Nodo*);
    int maximo(int , int);
    int altura(Nodo*);
    void imprimir(Nodo*);
    void imprimirNivel(Nodo *, int , int);
    void balancear(Nodo*, Nodo*);
    Nodo* balancear(Nodo*, int, int);
};

#endif // AVL_H
