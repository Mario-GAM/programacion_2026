#ifndef EMPLEADO_TIEMPO_COMPLETO_H
#define EMPLEADO_TIEMPO_COMPLETO_H

#include <string>
#include "empleado.h"

//clase derivada
class empleado_tiempo_completo : public empleado {

    private: 

        int horas_semanal;
        float bono;

        public: 
        //Constuctores
        empleado_tiempo_completo();
        empleado_tiempo_completo(std::string nombreC, std::string id, float salarioB, int horas_semanal, float bono);
        
        //metodo para calcuar
        float calcularSalarioTotal();

        //Metodos para actualizar
        void actualizarHoras(int horas_semanal);

        void actualizarBono (float bono);

        //Sobre escritura del metodo de la clase base 
        void mostrarInformacion();

        //Getters
        int obtenerHoras();
        float obtenerBono();

};
#endif
