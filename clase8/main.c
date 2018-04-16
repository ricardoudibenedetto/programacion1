#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>
//#include TAM 3
//void funcion2(char matr[][20], int filas);
void funcionMtr(char [][20],int tam);
int main()
{
    char nombres[5][20]={"jUan peDro","luIs","aNa ","pEPe","pEdRo"};
    funcionMtr(nombres,5);



    return 0;
}
void funcionMtr(char vec[][20],int tam)
    {

     for(int i=0;i<tam;i++)
            {
                strlwr(vec[i]);
                for(int k=0;k<20;k++)
                    {
                    if(vec[i][k]==' ')
                        {
                            vec[i][k+1]=toupper(vec[i][k+1]);
                        }
                    }

                vec[i][0]=toupper(vec[i][0]);
                printf("%s \n",vec[i]);

            }
    }


