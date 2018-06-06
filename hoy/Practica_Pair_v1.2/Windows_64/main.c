#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"

/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/


int main()
{
    int option=0;
    char respuesta='n';

    do
        {
             system("cls");
        printf(" Menu:\n1. Parse del archivo data.csv\n2. Listar Empleados\n3. Ordenar por nombre\n4. Agregar un elemento\n5. Elimina un elemento\n6. Listar Empleados (Desde/Hasta)\n");
        scanf("%d", &option);
        switch(option)
        {
            case 1:
                printf("opcion 1 \n");
                system("pause");
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                option=-1;
                break;
        }
        }while(option!=-1);


    return 0;
}
