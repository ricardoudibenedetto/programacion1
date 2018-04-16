#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char nombre[20];
    int legajo;
    float sueldo;
    char sexo;
}eEmpleado;

void mostrarEmpleado(eEmpleado emp);
int main()
{
    //eEmpleado unEmpleado;
   eEmpleado unEmpleado={"juan",1111,1000.78,'m'}; //hardcodeo
   eEmpleado otroEmpleado;
   otroEmpleado=unEmpleado; //se puede usar esto para hacer un soapeo
 /*
    unEmpleado.legajo=1234;
    strcpy(unEmpleado.nombre, "juan");
    unEmpleado.sueldo=50000.50;
    unEmpleado.sexo='m';
 */
    //pide datos
  /*  printf("ingrese nombre: ");
    gets(unEmpleado.nombre);
    printf("ingrese un legajo: ");
    scanf("%d", &unEmpleado.legajo);
    printf("ingrese un sueldo: ");
    scanf("%f", &unEmpleado.sueldo);
    printf("ingrese un sexo: ");
    fflush(stdin);
    scanf("%c", &unEmpleado.sexo);
*/
    //funcion mostrar empleados
    mostrarEmpleado(otroEmpleado);


    return 0;
}

void mostrarEmpleado(eEmpleado emp)
{
 //muestra datos
    printf("nombre: %s \n", emp.nombre);
    printf("legajo: %d \n", emp.legajo);
    printf("sueldo: %.2f \n", emp.sueldo);
    printf("sexo: %c \n", emp.sexo);
}
