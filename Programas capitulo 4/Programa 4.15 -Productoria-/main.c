#include <stdio.h>

//productoria

int Productoria(int);

void main(void)
{
    int NUM;
    printf("\nEl programa calcula la productoria de los N primeros numeros naturales\n");
    printf("\n-----------------------------");

    do
    {
        printf("\nIngresa el numero del cual quieres calcuar la Productoria: ");
        scanf("%d", &NUM);
    }
    while (NUM > 100 || NUM <1);

    printf("\n-----------------------------");
    printf("\nLa productoria de %d es: %d", NUM, Productoria(NUM));
    printf("\n-----------------------------\n");
    system("pause");
}

int Productoria(int N)
{
    int I, PRO = 1;
    for (I = 1; I <= N; I++)
    {
        PRO *= I;
    }
    return (PRO);
}
