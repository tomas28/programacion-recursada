#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define TRUE 1
int main()
{

	char letra;
	int numero;
	int contador=0;
	int contadorNumerosPares=0;
	int contadorNumerosImpares=0;
	int contadorDeCeros=0;
	int contadorNumerosPositivos=0;
	int contadorNumerosnegativos=0;
	int sumaNumerosPositivos=0;
	int sumaNumerosNegativos=0;
	float promedioPositivos;
	int numeroMaximo=-100;
	int numeroMinimo=100;
	char letraMaxima;
	char letraMinima;
	char respuesta = 's';
	int flag=0;


	while(respuesta == 's')
	{
		printf("ingrese una letra\n");
		fflush(stdin);
		scanf("%c",&letra);


        do
        {
            printf("ingrese un numero entre -100 y 100\n");
            fflush(stdin);
            scanf("%d",&numero);

        }while( numero<-100 || numero>100);


            if (numero%2==0)
            {
                contadorNumerosPares++;
            }
            else
            {
                contadorNumerosImpares++;
            }
            if (numero==0)
            {
                contadorDeCeros++;
            }
            if (numero>0)
            {
                contadorNumerosPositivos++;
                sumaNumerosPositivos=numero+sumaNumerosPositivos;
            }
            else
            {
                contadorNumerosnegativos++;
                sumaNumerosNegativos=numero+sumaNumerosNegativos;
            }
            if (numeroMaximo<numero)
            {
                numeroMaximo=numero;
                letraMaxima=letra;
            }
            if (numeroMinimo>numero)
            {
                numeroMinimo=numero;
                letraMinima=letra;
            }

            contador=contador+1;
            printf("s para continuar n para terminar");
            fflush(stdin);
            scanf("%c",&respuesta);


	}


	promedioPositivos=sumaNumerosPositivos/contadorNumerosPositivos;

	printf("La cantidad de números pares: %d",contadorNumerosPares);
	printf(" La cantidad de números impares: %d",contadorNumerosImpares);
    printf("La cantidad de ceros: %d", contadorDeCeros);
    printf("El promedio de todos los números positivos ingresados: %f",promedioPositivos);
    printf("La suma de todos los números negativos: %d",sumaNumerosNegativos);
    printf("numeroMaximo: %d",numeroMaximo);
    printf("letraMaxima: %c",letraMaxima);
    printf("numeroMinimo: %d",numeroMinimo);
    printf("letraMinima: %c",letraMinima);
}
