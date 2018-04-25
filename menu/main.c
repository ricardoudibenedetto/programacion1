#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
    int idSector;

}eEmpleado;
typedef struct
{
    int id;
    char descripcion[51];
    int isEmpty;
}eSector;
//prototipos
int menu();
void inicializarEmpleados(eEmpleado vec[], int tam);
int buscarLibre(eEmpleado vec[],int tam);
int buscarEmpleado(eEmpleado vec[], int tam, int legajo);
void altaEmpleado(eEmpleado vec[],int tam);
void mostrarEmpleados(eEmpleado vec[],int tam);
void mostrarEmpleado(eEmpleado vec);
void bajaEmpleado(eEmpleado vec[],int tam);
void modificarEmpleado(eEmpleado vec[], int tam);
void hardCode(eSector vec[]);
//main
int main()
{
 int salir=0;
 eEmpleado empleados[50];
 inicializarEmpleados(empleados,50);
 eSector sectores[5];

 hardCode(sectores);
 for(int i=0 ;i<5;i++)
 {
     printf(" %d-%s-%d\n",sectores[i].id, sectores[i].descripcion, sectores[i].isEmpty);
 }
 system("pause");
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
                bajaEmpleado(empleados, 50);
                system("pause");
                break;
            case 3:
                printf("\nmodificacion\n\n");
                modificarEmpleado(empleados, 50);
                system("pause");
                break;
            case 4:
                printf("\nlistar\n\n");
                printf("nombre\t\tsexo\tsueldo\t\t\tfecha de ingreso\tlegajo\n");
                mostrarEmpleados(empleados,50);
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

//cuerpo de funciones
//funcion main
int menu()
{
    int opcion;
    system("cls");
    printf("Menu de opciones : \n");
    printf("1.- Alta\n");
    printf("2.- Baja\n");
    printf("3.- Modificar\n");
    printf("4.- Listar\n");
    printf("5.- Ordenar\n");
    printf("6.- salir\n");


    scanf("%d",&opcion);

    return opcion;
}
//funcion que inicializa empleados en 1
inicializarEmpleados(eEmpleado vec[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
        {
                    vec[i].isEmpty=1;

        }
}

//busca un lugar libre en el array para guardar a los empleados maximo 50
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

    }
     return indice;
}

//funcion para buscar un empleado por el tipo de legajo
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

//Alta de empleados, si el legajo no se encuentra se carga un nuevo empleado
void altaEmpleado(eEmpleado vec[],int tam)
{
    eEmpleado nuevoEmpleado;
    int legajo, esta, indice;
   indice=buscarLibre(vec, 50);
   if(esta==-1)
    {
        printf("No hay espacio para almacenar otro empleado\n");
    }
    else
    {
        printf("ingrese un legajo: ");
        scanf("%d", &legajo);
        esta = buscarEmpleado(vec, tam, legajo);
        if(esta != -1)
            {
                printf("El legajo ya existe, corresponde al empleado\n\n");
                printf("nombre\t\tsexo\tsueldo\t\tfecha de ingreso\tlegajo\n");
                mostrarEmpleado(vec[esta]);

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

            printf("\n1.- RRHH \n2.- sistemas \n3.- administracion \n4.- compras \n5.- deposito\nIngrese un sector: ");
            scanf("%d",&nuevoEmpleado.idSector);

            nuevoEmpleado. legajo = legajo;
            nuevoEmpleado.isEmpty = 0;

            vec[indice]=nuevoEmpleado;
            printf("\n carga exitosa!!\n");
        }
    }
}


