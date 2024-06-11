#include <stdio.h>

// Cuenta-numeros.

void main(void)
{
    int I, NUM, CUE = 0;
    int ARRE[100];

    printf("AL recibir como datos un arreglo unidimensional de tipo\nentero y un numero entero, determina cuantas veces se encuentra el\nnumero entero");
    printf("\n-------------------------------\n");

    for (I=0; I<100; I++)
    {
        printf("Ingrese el elemento %d del arreglo: ", I+1);
        scanf("%d", &ARRE[I]);
    }

    printf("\n-------------------------------\n");
    printf("\n\nINgrese el numero que se va a buscar en el arreglo: ");
    scanf("%d", &NUM);


    for (I=0; I<100; I++)
    {
        if (ARRE[I] == NUM)
        {
           CUE++;
        }
    }

    printf("\n-------------------------------");
    printf("\n\nEl %d se encuentra %d veces en el arreglo", NUM, CUE);
    printf("\n-------------------------------\n");
    system("pause");
}
