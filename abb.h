#ifndef ARBOLBINARIO_H
#define ARBOLBINARIO_H

#include <cstdlib>
#include <iostream>

using namespace std;

struct Nodo {
    int precio;
    Nodo* hijoizquierdo;
    Nodo* hijoderecho;

    Nodo(int pPrecio) {
        this->precio = pPrecio;
        hijoizquierdo = hijoderecho = NULL;
    }
};

struct Arbol {
    Nodo * raiz;
    int costo;
    int tiempoCrecimiento;
    int tiempoCosecha;
    int rangoInferior;
    int rangoSuperior;

    Arbol(int pCosto, int pTiempoCrecimiento, int pTiempoCosecha, int pRangoInferior, int pRangoSuperior) {
        raiz = NULL;
        this->costo = pCosto;
        this->tiempoCrecimiento = pTiempoCrecimiento;
        this->tiempoCosecha = pTiempoCosecha;
        this->rangoInferior = pRangoInferior;
        this->rangoSuperior = pRangoSuperior;
    }

    void insertar(int);
    Nodo * insertar(int, Nodo *);

    Nodo * buscarNodo(int indice);
    Nodo * buscarNodo(int indice, Nodo *);

    void inOrden(Nodo *);
    void preOrden(Nodo *);
    void posOrden(Nodo *);
    Nodo * buscar(int, Nodo *);

    int obtenerNumeroElementos(Nodo *);
    int peso(Nodo *);
    int obtenerAltura(Nodo *);
    Nodo * mayor(Nodo * arbol);
    Nodo * borrarElemento(int);
    Nodo * borrarElemento(int, Nodo*);
    void anchura(Nodo *);
    int altura(Nodo *);
    int cantHojas(Nodo *);
    int cantNodos2(Nodo *);
    void nodos_nivel(Nodo *, int, int);
    int contadorNodos(Nodo *);
};

#endif // ARBOLBINARIO_H
