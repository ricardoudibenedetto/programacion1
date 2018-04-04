#include <stdio.h>
#include <stdlib.h>
#define CANT 5

int main()
{
    int vec[CANT], i;

    for(i=0;i<CANT;i++)
        {
            printf("\ningrese: ");
            scanf("%d", &vec[i]);


        }

        for(i=0;i<CANT;i++)
            {
                printf("\n\n%d", vec[i]);
            }


    return 0;
}
