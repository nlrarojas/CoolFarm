#ifndef ESTRUCTURASTABLERO_H
#define ESTRUCTURASTABLERO_H

#include <iostream>

using namespace std;

struct tiposPlagas{
    string tipos[] = {"plaga", "oveja", "cuervo"};
};

struct plaga{
    double probabilidad;
    double tasaFrutos;
    string tipoPlaga;
    plaga * siguiente;

    plaga(double probabilidad, double tasaFrutos, string tipoPlaga){
        this->probabilidad = probabilidad;
        this->tasaFrutos = tasaFrutos;
        this->tipoPlaga = tipoPlaga;
        siguiente = NULL;
    }
};

struct granjero{
    int tiempoDesplazamiento;
    int posX;
    int posY;

    granjero(int tiempoDesplazamiento, int posX, int posY){
        this->tiempoDesplazamiento = tiempoDesplazamiento;
        this->posX = posX;
        this->posY = posY;
    }
};

struct espantapajaros{
    double costo;
    int cantidadPorTerreno;
    int posX;
    int posY;

    espantapajaros(double pCosto, int pCantidadPorTerreo, int posX, int posY){
        this->costo = pCosto;
        this->cantidadPorTerreno = pCantidadPorTerreo;
        this->posX = posX;
        this->posY = posY;
    }
};

struct mercado{
    int tiempoAbierto;
    int tiempoQueAbre;
    int rangoInferior;
    int rangoSuperior;

    mercado(int pTiempoAbierto, int pTiempoQueAbre, int pRangoInferior, int pRangoSuperior){
        this->tiempoAbierto = pTiempoAbierto;
        this->tiempoQueAbre = pTiempoQueAbre;
        this->rangoInferior = pRangoInferior;
        this->rangoSuperior = pRangoSuperior;
    }
};

#endif // ESTRUCTURASTABLERO_H
