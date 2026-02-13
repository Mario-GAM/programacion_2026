#include "Celular.h"
#include <string>
#include <iostream>

using namespace std;

celular::celular(string marca, string modelo, int codigo, float precio, bool estado) {

    this->marca = marca;
    this->modelo = modelo;
    this->codigo = codigo;
    this->precio = precio;
    this->estado = estado;
}

void celular::verPrecio() {

    cout<<"El precio del dispositivo es de: "<<this->precio<<endl;

}
void celular::verMarca() {

    cout<<"La marca del dispositivo es de: "<<this->marca<<endl;

}
void celular::verEstado() {

    if(this->estado){
        
            cout<<"El telefono esta encendido"<<endl;
    }else{
            cout<<"El telefono esta apagado"<<endl;
    }
}

