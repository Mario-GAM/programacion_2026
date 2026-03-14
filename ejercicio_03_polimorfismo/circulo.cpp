#include "circulo.h"
#include <iostream>
#include <cmath>

Circulo::Circulo(std::string nombre, double radio):Figura(nombre){
    
    this-> radio = radio;
}

double Circulo::calcularArea(){
    double area;
   area = M_PI * (radio * radio);
   return area;
}

void Circulo::describir(){
    std::cout << "Figura: " << nombre << ", radio: "<< radio << std::endl;
}

double Circulo::obtenerRadio(){  
    return radio;
}
