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
void mostrarEmpleados(eEmpleado vec[], int tam);
void ordenarEmpleados(eEmpleado[],int tam);
int main()
{
    //eEmpleado unEmpleado;
   eEmpleado plantel[]={{"juan",1111,1000.78,'m'},{"ana",2222,2000.78,'f'},{"luis",333,3000.78,'m'}}; //hardcodeo

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
    mostrarEmpleados(plantel,3);

    ordenarEmpleados(plantel, 3);

     mostrarEmpleados(plantel,3);
    //mostrarEmpleado(unEmpleado);



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

void mostrarEmpleados(eEmpleado vec[], int tam)
{
    for(int i=0; i<tam; i++)
        {
            mostrarEmpleado(vec[i]);
        }
}
//BURBUJEO PARA ORDENAR
void ordenarEmpleados(eEmpleado vec[],int tam)
{
    eEmpleado aux;
    for(int i=0; i<tam-1; i++)
        {
            for(int j=i+1;j<tam;j++)
                {
                    if(strcmp(vec[i].nombre, vec[j].nombre)>0)
                        {
                            aux=vec[i];
                            vec[i]=vec[j];
                            vec[j]=aux;
                        }
                }
        }

}

