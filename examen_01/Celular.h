#ifndef CELULAR_H // Si CELULAR_H no esta definido
#define CELULAR_H // Define CELULAR_H
#include <string> 

// La clase que se va a utilizar.
class celular{ 
    //atributos privados que se utilizaran.
    private:
std::string marca; //Marca del telefono
std::string modelo; //Modelo del telefono
int codigo; //Codigo de identificacion del telefono
float precio; //Precio del telefono
bool estado; //Estado del telefono (apagado o encendido)

public: 
// Metodos publicos :

// Constructor :
celular(std::string marca, std::string modelo, int codigo, float precio, bool estado);

// Metodos:
void verEstado();
void verMarca();
void verPrecio();

};

#endif //Fin del bloque.