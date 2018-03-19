#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int numero;
    int numero2;
    numero=5;
    numero2=10;
    int sum=numero+numero2;
    printf("numero uno vale : %d \n  numero 2 vale : %d \n  la suma vale %d", numero, numero2, sum);*/

   /* int numero;
    char letra;


    printf("ingrese un numero: ");

    scanf("%d %c" , &numero, &letra);

    //printf("ingrese una letra ");

   // scanf("%c", &letra);

    printf("el numero ingresado es : %d \n y su letra ingresada : %c", numero, letra);
    */
    int base, altura, perimetro, superficie;

    printf("ingrese una base ");
    scanf("%d", &base);
    printf("ingrese una altura ");
    fflush(stdin);
    scanf("%d", &altura);

    perimetro=base*3;
    superficie=base*altura;
    printf("la superficie es : %d y el perimetro es :%d ", superficie, perimetro);



    return 0;
}
