#ifndef LISTAPLAGAS_H
#define LISTAPLAGAS_H
#include "estructurasTablero.h"

using namespace std;

struct ListaPlagas{
    plaga * primerNodo;

    ListaPlagas(){
        primerNodo = NULL;
    }

    void insertar(plaga * pPlaga){
        if(primerNodo == NULL){
            primerNodo = pPlaga;
        }else{
            primerNodo->siguiente = pPlaga;
        }
    }

    plaga * buscarPlaga(string nombrePlaga){
        if(primerNodo == NULL){
            return NULL;
        }else{
            plaga * temporal = primerNodo;
            while (temporal != NULL){
                if(temporal->tipoPlaga = nombrePlaga){
                    return temporal;
                }
                temporal = temporal->siguiente;
            }
            return NULL;
        }
    }
};

#endif // LISTAPLAGAS_H
