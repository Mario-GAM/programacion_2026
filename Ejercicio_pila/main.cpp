#include "custom_stack.h"
#include <iostream>

int main(){

    CustomStack mi_pila;
    mi_pila.push(1);
    mi_pila.push(2);
    mi_pila.push(3);

    mi_pila.pop();
    mi_pila.top();
    mi_pila.size();

    std::cout<<"ultimo dato: "<<mi_pila.top() << std::endl;
    std::cout<<"cantidad de datos: "<<mi_pila.size() << std::endl;





    return 0;
}