#include "empleado.h"
#include <iostream>

//Contructor por defecto
empleado::empleado(){

    nombreC = "";
    id = "";
    salarioB = 0.0;
}

//Constructor con parametros

empleado::empleado(std::string nombreC, std::string id, float salarioB){

    this-> nombreC = nombreC;
     this-> id = id;
      this-> salarioB = salarioB;

}

// Métodos para actualizar
void empleado::actualizarNombre (std::string nuevoNombre ){

    nombreC = nuevoNombre; 
}
    void empleado::actualizarId (std::string nuevaId){

        id = nuevaId;
    }
    
    void empleado::actualizarSalario (float nuevoSalario){

        salarioB = nuevoSalario;
    }

    void empleado::mostrarInformacion(){

        std::cout << "Nombre: " << nombreC << std::endl;
        std::cout << "Id: " << id << std::endl;
        std::cout << "Salario: " << salarioB << std::endl;
}

// Getters
std::string empleado::obtenerNombre() {
    return nombreC;
}
std::string empleado::obtenerId() {
    return id;
}

float empleado::obtenerSalario() {
    return salarioB;
}