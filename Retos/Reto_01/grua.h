#ifndef GRUA_H
#define GRUA_H
#include "vehiculo.h"
#include <string>

class Gruas : public Vehiculo {

    private:
    float capacidad_carga;
    std::string tipo_estabilizador;

    public:

    Gruas();
    Gruas(std::string marca, std::string modelo, int anio,std::string placa, float capacidad_carga, std::string tipo_estabilizador);

    void actualizarCapacidad(float capacidad_carga);
    void actualizarTipo(std::string tipo_estabilizador);
    void mostrarInformacion();

    float obtenerCapacidad();
    std::string obtenerTipo();
  
};


#endif