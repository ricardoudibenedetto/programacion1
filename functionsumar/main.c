#include <stdio.h>
#include <stdlib.h>
#include "richard.h"

int main()
{
    int a=4;
    int b=2;
    int c, d;
    int rta;
    printf("ingrese dos numeros : \n ");
    scanf(" %d", &c);
    scanf(" %d", &d);

    rta=sumar(sumar(a, b),sumar(c,d));

    printf("\n\n la suma es %d ",rta);
    return 0;
}


