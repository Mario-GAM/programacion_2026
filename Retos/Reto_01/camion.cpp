#include "camion.h"
#include <iostream>

Camion::Camion() : Vehiculo() {
    maximo_de_peso = 0.0;
    capacidad_personas = 0;
}

Camion::Camion (std::string marca, std::string modelo, int anio, std::string placa,float maximo_de_peso, int capacidad_personas) 
           : Vehiculo(marca, modelo, anio, placa) {

            this->maximo_de_peso = maximo_de_peso;
    this->capacidad_personas = capacidad_personas;
}


   void Camion::actualizarMaximoDePeso(float nuevoMaximoDePeso){

    maximo_de_peso = nuevoMaximoDePeso;

   }
    void Camion::actualizarCapacidadPersonas(int nuevaCapacidadPersonas){

        capacidad_personas = nuevaCapacidadPersonas;
    }

   void Camion::mostrarInformacion() {
    Vehiculo::mostrarInformacion(); 
    std::cout << "Maximo peso: " << maximo_de_peso << " toneladas" << std::endl;
    std::cout << "Maximo personas: " << capacidad_personas << std::endl;
}

float Camion::obtenerMaximoDePeso() {
    return maximo_de_peso;
}

int Camion::obtenerCapacidadPersonas() {
    return capacidad_personas;
}