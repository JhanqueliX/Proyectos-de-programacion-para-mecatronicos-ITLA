#include <stdio.h>

//Diagonal principal

const int TAM =10;

void Lectura(int [][TAM], int);
void Imprime(int [][TAM], int);


void main(void)
{
    printf("Al recibir como dato una matriz de tipi entero,\nscribe a diagonal principal.");
    printf("\n---------------------------------\n");
    int MAT [TAM][TAM];
    Lectura (MAT, TAM);
    Imprime(MAT, TAM);
    printf("\n---------------------------------\n");
    system("pause");
}

void Lectura(int A[][TAM], int F)
{
     int I, J;

     for(I = 0; I < F; I++)

     {
         for(J=0; J < F; J++)
         {
             printf("INgrese el  elemento %d %d: ", I+1, J+1);
             scanf("%d", &A[I][J]);
         }
     }
}

void Imprime(int A[][TAM], int F)
{
    int I, J;

    for(I = 0; I < F; I++);
    {
        for(J = 0; J < TAM; J++)
        {
            printf("\nDiagonal %d %d: %d", I, J, A[I][J]);
        }
    }
}
