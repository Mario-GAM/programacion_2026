#include <iostream>
#include "vehiculo.h"
#include "coche.h"
#include "grua.h"
#include "camion.h"
#include "moto.h"


int main() {
    std::cout << "=== Ejemplo de herencia: Vehiculo y Coche ===" << std::endl;
    std::cout << std::endl;

    Vehiculo vehiculo1("Ford", "F-150", 2019, "DLs13");
    std::cout << "Vehículo 1 (clase base):" << std::endl;
    vehiculo1.mostrarInformacion();
    std::cout << std::endl;

    Coche coche1;
    std::cout << "Coche 1 (constructor por defecto):" << std::endl;
    coche1.mostrarInformacion();
    std::cout << std::endl;

    coche1.actualizarMarca("Toyota");
    coche1.actualizarModelo("Corolla");
    coche1.actualizarAnio(2022);
    coche1.actualizarNumeroPuertas(4);

    std::cout << "Coche 1 después de actualizar:" << std::endl;
    coche1.mostrarInformacion();
    std::cout << std::endl;

    Gruas grua1;
    Gruas vehiculo1("Honda", "Civic", 2020, 4);
    std::cout << "Grua 1 (constructor con parámetros):" << std::endl;
    grua1.mostrarInformacion();
    std::cout << std::endl;

    std::cout << "Acceso a miembros heredados (Coche 2):" << std::endl;
    std::cout << "  Marca (heredado): " << coche2.obtenerMarca() << std::endl;
    std::cout << "  Modelo (heredado): " << coche2.obtenerModelo() << std::endl;
    std::cout << "  Año (heredado): " << coche2.obtenerAnio() << std::endl;
    std::cout << "  Puertas (propio): " << coche2.obtenerNumeroPuertas() << std::endl;
    std::cout << std::endl;

    coche2.actualizarNumeroPuertas(2);
    std::cout << "Coche 2 después de cambiar a 2 puertas:" << std::endl;
    coche2.mostrarInformacion();

    return 0;
}
