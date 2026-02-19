#ifndef Empleado_H
#define Empleado_H

#include <string>

class empleado{

    protected: 
    std::string nombreC;
    std::string id;
    float salarioB;

    public:
    //Constructores
    empleado();
    empleado(std::string nombreC, std::string id, float salarioB);

    //Setters
    void actualizarNombre (std::string nombreC );
    void actualizarId (std::string id);
    void actualizarSalario (float salarioB);

    //Getters
    std::string obtenerNombre ();
    std::string obtenerId ();
    float obtenerSalario ();

    //Metodos para mostrar
    void mostrarInformacion ();


};

#endif
