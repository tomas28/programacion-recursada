
typedef struct{

    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
}employee;

void inicializarEmpleados(employee*,int );
int buscarLibre(employee* empleado, int tam);
