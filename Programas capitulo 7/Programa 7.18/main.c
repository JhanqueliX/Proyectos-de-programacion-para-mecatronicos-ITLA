#include <stdio.h>
#include <stdlib.h>

/* Cadena resuelta en form recursiva. */

void inverso(char *);

void main(void)
{
char fra[50];
printf("\nIngrese la linea de texto: ");
gets(fra);
printf("\nEscribe la linea de texto en forma inversa: ");
inverso(fra);

printf("\n-----------------------------\n");
system("pause");
}

void inverso(char *cadena)
{
    if (cadena[0] != '\0')
    {
        inverso(&cadena[1]);
        putchar(cadena[0]);
    }
}