void mostrarEmpleados(eEmpleado vec[],int tam)
{
    for(int i=0;i<tam;i++)
        {
            if(vec[i].isEmpty==0)
                {
                    mostrarEmpleado(vec[i]);
                }
        }
}
void mostrarEmpleado(eEmpleado vec)
{
    printf("%s\t\t%c\t%.2f\t%d/%d/%d\t\t%d  id:%d\n ",vec.nombre,vec.sexo,vec.sueldo,vec.fechaIngreso.dia,vec.fechaIngreso.mes,vec.fechaIngreso.anio,vec.legajo,vec.idSector);
}
void bajaEmpleado(eEmpleado vec[],int tam)
{
    int legajo;
    int esta;
    char respuesta;
    printf("Ingrese el legajo del empleado a dar de baja: ");
    scanf("%d", &legajo);

    esta = buscarEmpleado(vec, tam, legajo);

        if(esta==-1)
            {
               printf("\n El numero de legajo ingresado no corresponde con ningun empleado.");
            }
        else{
            printf("este es el empleado que desea dar de baja ? :\n");
            printf("nombre\t\tsexo\tsueldo\t\tfecha de ingreso\tlegajo\n");
            mostrarEmpleado(vec[esta]);
            printf("\n\nConfirme respuesta S o N : ");
            fflush(stdin);
            scanf("%c", &respuesta);
            respuesta=tolower(respuesta);

            if(respuesta!='s')
                {
                    printf("\n Baja cancelada \n !");

                }
                else
                {
                   vec[esta].isEmpty=1;
                   printf("\n Baja exitosa !\n") ;
                }
        }
}

void modificarEmpleado(eEmpleado vec[], int tam)
{
    int legajo;
    int esta;
    char respuesta;
    float sueldo;

    printf("Ingrese el legajo del empleado modificar: ");
    scanf("%d", &legajo);

    esta = buscarEmpleado(vec, tam, legajo);

    if(esta==-1)
        {
            printf("\nel legajo que ingreso no corresponde con ningun empleado \n");

        }
        else
        {
            printf("este es el empleado que desea modoficar ? :\n");
            printf("nombre\t\tsexo\tsueldo\t\tfecha de ingreso\tlegajo\n");
            mostrarEmpleado(vec[esta]);
            printf("\n\nConfirme respuesta S o N : ");
            fflush(stdin);
            scanf("%c", &respuesta);
            respuesta=tolower(respuesta);

            if(respuesta!='s')
                {
                    printf("\n Modificacion cancelada \n !");

                }
                else
                {
                    printf("Se modificara el sueldo\nIngrese nuevo sueldo: ");
                    scanf("%f",&sueldo);
                    vec[esta].sueldo=sueldo;
                    printf("\n Sueldo modificado!\n");

                }
        }

}

void hardCode(eSector vec[])
{
    vec[0].id=1;
    strcpy(vec[0].descripcion,"RRHH");
    vec[0].isEmpty=0;

    vec[1].id=2;
    strcpy(vec[1].descripcion,"sistema");
    vec[1].isEmpty=0;

    vec[2].id=3;
    strcpy(vec[2].descripcion,"administracion");
    vec[2].isEmpty=0;

    vec[3].id=4;
    strcpy(vec[3].descripcion,"compras");
    vec[3].isEmpty=0;

    vec[4].id=5;
   strcpy(vec[4].descripcion,"deposito");
    vec[4].isEmpty=0;
}

/*listar todos los empleados

recorrrer el array de empleado me paro en el elemento 0 con un for ,
buscp el idSector del empleado
adentro del for abro otro for y recorro los sectores y comparo el idSector del empleado comparando con el array dee sectores
 burbuja
 for(i=0;i<tam;i++)
 {
 for(j=0;j<5,j++)
    {
    if(empleado[i].idsector==sec[j])
        {
        print "%D" empleado[i]
        %s empleado nombre
        "%s"sec[j].descripcion;
        }
    }
 }
*/

/*listar los sectores por empleado
recorrer los sectores (5)
con la id del sector recorro el array de empleados y compara , si coincide los muestra


for(i=0;i<5;i++)
    for(j=0j<100;j++)
    if(sec[i].id==empleado[i].idSec)

    "%d",empleado[j].legajo
    "%s",empleado[j].nombre
