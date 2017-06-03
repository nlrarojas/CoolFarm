#include "controladorhilos.h"

ControladorHilos::ControladorHilos(MatrizArboles * matrizArboles, Matriz * matrizJuego, NodoInfoArbol * pNodoInfoAbb)
{
    this->estado = 1;
    hiloAbb = new HiloABB();
    hiloAbb->matrizArboles= matrizArboles;
    hiloAbb->matrizJuego = matrizJuego;
    hiloAbb->nodoArbol = pNodoInfoAbb;
}

void ControladorHilos::run(){
    while(true){
        mutex.lock();

        if(this->estado == 1){
            this->hiloAbb->estado = true;
            this->hiloAbb->start();
            this->estado = 4;
        }else if(this->estado == 2){
            this->hiloAbb->estado = false;
        }else if(this->estado == 3){
            this->hiloAbb->estado = true;
        }

        mutex.unlock();
    }
}

void ControladorHilos::cambiarEstado(int estadoNuevo){
    this->estado = estadoNuevo;
}
