#ifndef AVL_H
#define AVL_H
#include <QtCore>
#include "estructurasTablero.h"

struct NodoAVL{
    int dato;
    NodoAVL* hijoizquierdo;
    NodoAVL* hijoderecho;
    int balance;

    NodoAVL(int d){
        dato = d;
        hijoizquierdo = hijoderecho = NULL;
        balance = 0;
    }
};

struct Avl
{
    NodoAVL *raiz;
    NodoInfoArbol * nodoInfoArbol;

    Avl(NodoInfoArbol *);

    void insertar(int);
    NodoAVL* insertar(int, NodoAVL*);
    void sacarBalance(NodoAVL*);
    int maximo(int , int);
    int altura(NodoAVL*);
    void imprimir(NodoAVL*);
    void imprimirNivel(NodoAVL *, int , int);
    void balancear(NodoAVL*, NodoAVL*);
    NodoAVL* balancear(NodoAVL*, int, int);
};

#endif // AVL_H
