#ifndef CAMION_H
#define CAMION_H

#include "vehiculo.h"
#include <string>

class Camion : public Vehiculo {

private:
    float maximo_de_peso; 
    int capacidad_personas; 

public:
    Camion();
    Camion(std::string marca, std::string modelo, int anio, std::string placa, float maximo_de_peso, int capacidad_personas);

    void actualizarMaximoDePeso(float nuevoMaximoDePeso);
    void actualizarCapacidadPersonas(int nuevaCapacidadPersonas);

    void mostrarInformacion();

    float obtenerMaximoDePeso();
    int obtenerCapacidadPersonas();
};

#endif 