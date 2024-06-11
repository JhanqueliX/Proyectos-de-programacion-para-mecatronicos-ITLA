#include <stdio.h>
#include <math.h>

//pares e impares.

void parimp(int, int *, int *);

void main(void)
{
    int I, N, NUM, PAR = 0, IMP = 0;

    printf("\nAl recibir como datos N numeros enteros, calcula cuantos de ellos son pares y cuantos impares, con la ayuda de una funcion\n");
    printf("-------------------------------");
    printf("\nIngresa el numero de datos: ");
    scanf("%d", &N);

    for (I = 1; I <= N; I++)
    {
        printf("Ingresa el numero %d: ", I);
        scanf("%d", &NUM);
        parimp(NUM, &PAR, &IMP);
    }

    printf("\n-------------------------------");
    printf("\nNumero de pares: %d", PAR);
    printf("\nNumero de impares: %d", IMP);
    printf("\n-------------------------------\n");
    system("pause");

}

void parimp(int NUM, int *P, int *I)
{
    int RES;
    RES = pow(-1 , NUM);
    if (RES > 0)
    {
        *P += 1;
    }
    else
    {
        if(RES < 0)
        {
            *I += 1;
        }
    }

}
