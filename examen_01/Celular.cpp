#include "Celular.h" // Cabecera necesaria para usar la clase celular.
#include <string> // Librerías estándar.
#include <iostream> // Librerías estándar.

using namespace std; // Permite usar elementos de la librería estándar (como cout) sin escribir std::
// Costructor con parametros
celular::celular(string marca, string modelo, int codigo, float precio, bool estado) {

    this->marca = marca; // this->marca accede al atributo del objeto.
    this->modelo = modelo; // this->modelo accede al atributo del objeto.
    this->codigo = codigo; // this->codigo accede al atributo del objeto.
    this->precio = precio; // this->precio accede al atributo del objeto.
    this->estado = estado; // this->estado accede al atributo del objeto.
}

// Método de visualización.
void celular::verPrecio() {

    cout<<"El precio del dispositivo es de: "<<this->precio<<endl;

}

// Método de visualización.
void celular::verMarca() {

    cout<<"La marca del dispositivo es de: "<<this->marca<<endl;

}

// Método de visualización.
void celular::verEstado() {

// Método de verificar y mostrar si el equipo esta prendido o no.
    if(this->estado){

            cout<<"El telefono esta encendido"<<endl;
    }else{
            cout<<"El telefono esta apagado"<<endl;
    }
}

