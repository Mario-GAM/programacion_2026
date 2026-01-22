#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include<stdlib.h>

char nombre[10][50];
char codigo[10][20];
int edad[10];
float promedio[10];
bool activo[10];
int op, TotalEstudiantes = 0;

void actualizarNombre(int i, char nuevoNombre[]) {
    strcpy(nombre[i], nuevoNombre);
}

void actualizarCodigo(int i, char nuevoCodigo[]) {
    strcpy(codigo[i], nuevoCodigo);
}

void actualizarEdad(int i, int nuevaEdad) {
    edad[i] = nuevaEdad;
}

void actualizarPromedio(int i, float nuevoPromedio) {
    if (nuevoPromedio >= 0.0 && nuevoPromedio <= 10.0) {
        promedio[i] = nuevoPromedio;
    } else {
        printf("Error: El promedio debe estar entre 0.0 y 10.0. Se asignará 0.0\n");
        promedio[i] = 0.0;
    }
}

void actualizarActivo(int i, bool nuevoEstado) {
    activo[i] = nuevoEstado;
}

void mostrarNombre(int i) { printf("Nombre: %s\n", nombre[i]); }
void mostrarCodigo(int i) { printf("Codigo: %s\n", codigo[i]); }
void mostrarEdad(int i) { printf("Edad: %d \n", edad[i]); }
void mostrarPromedio(int i) { printf("Promedio: %.2f\n", promedio[i]); }
void mostrarActivo(int i) { 
    printf("Estado: %s\n", activo[i] ? "Activo" : "Inactivo"); 
}

void mostrarInformacionCompleta(int i) {
    printf("\n--- Datos del Estudiante %d ---\n", i + 1);
    mostrarNombre(i);
    mostrarCodigo(i);
    mostrarEdad(i);
    mostrarPromedio(i);
    mostrarActivo(i);
    printf("-------------------------------\n");
}


void AgregarEstudiante() {
    if (TotalEstudiantes < 10) {
        char tempNom[50], tempCod[20];
        int tempEd, estadoSel;
        float tempProm;

        printf("\n--- Registro Nuevo ---\n");
        printf("Ingrese nombre completo: ");
        scanf(" %[^\n]", tempNom);
        actualizarNombre(TotalEstudiantes, tempNom);

        printf("Ingrese codigo: ");
        scanf("%s", tempCod);
        actualizarCodigo(TotalEstudiantes, tempCod);

        printf("Ingrese edad: ");
        scanf("%d", &tempEd);
        actualizarEdad(TotalEstudiantes, tempEd);

        printf("Ingrese promedio: ");
        scanf("%f", &tempProm);
        actualizarPromedio(TotalEstudiantes, tempProm);

        printf("Estado (1: Activo, 0: Inactivo): ");
        scanf("%d", &estadoSel);
        actualizarActivo(TotalEstudiantes, (estadoSel == 1));
        system ("clear");
        TotalEstudiantes++;
        printf("\n** Estudiante agregado con exito **\n");
    } else {
        printf("\nError: Capacidad maxima alcanzada.\n");
    }
}

void MenuModificar() {
    if (TotalEstudiantes == 0) {
        printf("\nNo hay estudiantes para modificar.\n");
        return;
    }

    int sel, subOp;
    printf("\nIngrese el numero de estudiante a editar (1-%d): ", TotalEstudiantes);
    scanf("%d", &sel);
    int i = sel - 1;

    if (sel >= 1 && sel <= TotalEstudiantes) {
        printf("\n¿Que desea modificar?\n");
        printf("1. Nombre\n2. Codigo\n3. Edad\n4. Promedio\n5. Estado\nOpcion: ");
        scanf("%d", &subOp);

        switch (subOp) {
            case 1: 
                { char n[50]; printf("Nuevo nombre: "); scanf(" %[^\n]", n); actualizarNombre(i, n); break; }
            case 2: 
                { char c[20]; printf("Nuevo codigo: "); scanf("%s", c); actualizarCodigo(i, c); break; }
            case 3: 
                { int e; printf("Nueva edad: "); scanf("%d", &e); actualizarEdad(i, e); break; }
            case 4: 
                { float p; printf("Nuevo promedio: "); scanf("%f", &p); actualizarPromedio(i, p); break; }
            case 5: 
                { int s; printf("Estado (1: Activo, 0: Inactivo): "); scanf("%d", &s); actualizarActivo(i, (s == 1)); break; }
            default: printf("Opcion no valida.\n"); return;
        }
        system("clear");
        printf("\n** Dato actualizado correctamente **\n");
    } else {
        printf("\nNumero fuera de rango.\n");
    }
}

void BuscarEstudiante() {
    if (TotalEstudiantes == 0) {
        printf("\nNo hay estudiantes registrados.\n");
        return;
    }
    int sel;
    printf("\nIngrese numero de estudiante (1-%d): ", TotalEstudiantes);
    scanf("%d", &sel);
    if (sel >= 1 && sel <= TotalEstudiantes) {
        mostrarInformacionCompleta(sel - 1);
    } else {
        printf("\nEstudiante no encontrado.\n");
    }
}

int main() {
    do {
        printf("\n===== SISTEMA ACADEMICO =====");
        printf("\n1. Agregar estudiante");
        printf("\n2. Buscar estudiante especifico");
        printf("\n3. Mostrar todos los estudiantes");
        printf("\n4. Modificar datos de estudiante");
        printf("\n5. Salir");
        printf("\nSeleccione una opcion: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
            system ("clear");
            AgregarEstudiante(); break;
            case 2: 
            system ("clear");

            BuscarEstudiante(); break;
            case 3: 
                if (TotalEstudiantes == 0) printf("\nLista vacia.\n");
                system ("clear");
                for(int i = 0; i < TotalEstudiantes; i++) mostrarInformacionCompleta(i); 
                break;
            case 4: 
            system ("clear");
            MenuModificar(); break;
            case 5: 
            system ("clear");
            printf("\nPrograma Cerrado...\n"); break;
            default: printf("\nOpcion no valida.\n");
        }
    } while (op != 5);
    
    return 0;
}