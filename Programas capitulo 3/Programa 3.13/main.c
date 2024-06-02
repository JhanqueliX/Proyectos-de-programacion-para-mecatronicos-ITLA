#include <stdio.h>

/* Fibonacci.
El programa calcula y escribe los primero N numero de fibonacci.

I, N, PRI, SEG, SIG: variables de tipo entero */

void main()
{
    int I, PRI = 0, SEG = 1, SIG; //declaamos las variables//
    long N;


    printf("\nIngrese la cantidad de numero de fibonacci: ");
    scanf("%ld", &N); // pedimos la cantidad de numeros de fibonacci y la almacenamos en N//

    printf("\t %d \t %d", PRI, SEG); // imprimimos los dos primeros numeros//

    for (I = 3; I <= N; I++) // el control del ciclo for empieza en 3 porque ya hemos puesto dos numeros de la serie, este se detendra una vez el contador alcance el numero deseado//
    {
        SIG = PRI + SEG; // sumamos el primer y segundo numero para obtener el siguiente
        PRI = SEG; // tomamos el segundo como primero
        SEG = SIG; // y el siguiente como segundo

        printf ("\t %d", SIG); // imprimimos el resultado y repetimos el ciclo//
    }

    printf("\n");
    system("pause");
}
