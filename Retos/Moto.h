#ifndef MOTO_H
#define MOTO_H

#include "vehiculo.h"
#include <string>

class Moto : public Vehiculo {
private:
    int cilindrada;

public:
    Moto(std::string marca, std::string modelo, std::string placa, int cilindrada);

    void actualizaCilindrada(int nuevaCilindrada);
    int obtenerCilindrada();

    void setPlaca(std::string nuevaPlaca);
    std::string getPlaca();

    void mostrarInfo() override;
};

#endif
