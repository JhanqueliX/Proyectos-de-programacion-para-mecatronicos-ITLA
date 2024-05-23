#include <stdio.h>

/* ventas descendentes.
El programa, al recibir como datos tres valores que respresentan las ventas de los vendedores de una tienda de discos, scribe las ventas en orden decendente.
P, S y R: variables de tipo real. */

void main()
{
    float P, S, R;
    printf("\nIngrese las ventas de los tres vendedores: ");
    scanf("%f %f %f", &P, &S, &R);
    if(P > R)
        if(P > R)
            if(S > R)
                printf("\n\n El orden es P, S y R: %8.2f %8.2f %8.2f\n", P, S, R);
            else
                printf("\n\n El orden es P, R, S: %8.2f %8.2f %8.2f\n", P, R, S);
        else
           printf("\n\n El orden es R, P, S: %8.2f %8.2f %8.2f\n", R, P, S);
    else
        if(S > R)
            if(P > R)
                printf("\n\n El orden es S, P, R: %8.2f %8.2f %8.2f\n", S, P, R);
            else
                printf("\n\n El orden es S, R, P: %8.2f %8.2f %8.2f\n", S, R, P);
        else
            printf("\n\n El orden es R, S, P: %8.2f %8.2f %8.2f\n", R, S, P);
    system("pause");
}
