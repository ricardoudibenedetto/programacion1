#include <stdio.h>
#include <stdlib.h>
#define CANT 5
int main()
{
    int leg[CANT];
    float sueldo[CANT];
    int edad[CANT];
    int i;
    for(i=0;i<CANT;i++)
        {
            leg[i]=i+1;

            printf("ingrese un sueldo: ");
            scanf("%f", &sueldo[i]);

            printf("ingrese una edad: ");
            scanf("%d", &edad[i]);
        }
        printf("\n Legajo\tSueldo\tEdad");
        for(i=0;i<CANT;i++){
         printf("\n%d\t%.2f\t%d\n\n", leg[i], sueldo[i], edad[i]);
         }
    return 0;
}
