#include <stdio.h>

//Mayor divisor

int mad(int);

void main(void)
{
    int num, res;

    printf("\nAl recibir como dato un numero entero positivo, se calcula su mayor divisor");
    printf("\n----------------\n");
    printf("\nIngresa el numero: ");
    scanf("%d", &num);

    res = mad (num);

    printf("\nEL mayor divisor de %d es: %d", num, res);
    printf("\n-----------------------------\n");
    system("pause");
}

int mad (int N1)
{
    int I = (N1 / 2);

    while(N1 % I)
    {
        I--;
    }
    return I;
}
