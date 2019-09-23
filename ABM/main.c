#include <stdio.h>
#include <stdlib.h>
#include "empleados.h"
#define TAM 1000

int main()
{
    char seguir;
    employee empleado[TAM];

    inicializarEmpleados(empleado,TAM);


    while(seguir != 's'){
        printf("\n 1-Alta empleado\n 2-Baja empleado\n 3-Modificacion empleado\n 4-Ordenar empleados\n 5-Salir \n\n");
        fflush(stdin);
        scanf("%c",&seguir);



        switch(seguir)
            {

            case '1':
                printf("\nAlta empleado\n\n");
                altaEmpleado(empleado,TAM);


                system("pause");
                break;

            case '2':
                printf("\nBaja empleado\n\n");
                system("pause");
                break;

            case '3':
                printf("\nModificacion empleado\n\n");
                system("pause");
                break;

            case '4':
                printf("\nOrdenar empleados\n\n");
                system("pause");
                break;

            case '5':
                printf("usted salio del programa\n");
                seguir='s';

                //system("pause");
                break;

            default:
                printf("\n Opcion invalida\n\n");
                system("break");

        }

    }
    return 0;
}




