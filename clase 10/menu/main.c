#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int dia, mes, anio;
}eFecha;
typedef struct
{
    char nombre[30];
    int legajo;
    char sexo;
    float sueldo;
    eFecha fechaIngreso;
    int isEmpty;

}eEmpleado;
int menu();
void inicializarEmpleados(eEmpleado vec[], int tam);
int buscarLibre(eEmpleado vec[],int tam);
int buscarEmpleado(eEmpleado vec[], int tam, int legajo);
//void altaEmpleado(eEmpleado vec[],int tam);
int main()
{
 int salir=0;
 eEmpleado empleados[50];
 inicializarEmpleados(empleados,50);
    do
    {

        switch(menu())
        {
            case 1:
                printf("\nalta\n\n");
                altaEmpleado(empleados, 50);
                system("pause");
                break;
            case 2:
                printf("\nbaja\n\n");

                system("pause");
                break;
            case 3:
                printf("\nmodificacion\n\n");
                system("pause");
                break;
            case 4:
                printf("\nlistar\n\n");
                system("pause");
                break;
            case 5:
                printf("\nordenar\n\n");
                system("pause");
                break;
            case 6:
                salir=1;
                break;
            default:
                printf("opcion incorrecta\n");
                system("pause");
                break;



        }

    }
    while(salir!=1);
    return 0;
}
int menu()
{
    int opcion;
    system("cls");
    printf("Menu de opciones : \n");
    printf("1.- Alta\n");
    printf("2.- Baja\n");
    printf("3.-Modificar\n");
    printf("4.- Listar\n");
    printf("5.-Ordenar\n");
    printf("6.-salir\n");


    scanf("%d",&opcion);

    return opcion;
}
inicializarEmpleados(eEmpleado vec[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
        {
                    vec[i].isEmpty=1;

        }
}


int buscarLibre(eEmpleado vec[], int tam)
{
   int indice=-1;
   for(int i=0;i<tam;i++)
    {
        if(vec[i].isEmpty==1)
            {
               indice=i;
                break;
            }
            return indice;
    }
}
int buscarEmpleado(eEmpleado vec[], int tam, int legajo)
{
    int indice=-1;
    for(int i=0;i<tam;i++)
        {
            if(vec[i].legajo==legajo&&vec[i].isEmpty==0)
                {
             indice=i;
                }
        }
         return indice;
}
void altaEmpleado(eEmpleado vec[],int tam)
{
    eEmpleado nuevoEmpleado;
    int legajo, esta, indice;
   esta=buscarLibre(vec, 50);
   if(esta==-1)
    {
        printf("No hay espacio para almacenar otro empleado");
    }
    else
    {
        printf("ingrese un legajo");
        scanf("%d", &legajo);
        indice = buscarEmpleado(vec, tam, legajo);
        if(indice!=-1)
            {
                printf("El legajo ya existe");
            }
        else
        {
            printf("ingrese un nombre: ");
            scanf("%s",&nuevoEmpleado.nombre);
            fflush(stdin);
            printf("ingrese un sexo: ");
            fflush(stdin);
            scanf("%c",&nuevoEmpleado.sexo);
            printf("ingrese un sueldo: ");
            scanf("%f", &nuevoEmpleado.sueldo);
            printf("fecha de ingreso: ");
            scanf("%d %d %d", &nuevoEmpleado.fechaIngreso.dia, &nuevoEmpleado.fechaIngreso.mes, &nuevoEmpleado.fechaIngreso.anio);
            nuevoEmpleado. legajo = legajo;
            nuevoEmpleado.isEmpty = 0;
            vec[esta]=nuevoEmpleado;
            printf("\n carga exitosa!!");
        }




    }
}


