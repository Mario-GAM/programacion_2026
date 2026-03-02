#include "moto.h"
#include <iostream>

Moto::Moto(){
    int cilindrada = 0;

}
Moto::Moto(std::string marca, std::string modelo, std::string placa, int cilindrada)
    : Vehiculo(marca, modelo, placa) {
    this->cilindrada = cilindrada;
}

void Moto::setCilindrada(int nuevaCilindrada) {
    this->cilindrada = nuevaCilindrada;
}

int Moto::getCilindrada() {
    return this->cilindrada;
}

void Moto::setPlaca(std::string nuevaPlaca) {
    this->placa = nuevaPlaca;
}

std::string Moto::getPlaca() {
    return this->placa;
}

void Moto::mostrarInfo() {
    Vehiculo::mostrarInfo();
    std::cout << "Cilindrada: " << cilindrada << "cc" << std::endl;
}
