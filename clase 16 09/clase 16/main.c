#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int resp;
    char num[10];
    int cant;

    printf("ingrese un numero");

    fgets(num,sizeof(num),stdin);
    cant = strlen(num);

    printf("\nler STRLEN : %d ",cant);
    for(int i=0;i<cant;i++){
        printf("\nElemento: %d : %c :", i, num[i]);
    }
    return 0;
}
