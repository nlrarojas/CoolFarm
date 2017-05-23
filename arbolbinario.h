#ifndef ARBOLBINARIO_H
#define ARBOLBINARIO_H

#include <cstdlib>
#include <iostream>

using namespace std;

struct Nodo {
    int indice;
    Nodo* hijoizquierdo;
    Nodo* hijoderecho;

    Nodo(int d) {
        this->indice = d;
        hijoizquierdo = hijoderecho = NULL;
    }
};

struct Arbol {
    Nodo* raiz;
    Arbol() {
        raiz = NULL;
    }

    void insertar(int);
    Nodo * insertar(int, Nodo*);

    Nodo * buscarNodo(int indice);
    Nodo * buscarNodo(int indice, Nodo* nodo);

    void inOrden(Nodo*);
    void preOrden(Nodo*);
    void posOrden(Nodo*);
    Nodo * buscar(int, Nodo*);

    int obtenerNumeroElementos(Nodo*);
    int peso(Nodo*);
    int obtenerAltura(Nodo*);
    Nodo * mayor(Nodo* arbol);
    Nodo * borrarElemento(int);
    Nodo * borrarElemento(int, Nodo*);
    void anchura(Nodo*);
    int altura(Nodo*);
    int cantHojas(Nodo*);
    int cantNodos2(Nodo*);
    void nodos_nivel(Nodo*, int, int);
    int contadorNodos(Nodo*);
};

#endif // ARBOLBINARIO_H
