#include "grua.h"
#include <iostream>


Gruas::Gruas (): Vehiculo(){
    capacidad_carga = 0.0 ;
    tipo_estabiizador = "";
 }
Gruas::Gruas (std::string marca, std::string modelo, int anio,std::string placa, float capacidad_carga, std::string tipo_estabiizador)
 : Vehiculo(marca, modelo, anio, placa) {

    this-> capacidad_carga =  capacidad_carga;
    this-> tipo_estabiizador =  tipo_estabiizador;

}

void Gruas::actualizarCapacidad(float nuevacapacidad){

    capacidad_carga = nuevacapacidad;
}
void Gruas::actualizarTipo(std::string nuevoTipo){

    tipo_estabiizador = nuevoTipo;
}
void Gruas::mostrarInformacion(){

     Vehiculo::mostrarInformacion();
    std::cout << "La capacidad de carga es de: " << capacidad_carga << std::endl;
    std::cout << "su tipo de estabilizador es: " << tipo_estabiizador << std::endl;

}

float Gruas::obtenerCapacidad() {
    return capacidad_carga;
}

std::string Gruas::obtenerTipo() {
    return tipo_estabiizador;
}