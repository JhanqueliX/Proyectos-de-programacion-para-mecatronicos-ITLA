#include <stdio.h>
#include <math.h>

/* Serie de ULAM.
EL programa, al recibir como dato un enetero positivo, obtiene y escribe la serie de ULAM

NUM: variable entera. */

void main()
{
    int NUM; // declaramos la variable NUM como entero//

    printf("Ingrese numero para el que calculara la serie: ");
    scanf("%d", &NUM); // pedimos que ingrese un numero, este es leido y almacenado en NUM//

    if (NUM > 0) //nos aseguramos que el numero sea positivo//
    {
        printf("\n----------------"); // le ponemos bonitura :)
        printf("\nLa serie de ULAM para %d", NUM);
        printf("\n----------------\n");

        while (NUM != 1) // mientras el numero sea diferente de 1 el ciclo continua//
        {
            if (pow(-1,NUM) > 0) // evaluamos que el numero sea par, si lo es se ejecuta la siguiente linea, de lo contrario el else//
            {
                NUM = NUM / 2; // dividimos el numero par entre dos
            }
            else
            {
                NUM = NUM * 3 + 1; // el impar lo multiplicamos por 3 y sumamos 1
            }

            printf("\t %d \n", NUM); // imprimimos el resultado en cada ciclo para construir la serie//
        }
    }
    else
    {
        printf("el numero debe ser positivo"); // el error//
    }
    system("pause");
}
