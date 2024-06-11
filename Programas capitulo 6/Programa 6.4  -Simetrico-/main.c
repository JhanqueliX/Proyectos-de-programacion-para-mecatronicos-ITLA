#include <stdio.h>

// Simetrico.


const int MAX = 100;
void lectura(int [][MAX], int);
int simetrico(int [][MAX], int);

void main(void)
{
    int MAT[MAX][MAX], N, RES;

    printf("\nAl recibir como dato un arreglo bidimensional cuadrado, determina\nsi el mismo es simetrico.");
    printf("\n-----------------------------\n");

    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &N);
    }
    while (N > MAX || N < 1);

    lectura (MAT, N);
    RES = simetrico(MAT, N);
    if (RES)
    {
        printf("\nEl arreglo bidimensional es simetrico");
    }
    else
    {
        printf("\nEl arreglo bidimensional no es simetrico");

    }

    printf("\n--------------------------------\n");
    system("pause");
}

void lectura(int A[][MAX], int T)
{
    int I, J;

    for (I=0; I<T; I++)
    {
        for (J=0; J<T; J++)
        {
            printf("Fila: %d\tColumna: %d\t", I+1, J+1);
            scanf("%d", &A[I][J]);
        }
    }
}

int simetrico (int A[][MAX], int T)
{
    int I = 0, J, F = 1;

    while ((I < T) && F)
    {
        J = 0;

        while ((J < I) && F)
        {
            if (A[I][J] == A[J][I])
                J++;
            else
                F = 0;
        }

        I++;
    }
    return (F);
}
