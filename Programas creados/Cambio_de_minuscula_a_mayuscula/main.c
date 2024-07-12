#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char cad0[15];
    char p;
    int I = 0;

    printf("\ningrese una estringa: ");

    while ((p = getchar()) != '\n')
    {
        cad0[I++] = p;
        cad0[I + 1] = '\0';
    }


    for (I = 0; cad0[I] != '\0' ; I++)
    {
        if ((int)cad0[I] < 96 && cad0[I] != 32)
        {
            cad0[I] = (int)cad0[I] + 32;
        }
        else{
        if ((int)cad0[I] > 96 && cad0[I] != 32)
        {
            cad0[I] = (int)cad0[I] - 32;
        }
        }
    }
    printf("\n-------------------------------");
    printf("\n%s\n", cad0);
    printf("-------------------------------\n");
    system("pause");
}

