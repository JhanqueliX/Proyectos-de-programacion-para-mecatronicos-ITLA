#include <stdio.h>
#include <math.h>

/* Igualdad de expreciones.
el programa, al recibir como datos T, P y N, comprueba la igualdad de una expresion determinada.
T, P y N : variables de tipo entero. */

void main ()
{
    int T, P, N;
    printf("Ingrese los valores de T, P y N respectivamente: ");
    scanf("%d %d %d", &T, &P, &N);

    if(P != 0)
    {
        if (pow(T / P, N) == (pow(T,N) / pow(P, N)))
            printf("\nSe comprueba la igualdad\n");
        else
            printf("\nNo se comprueba la igualdad\n");
    }
    else
        printf("\nP tiene que ser diferente de cero\n");

    system("pause");
}
