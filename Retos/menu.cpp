#include "menu.h"
#include "vehiculo.h"
#include "coche.h"
#include "gruas.h"
#include <iostream>

void ejecutaMenu()
{
int op ;
    int selec;
    std::string nuevaPlaca;

    do 
    {
    std::cout << "------------------MENU------------------" << std::endl;
    std::cout << "Ingresa el nuemro de la tu eleccion:" << std::endl;
    std::cout << "1.- Cambiar placas de uno de los vehiculo " << std::endl;
    std::cout << "2.- Cambiar placas de todos los vehiculos" << std::endl;
    std::cout << "3.- Salir" << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << ": " ;
    std::cin >> op ;

    if (op == 1){
    std::cout << "------------------MENU------------------" << std::endl;
    std::cout << "Ingresa el numero de tu eleccion de los vehiculos existentes:" << std::endl;
    std::cout << "1.- COCHE " << std::endl;
    std::cout << "2.- MOTO" << std::endl;
    std::cout << "3.- AUTBUS" << std::endl;
    std::cout << "4.- GRUA" << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << ": ";
    std::cin >> selec;
    
    std::cout << "Ingresa la nueva placa: ";
    std::cin >> nuevaPlaca;

    switch (selec)
    {
        case 1:  
    std::cout << "1.- COCHE " << std::endl;

        break;
        case 2:
            std::cout << "2.- MOTO" << std::endl;

        break;
        case 3:
            std::cout << "3.- AUTBUS" << std::endl;

        break;
        case 4:
            std::cout << "4.- GRUA" << std::endl;

        break;
    
    }
        }
        else if (op == 2){
            std::cout << "Ingresa la placa general " << std::endl;
            std::cin >> nuevaPlaca;

        }
        
    }while(op != 3);
    std::cout <<"Vuleve pronto"<<std::endl;
}
