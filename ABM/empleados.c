#include <stdio.h>
#include <stdlib.h>
#include "empleados.h"

void inicializarEmpleados(employee* empleado,int tam)
{

    for(int i=0; i < tam; i++)
    {
        empleado[i].isEmpty = 1;
    }
}

int buscarLibre(employee* empleado, int tam){
    int i;
    int index=-1;

        for(i=0; i<tam; i++){
            if(empleado[i].isEmpty==1){
            index=1;
            break;
        }
    }

    return index;
}
void altaEmpleado(employee* empleado, int tam){
    int i;
    i= buscarLibre(empleado,tam);
    if(i!=-1){
        printf("ingrese el nombre: ");
        fflush(stdin);
        gets(empleado[i].name);
        printf("ingrese el apellido: ");
        fflush(stdin);
        gets(empleado[i].lastName);
        printf("ingrese el salario: ");
        scanf("%d",&empleado[i].salary);
        empleado[i].id=i+1;

        empleado[i].isEmpty=0;

    }
    else
    {
        printf("No hay espacio");
    }

}
void bajaEmpleado(employee* empleado, int tam ){





}
int buscarId(employee* empleado, int tam){



}
