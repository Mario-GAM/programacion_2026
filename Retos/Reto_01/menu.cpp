#include "menu.h"
#include "vehiculo.h"
#include "coche.h"
#include "grua.h"
#include "moto.h"
#include "camion.h"
#include <iostream>

void ejecutaMenu(Coche &coche1, Moto &moto1, Camion &camion1, Gruas &grua1)
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
    std::cout << "3.- CAMION" << std::endl;
    std::cout << "4.- GRUA" << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << ": ";
    std::cin >> selec;
    
    std::cout << "Ingresa la nueva placa: ";
    std::cin >> nuevaPlaca;

    switch (selec)
    {
        case 1:  
    std::cout << "Cambio de placas del coche" << std::endl;
    coche1.actualizarPlaca(nuevaPlaca);
    std::cout <<" ---------------------"<<std::endl;
    std::cout <<"|  placa actualizada. |"<<std::endl;
    std::cout <<" ---------------------"<<std::endl;

    std::cout <<"______Datos actualizados______"<<std::endl;
    coche1. mostrarInformacion();

        break;
        case 2:
        moto1.actualizarPlaca(nuevaPlaca);
    std::cout <<" ---------------------"<<std::endl;
    std::cout <<"|  placa actualizada. |"<<std::endl;
    std::cout <<" ---------------------"<<std::endl;

    std::cout <<"______Datos actualizados______"<<std::endl;
    moto1. mostrarInformacion();
    break;    
        case 3:
        camion1.actualizarPlaca(nuevaPlaca);
    std::cout <<" ---------------------"<<std::endl;
    std::cout <<"|  placa actualizada. |"<<std::endl;
    std::cout <<" ---------------------"<<std::endl;

    std::cout <<"______Datos actualizados______"<<std::endl;
    camion1. mostrarInformacion();
    break;    
        case 4:
        grua1.actualizarPlaca(nuevaPlaca);
    std::cout <<" ---------------------"<<std::endl;
    std::cout <<"|  placa actualizada. |"<<std::endl;
    std::cout <<" ---------------------"<<std::endl;

    std::cout <<"______Datos actualizados______"<<std::endl;
    grua1. mostrarInformacion();
    std::cout << "_____________________________" << std::endl;
        break;
    
    }
        }
        else if (op == 2){
            std::cout << "Ingresa la nueva placa para el coche:" << std::endl;
            std::cin >> nuevaPlaca;
            coche1.actualizarPlaca(nuevaPlaca);

            std::cout << "Ingresa la nueva placa para la moto:" << std::endl;
            std::cin >> nuevaPlaca;
            moto1.actualizarPlaca(nuevaPlaca);

            std::cout << "Ingresa la nueva placa para el camion:" << std::endl;
            std::cin >> nuevaPlaca;
            camion1.actualizarPlaca(nuevaPlaca);

            std::cout << "Ingresa la nueva placa para la grua:" << std::endl;
            std::cin >> nuevaPlaca;
            grua1.actualizarPlaca(nuevaPlaca);
            
            std::cout << "____Informacion con las placas actualizadas____" << std::endl;
            
            std::cout << "_____Informacion de coche_____" << std::endl;
            coche1. mostrarInformacion();
            std::cout << "______________________________" << std::endl;

            std::cout << "" << std::endl;
            std::cout << "_____Informacion de moto_____" << std::endl;
            moto1. mostrarInformacion();
            std::cout << "______________________________" << std::endl;

            std::cout << "" << std::endl;
            std::cout << "_____Informacion de moto_____" << std::endl;
            camion1. mostrarInformacion();
            std::cout << "______________________________" << std::endl;

            std::cout << "" << std::endl;
            std::cout << "_____Informacion de moto_____" << std::endl;
            grua1. mostrarInformacion();
            std::cout << "______________________________" << std::endl;


        }
        
    }while(op != 3);
    std::cout <<"Vuleve pronto"<<std::endl;
}
