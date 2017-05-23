#include "arbolBinario.h"

// PRINCIPAL DE INSERTA,
//INSERTA UN NUMERO ENTERO

void Arbol::insertar(int dato) {
    raiz = insertar(dato, raiz);
}

//  INSERTA RECURSIVAMENTE

Nodo * Arbol::insertar(int valor, Nodo* nodo) {
    // cuando el nodo es nulo, raiz o hijos de hojas
    //quiere decir que allí debe
    // ubicar el valor, en un nuevo nodo

    if (nodo == NULL) {
        return new Nodo(valor);
    }
    //si el valor es mayor,
    //llama recursivamente a insertar en el hijo
    //derecho
    else if (nodo->indice < valor) {
        nodo->hijoderecho = insertar(valor, nodo->hijoderecho);
    }// en caso contrario, va al lado izquierdo
    else if (nodo->indice >= valor) {
        nodo->hijoizquierdo = insertar(valor, nodo->hijoizquierdo);
    }
    return nodo;
}

void Arbol::inOrden(Nodo* nodo) {
    if (nodo != NULL) {
        inOrden(nodo->hijoizquierdo);
        cout << nodo->indice << "  ";
        inOrden(nodo->hijoderecho);
    }
}

void Arbol::preOrden(Nodo* nodo) {
    if (nodo != NULL) {
        cout << nodo->indice << "  ";
        preOrden(nodo->hijoizquierdo);
        preOrden(nodo->hijoderecho);
    }
}

void Arbol::posOrden(Nodo* nodo) {
    if (nodo != NULL) {
        posOrden(nodo->hijoizquierdo);
        posOrden(nodo->hijoderecho);
        cout << nodo->indice << "  ";

    }
}

int Arbol::contadorNodos(Nodo* nodo) {
    if (nodo == NULL)
        return 0;
    else
        return 1 + contadorNodos(nodo->hijoderecho) + contadorNodos(nodo->hijoizquierdo);
}


// BUSCA UN VALOR EN EL ARBOL ORDENADO

Nodo* Arbol::buscar(int valor, Nodo* nodo) {
    // cuando el nodo es nulo, quiere decir que allí debe
    // ubicar el valor, en un nuevo nodo
    if (nodo == NULL) {
        return NULL;
    } else if (nodo->indice == valor) {
        return nodo;
    }// si el valor es mayor, llama recursivamente a insertar en el hijo
    // derecho
    else if (nodo->indice < valor) {
        return buscar(valor, nodo->hijoderecho);
    }// en caso contrario, va al lado izquierdo
    else //(nodo.dato >= valor)
    {
        return buscar(valor, nodo->hijoizquierdo);
    }
}

Nodo * Arbol::buscarNodo(int indice) {
    return buscarNodo(indice, raiz);
}

Nodo * Arbol::buscarNodo(int indice, Nodo* nodo) {
    // cuando el nodo es nulo, quiere decir que allí debe
    // ubicar el valor, en un nuevo nodo
    if (nodo == NULL) {
        return NULL;
    } else if (nodo->indice == indice) {
        return nodo;
    }// si el valor es mayor, llama recursivamente a insertar en el hijo
    // derecho
    else if (nodo->indice < indice) {
        return buscarNodo(indice, nodo->hijoderecho);
    }// en caso contrario, va al lado izquierdo
    else //(nodo.dato >= valor)
    {
        return buscarNodo(indice, nodo->hijoizquierdo);
    }
}


// cantidad de elementos de un arbol binario

int Arbol::obtenerNumeroElementos(Nodo* nodo) {
    int num_elems = 0;

    if (nodo != NULL) {
        num_elems += obtenerNumeroElementos(nodo->hijoizquierdo);
        num_elems++; // contabilizar el nodo visitado
        num_elems += obtenerNumeroElementos(nodo->hijoderecho);
    }
    return num_elems;
}


// obtiene la altura
//Altura. La altura de un árbol se define como el
//nivel del nodo de mayor nivel. Como cada nodo de un árbol
//puede considerarse a su vez como la raíz de un árbol, también
//podemos hablar de altura de ramas; el máximo número de nodos
//que hay que recorrer para llegar de la raíz a una de las hojas.

