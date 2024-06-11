#include <stdio.h>

//funcion y parametros

int F1(int, int *);

int A = 3;
int B = 7;
int C = 4;
int D = 2;

void main(void)
{
    A = F1 (C, &D);

    printf("\n%d\t%d\t%d\t%d", A, B, C, D);

    C = 3;
    C = F1(A, &C);

    printf("\n%d\t%d\t%d\t%d", A, B, C, D);

    printf("\n-------------------------\n");
    system("pause");

}

int F1 (int X, int *Y)
{
    int A;

    A = X * *Y;
    C++;
    B += *Y;

    printf("\n%d\t%d\t%d\t%d", A, B, C, D);
    *Y--;
    return (C);
}
