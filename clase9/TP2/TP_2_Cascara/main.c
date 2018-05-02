#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

typedef struct
{
    char nombre[30];
    int edad;
    long dni;
    int estado;
}ePersona;
void iniciarEstado(ePersona vec[], int tam);
int buscarLibre(ePersona vec[],int tam);
int buscarPersona(ePersona vec[], int tam, int dni);
void altaPersona(ePersona vec[],int tam);
void mostrarPersonas(ePersona vec[],int tam);
void mostrarPersona(ePersona vec);

int main()
{

    char seguir='s';
    int opcion=0;
    int tam=20;
    ePersona persona[20];
    iniciarEstado(persona,tam);
    while(seguir=='s')
    {
        system("cls");
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                altaPersona(persona, 20);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                mostrarPersonas(persona, 20);
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}

void iniciarEstado(ePersona vec[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
        {
                    vec[i].estado=0;
        }
}

int buscarLibre(ePersona vec[], int tam)
{
   int indice=-1;
   for(int i=0;i<tam;i++)
    {
        if(vec[i].estado==0)
            {
               indice=i;
                break;
            }

    }
     return indice;
}

//funcion para buscar un empleado por el tipo de legajo
int buscarPersona(ePersona vec[], int tam, int dni)
{
    int indice=-1;
    for(int i=0;i<tam;i++)
        {
            if(vec[i].dni==dni&&vec[i].estado==1)
                {
             indice=i;
                }
        }
         return indice;
}
void altaPersona(ePersona vec[],int tam)
{
    ePersona nuevaPersona;
    int dni, esta, indice;
   indice=buscarLibre(vec, 20);
   if(esta==-1)
    {
        printf("No hay espacio para almacenar otra persona\n");
    }
    else
    {
        printf("ingrese un dni: ");
        scanf("%d", &dni);
        esta = buscarPersona(vec, tam, dni);
        if(esta != -1)
            {
                printf("El dni ya existe, corresponde a la persona\n\n");
                printf("nombre\t\tedad\t\tDNI\n");
                mostrarPersona(vec[esta]);

            }
        else
        {
            printf("ingrese un nombre: ");
            scanf("%s",&nuevaPersona.nombre);
            fflush(stdin);

            printf("ingrese una edad: ");
            scanf("%d", &nuevaPersona.edad);


            nuevaPersona. dni = dni;
            nuevaPersona.estado = 1;

            vec[indice]=nuevaPersona;
            printf("\n carga exitosa!!\n");
        }
    }
}

void mostrarPersonas(ePersona vec[],int tam)
{
    for(int i=0;i<tam;i++)
        {
            if(vec[i].estado==1)
                {
                    mostrarPersona(vec[i]);
                }
        }
}
void mostrarPersona(ePersona vec)
{
    printf("%s\t\t%d\t\t%d\n ",vec.nombre,vec.edad,vec.dni);
}
