#ifndef GRUAS_H
#define GRUAS_H
#include "vehiculo.h"
#include <string>

class Gruas : Vehiculo {

    private:
    float capacidad_carga;
    std::string tipo_estabiizador;

    public:

    Gruas();
    Gruas(std::string marca, std::string modelo, int anio, float capacidad_carga, std::string tipo_estabiizador);

    void actualizarCapacidad(float capacidad_carga);
    void actualizarTipo(std::string tipo_estabilizador);
    void mostrarInformacion();

    float obtenerCapacidad();
    std::string obtenerTipo();

    
};




#endif