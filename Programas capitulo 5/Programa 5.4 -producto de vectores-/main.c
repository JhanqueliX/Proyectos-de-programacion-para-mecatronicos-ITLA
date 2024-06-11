#include <stdio.h>

//Producto de vectores

const int MAX = 10;
void Lectura (int VEC[], int T);
void Imprime (int VEC[], int T);
void Producto (int *X, int *Y, int *Z, int T);

void main (void)
{
    int VE1[MAX], VE2[MAX], VE3[MAX];

    printf("\nCalcula el producto de dos vectores y almacena el resultado\nen otro arreglo unidimensional");
    printf("\n---------------------------------\n");

    Lectura(VE1, MAX);

    Lectura(VE2, MAX);
    Producto(VE1, VE2, VE3, MAX);

    printf("\n---------------------------------");
    printf("\nProducto de los VEctores");
    Imprime(VE3, MAX);
    printf("\n---------------------------------\n");
    system("pause");

}

void Lectura (int VEC[], int T)
{
    int I;

    printf("\n");

    for (I=0; I<T; I++)
    {
        printf("INgrese el elemento %d: ", I+1);
        scanf("%d", &VEC[I]);
    }
}

void Imprime (int VEC[], int T)
{
    int I;

    for ( I=0; I<T; I++)
    {
        printf("\nVEC[%d]: %d", I+1, VEC[I]);
    }

}

void Producto (int *X, int *Y, int *Z, int T)
{
    int I;

    for( I=0; I<T; I++)
    {
        Z[I] = X[I] * Y[I];
    }
}
