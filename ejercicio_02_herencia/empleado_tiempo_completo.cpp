
#include "empleado_tiempo_completo.h"
#include <iostream>

//contructor : llama la constructor por defecto
empleado_tiempo_completo::empleado_tiempo_completo() : empleado() {

    int horas_semanal = 0;
    float bono = 0.0;

}

//constructor por paramaentros pasa los datos del empleado a la base
empleado_tiempo_completo::empleado_tiempo_completo (std::string nombreC, std::string id, float salarioB, int horas_semanal, float bono)
: empleado (nombreC, id, salarioB){
    this-> horas_semanal = horas_semanal;
    this-> bono = bono;
}

//Metodo para calcular el salario total
float empleado_tiempo_completo::calcularSalarioTotal(){
    return salarioB + bono;
}

//Metodo para actualizar 
void empleado_tiempo_completo::actualizarHoras (int nuevaHora){
    horas_semanal = nuevaHora;
}

void empleado_tiempo_completo::actualizarBono (float nuevoBono){
    bono = nuevoBono;
}

//sobrescritura para realizar el metodo de la base y añade informacion de la clase
void empleado_tiempo_completo::mostrarInformacion (){
    empleado::mostrarInformacion();
    std::cout << "horas semanales:" << horas_semanal<<std::endl;
    std::cout << "bono:" << bono <<std::endl;
    std::cout << "Salario total: " << calcularSalarioTotal() << std::endl;

}

//Getters
int empleado_tiempo_completo::obtenerHoras(){
    return horas_semanal;
}

float empleado_tiempo_completo::obtenerBono(){
    return bono;
}