int Arbol::obtenerAltura(Nodo* nodo) {

    // resultado
    int altura = 0;

    // referencias hi e hd
    Nodo* ref_h_izq;
    Nodo* ref_h_der;

    // resultado de alturas de hi e hd
    int altura_r_izq = 0;
    int altura_r_der = 0;

    //
    if (nodo != NULL) {
        // incia en 1 para contar la raiz
        altura = 1;

        // inicialiaza las referencias
        ref_h_izq = nodo->hijoizquierdo;
        ref_h_der = nodo->hijoderecho;

        // si ninguno de los hijos es nulo
        if ((ref_h_izq != NULL) && (ref_h_der != NULL)) {
            // obtiene las alturas de cada arbol izq y der
            altura_r_izq = obtenerAltura(ref_h_izq);
            altura_r_der = obtenerAltura(ref_h_der);

            // suma la altura mayor, para determinar el mayor nivel
            if (altura_r_izq >= altura_r_der) {
                altura += altura_r_izq;
            } else {
                altura += altura_r_der;
            }
            // hizq no es nulo, suma altura de hijo izquierdo
        } else if ((ref_h_izq != NULL) && (ref_h_der == NULL)) {
            altura += obtenerAltura(ref_h_izq);
        }// hder no es nulo, suma altura de hijo derecho
        else if ((ref_h_izq == NULL) && (ref_h_der != NULL)) {
            altura += obtenerAltura(ref_h_der);
        }// cuando ambos son nulos, resta el uno con el que empezó
        else if ((ref_h_izq == NULL) && (ref_h_der == NULL)) {
            altura -= 1;
        }
    }
    // retorna el resultado
    return altura;
}

int maximo(int a, int b) {
    if (a > b)
        return a;
    else return b;
}

int Arbol::altura(Nodo* nodo) {
    if (nodo == NULL)
        return -1;
    else
        return 1 + maximo(altura(nodo->hijoizquierdo), altura(nodo->hijoderecho));
}

int Arbol::cantNodos2(Nodo* nodo) {
    if (nodo == NULL)
        return 0;
    else
        return 1 + cantNodos2(nodo->hijoizquierdo) + cantNodos2(nodo->hijoderecho);
}

int Arbol::cantHojas(Nodo* raiz) {
    if (raiz == NULL)
        return 0;
    else if (raiz->hijoderecho == NULL && raiz->hijoizquierdo == NULL)
        return 1;
    else
        return cantHojas(raiz->hijoderecho) + cantHojas(raiz->hijoizquierdo);
}

// borrar

Nodo* Arbol::mayor(Nodo* arbol) {
    if (arbol == NULL)
        return NULL;
    else if (arbol->hijoderecho == NULL)
        return arbol;
    else
        return mayor(arbol->hijoderecho);
}

Nodo* Arbol::borrarElemento(int ele) {
    raiz = borrarElemento(ele, raiz);
    return raiz;
}

Nodo* Arbol::borrarElemento(int ele, Nodo* arbol) {
    if (arbol == NULL) {
        return NULL;
    } else if (ele < arbol->indice)
        arbol->hijoizquierdo = borrarElemento(ele, arbol->hijoizquierdo);
    else if (ele > arbol->indice)
        arbol->hijoderecho = borrarElemento(ele, arbol->hijoderecho);
    else if (arbol->hijoizquierdo == NULL && arbol->hijoderecho == NULL)
        arbol = NULL;
    else if (arbol->hijoizquierdo == NULL)
        arbol = arbol->hijoderecho;
    else if (arbol->hijoderecho == NULL)
        arbol = arbol->hijoizquierdo;
    else {
        Nodo* max = mayor(arbol->hijoizquierdo); // mayor de los menores
        arbol->hijoizquierdo = borrarElemento(max->indice, arbol->hijoizquierdo);
        arbol->indice = max->indice;
    }
    return arbol;
}
