#ifndef MOTO_H
#define MOTO_H

#include "vehiculo.h"
#include <string>

class Moto : public Vehiculo {
private:
    int cilindrada;

public:

Moto();
Moto(std::string marca, std::string modelo, int anio, std::string placa, int cilindrada);

    void actualizarCilindrada(int nuevaCilindrada);
    void mostrarInformacion();

    int obtenerCilindrada();
};

#endif
