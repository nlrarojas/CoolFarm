#include "mercadoplataforma.h"

MercadoPlataforma::MercadoPlataforma()
{
    estado = false;
}

void MercadoPlataforma::run(){
    while(true){
        if(this->mercado != NULL){
            while(this->estado){
                mutex.lock();
                if(!this->estado){
                    break;
                }
                this->sleep(this->mercado->tiempoAbierto * 60);
                this->estado = false;
                mutex.unlock();
            }
            mutex.lock();
            this->sleep(this->mercado->tiempoAbre * 60);
            this->estado = true;
            mutex.unlock();
        }
    }
}
