#include <stdio.h>
#include <math.h>

/* Calculo de Pi
el programa obtiene el valor de P aplicando una serie determinada.

I, B, C: variantes de tipo entero.
RES: variable de tipo real de doble precision. */

void main()
{
    int I = 1, B = 0, C; // declaramos las variables correspondientes
    double RES;

    RES = 4.0 / I; //creamos las fracciones de la sucesion//
    C = 1; // iniciamos el contador de terminos requeridos en 1//

    while ((fabs(3.1415 - RES)) > 0.0005) //evaluamos la condicion dell ciclo, mientras que el valor absoluto de la resta de pi menos el resultado sea mayor que 0.0005 el ciclo continua//
    {
        I += 2 ; //aumentamos el denominador de 2 en 2;
        if (B) // si B es diferente de 0 continua la siguiente linea de codigo, si no pasa al else//
        {
            RES+=(double) (4.0 / I); // se añade el siguiente numero de la sucesion al actual resultado previo//
            B = 0; // detiene el if
        }
        else
        {
            RES -= (double) (4.0 / I); // se sustrae el siguiente numero de la sucesion al actual resultado previo//
            B = 1; //hace verdadero el if
        }
        C++; //el contador del numero de terminos aumenta 1 con cada ciclo//
    }
    printf("\n---------------------------------\n"); //bonitura
    printf("\Numero de terminos: %d\n", C); // se imprime el numero de terminos//
    printf("---------------------------------\n");

    system("pause");
}
