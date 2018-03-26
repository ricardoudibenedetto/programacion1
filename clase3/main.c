#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    int nota;
    int acumuladorNotas=0;
    int notaMin;
    int contVarones18=0;
    int notaMasJoven;
    int contMujer=0;
    int edadMasJoven;
    int edadPrimerMujer;
    int notaPrimerMujer;


    char sexo, sexoNotaMin, sexoMasJoven;
    float promedio;

    for(int i=0; i<2; i++)
    {
        printf("ingrese una nota : ");
        scanf("%d", &nota);
        while(nota<0||nota>10)
            {
                printf("Error, ingrese una nota mayor a 0 y menor a 10 : ");
                scanf("%d", &nota);
            }

        printf("ingrese edad ");
        scanf("%d", &edad);
        while(edad<0)
            {
                printf("Error ,ingrese edad mayor a 0 : ");
                scanf("%d", &edad);
            }

        printf("ingrese un sexo : ");
        fflush(stdin);
        scanf("%c", &sexo);
        sexo=tolower(sexo);

        while(sexo!='f'&& sexo!='m')
            {
                printf("Error, ingrese un sexo f o m  : ");
                fflush(stdin);
                scanf("%c", &sexo);
                sexo=tolower(sexo);
            }

        if(i==0)
                {
                    notaMin=nota;
                    sexoNotaMin=sexo;



                }
        if(nota<notaMin)
                {
                    notaMin=nota;
                    sexoNotaMin=sexo;
                }
        if(sexo=='m'&& edad>17&& nota>5)
            {
                contVarones18++;
            }
        if(i==0)
            {
                    notaMasJoven=nota;
                    sexoMasJoven=sexo;
                    edadMasJoven=edad;
            }

        if(edad<edadMasJoven)
            {
                    notaMasJoven=nota;
                    sexoMasJoven=sexo;
            }
        if(sexo=='f'&&contMujer==0)
            {
                notaPrimerMujer=nota;
                edadPrimerMujer=edad;
                contMujer++;

            }


    acumuladorNotas+=nota;

    }
    promedio=acumuladorNotas/2;
    printf("el promedio es %f", promedio);
    printf("\n la cantidad de varones mayores y nota superior a 6 es : %d ", contVarones18);
    printf("\n la edad mas joven es %d el sexo es %c y su nota es %d ", edadMasJoven, sexoMasJoven, notaMasJoven);
    printf("\n La nota de la primer mujer es %d y su edad es %d ", notaPrimerMujer, edadPrimerMujer);
    return 0;
}
