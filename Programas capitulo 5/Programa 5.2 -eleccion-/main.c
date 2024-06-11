#include <stdio.h>

//eleccion.

void main(void)
{
    int ele[5] = {0};
    int I, VOT;

    printf("\nAlmacena los votos emitidos en una eleccion en la que hubo cinco\ncandidatos e imprime el total de votos que obtuvo cada uno de eellos");
    printf("\n-------------------------------------------\n");
    printf("INgresa el primer voto (0 - Para terminar): ");
    scanf("%d", &VOT);

    while (VOT)
    {
        if ((VOT > 0) && (VOT < 6))
            ele[VOT-1]++;
        else
        {
            printf("\nEl voto ingresado es incorrecto.\n");
        }

        printf("Ingresa el siguiente voto (0 - para terminar): ");
        scanf("%d", &VOT);
    }
    printf("\n-------------------------------------------");
    printf("\n\nResultados de la Eleccion\n");
    printf("-------------------------------------------\n");

    for (I = 0; I <= 4; I++)
    {
        printf("\nCandidato %d: %d\n", I+1, ele[I]);
    }
    printf("-------------------------------------------\n");
    system("pause");
}
