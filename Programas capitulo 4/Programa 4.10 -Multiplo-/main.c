#include <stdio.h>

//Multiplo

int multiplo(int, int);

void main(void)
{
    int NU1, NU2, RES;

    printf("\n Al recibir dos numeros enteros, determina si el segundo es multiplo del primero");
    printf("\n----------------------------------------");
    printf("\nIngresa los dos numeros: ");
    scanf("%d %d", &NU1, &NU2);

    RES = multiplo(NU1, NU2);

    if (RES)
    {
        printf("\nEl segundo numero es multiplo del primero");
    }
    else
    {
        printf("\nEl segundo numero no es multiplo del primero");
    }

    printf("\n-------------------------\n");
    system("pause");
}

int multiplo (int N1, int N2)
{
    int RES;

    if ((N2 % N1) == 0)
    {
        RES = 1;
    }
    else
    {
        RES = 0;
    }

    return(RES);
}
