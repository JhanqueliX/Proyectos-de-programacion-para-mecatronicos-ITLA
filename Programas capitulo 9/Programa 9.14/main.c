#include <stdio.h>
#include <ctype.h>

/* Letras min�sculas y may�sculas.
El programa, al recibir como dato un archivo formado por cadenas de caracteres, determina el n�mero de letras min�sculas y may�sculas que hay en el archivo. */

void minymay(FILE *);

void main(void)
{
    char p;
    FILE *ar;
    if ((ar = fopen("arc5.txt", "r")) != NULL)
    {
        minymay(ar);

        fclose(ar);
    }
    else
        printf("No se pudo abrir el archivo");
}
void minymay(FILE *arc)

{

    int min = 0, may = 0;
    char p;
    while (!feof(arc))
    {
        p = fgetc(arc);
        if (islower(p))
            min++;
        else if (isupper(p))
            may++;
    }
    printf("\nN�mero de min�sculas: %d", min);
    printf("\nN�mero de may�sculas: %d", may);
}
