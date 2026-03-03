#include <iostream>
#include "vehiculo.h"
#include "coche.h"
#include "grua.h"
#include "camion.h"
#include "moto.h"
#include "menu.h"

//Prof,  para compilar es esto |
//                             v

//g++ main.cpp menu.cpp vehiculo.cpp coche.cpp moto.cpp camion.cpp grua.cpp -o programa_vehiculos
//./programa_vehiculos

int main() {
    Coche coche1("Toyota", "Corolla", 2022, "ABC-123", 4);
    Moto moto1("Vento", "Screamer 300", 2024, "MOTO-456", 300);
    Camion camion1("Volvo", "FH16", 2020, "TRUCK-789", 20.5, 2);
    Gruas grua1("Freightliner", "M2", 2019, "TOW-000", 5.0, "Hidráulico");

    std::cout << "_____Veiculos existentes_____" << std::endl;

    std::cout << "_____Informacion de coche_____" << std::endl;
    coche1. mostrarInformacion();
    std::cout << "______________________________" << std::endl;

    std::cout << "" << std::endl;
    std::cout << "_____Informacion de moto_____" << std::endl;
    moto1. mostrarInformacion();
    std::cout << "______________________________" << std::endl;

    std::cout << "" << std::endl;
    std::cout << "_____Informacion de camion_____" << std::endl;
    camion1. mostrarInformacion();
    std::cout << "______________________________" << std::endl;

    std::cout << "" << std::endl;
    std::cout << "_____Informacion de grua_____" << std::endl;
    grua1. mostrarInformacion();
    std::cout << "______________________________" << std::endl;

    std::cout << "_____Sistema de Gestion de Vehiculos_____" << std::endl;

    ejecutaMenu(coche1, moto1, camion1, grua1);

    return 0;
}

