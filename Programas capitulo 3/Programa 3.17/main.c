#include <stdio.h>

/* Numeros perfectos.
El programa, al recibir como dato un numero entero positivo como limite, obtiene los numeros perfectos que hay entre 1 y ese numero, y ademas imprime cuantos numeros perfectos hay en el intervalo.

I, J, NUM, SUM, C: variables de tipo entero. */

void main()
{
    int I, J, NUM, SUM, C = 0; //declaramos las variables como enteros

    printf("\nIngrese el numero limite: ");
    scanf("%d", &NUM); //pedimos que ingree el numero limite hasta el que evaluaremos y lo almacenamos en num

    if(NUM > 0) //evaluamos que el limite sea positivo
    {
        for (I = 1; I <= NUM; I++) // el ciclo se repetira el numero de veces que hayamos indicado en el limite
        {
            SUM = 0;

            for (J = 1; J <= (I/2); J++) // se evalua cada numero hasta dar con un perfecto//
            {
                if ((I % J) == 0) // si el reciduo es igual a 0 se suma el numero a la sumatoria total
                {
                    SUM += J;
                }
            }
            if (SUM == I)// si el numero es igual a la sumatoria se añade 1 al contador de numeros perfectos//
            {
                printf("\n%d es un numero perfecto", I);
                C++;
            }

        }
        printf("\n-------------------------\n");
        printf("Entre 1 y %d hay %d numeros perfectos\n", NUM, C); // se imprime el numero de perfectos que hay
        printf("-------------------------\n");
    }
    else
    {
        printf("Error en el limite, debe ser mayor que 0\n");
    }

    system("pause");
}
