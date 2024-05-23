#include <stdio.h>
#include <math.h>

/* Par, impar o nulo.
NUM: variable de tipo entero. */

void main()
{
    int NUM;
    printf("ingrese el numero: ");
    scanf("%d", &NUM);
    if (NUM == 0)
        printf("\nNulo\n");
    else
        if(pow(-1, NUM) > 0)
            printf("\nPar\n");
        else
            printf("\nImpar\n");

    system("pause");
}
