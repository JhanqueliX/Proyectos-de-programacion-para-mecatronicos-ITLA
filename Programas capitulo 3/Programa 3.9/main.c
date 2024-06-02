#include <stdio.h>

/* Serie.
El programa imprime los terminos y obtiene la suma de una determinada serie.

I, A, SSE y CAM : variable de tipo entero. */

void main()
{
    int I = 2, CAM = 1, A = 0;
    long SSE = 0;

    printf("Ingrese el numero que quiere obtener de la serie: \t");
    scanf("%d", &A);

    while (I <= A)
    {
        SSE += I;
        printf("\t %d", I);

        if(CAM)
        {
            I += 5;
            CAM --;
        }
        else
        {
            I += 3;
            CAM++;
        }
    }

    printf("\n----------------------------\n");
    printf("\nLa suma de la serie es : %ld\n", SSE);
    printf("\n----------------------------\n");

    system("pause");

}
