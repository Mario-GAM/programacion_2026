#include "vehiculo.h"
#include <iostream>

// Constructor por defecto
Vehiculo::Vehiculo() {
    marca = "";
    modelo = "";
    anio = 0;
    placa = "";
}

// Constructor con parámetros
Vehiculo::Vehiculo(std::string marca, std::string modelo, int anio, std::string placa) {
    this-> marca = marca;
    this-> modelo = modelo;
    this-> anio = anio;
    this-> placa = placa;
}

// Métodos para actualizar
void Vehiculo::actualizarMarca(std::string nuevaMarca) {
    marca = nuevaMarca;
}

void Vehiculo::actualizarModelo(std::string nuevoModelo) {
    modelo = nuevoModelo;
}

void Vehiculo::actualizarAnio(int nuevoAnio) {
    anio = nuevoAnio;
}

void Vehiculo::actualizarPlaca (std::string nuevaPlaca) {
    placa = nuevaPlaca;
}

// Método para mostrar
void Vehiculo::mostrarInformacion() {
    std::cout << "Marca: " << marca << std::endl;
    std::cout << "Modelo: " << modelo << std::endl;
    std::cout << "Año: " << anio << std::endl;
    std::cout << "Placa: " << placa << std::endl;

}

// Getters
std::string Vehiculo::obtenerMarca() {
    return marca;
}

std::string Vehiculo::obtenerModelo() {
    return modelo;
}

int Vehiculo::obtenerAnio() {
    return anio;
}

std::string Vehiculo::obtenerPlaca() {
    return placa;
}
