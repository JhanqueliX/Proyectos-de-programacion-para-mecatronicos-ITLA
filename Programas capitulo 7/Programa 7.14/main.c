#include <stdio.h>
#include <stdlib.h>


/* Calcula longitud en forma recursiva.
El programa calcula de manera recursiva la longitud de la cadena sin utilizar ➥la función strlen. */

int cuenta(char *);

void main(void)
{
    int i;
    char cad[50];
    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);
    i = cuenta(cad);
    printf("\nLongitud de la cadena: %d", i);

    printf("\n-----------------------------\n");
    system("pause");
}

int cuenta(char *cadena)
{
    if (cadena[0] == '\0')
        return 0;
    else
        return (1 + cuenta(&cadena[1]));
}
