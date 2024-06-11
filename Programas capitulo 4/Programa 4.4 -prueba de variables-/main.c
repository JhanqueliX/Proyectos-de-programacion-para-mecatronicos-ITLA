#include <stdio.h>

int f1(void);
int f2(void);
int f3(void);
int f4(void);

int I = 3;


void main(void)
{
    int I;

    for (I = 1; I <= 3; I++)
    {
        printf("\nEl resultado de la funcion f1 es: %d", f1());
        printf("\nEl resultado de la funcion f2 es: %d", f2());
        printf("\nEl resultado de la funcion f3 es: %d", f3());
        printf("\nEl resultado de la funcion f4 es: %d", f4());
    }
    printf("\n");
    system("pause");
}

int f1(void)
{
    I += I;
    return (I);
}

int f2(void)
{
    int I = 1;
    I++;
    return (I);
}

int f3 (void)
{
    static int I = 8;
    I += 2;
    return (I);
}

int f4(void)
{
    int K = 5;
    K = K + I;
    return (K);
}
