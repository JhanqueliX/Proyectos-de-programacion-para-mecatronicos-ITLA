#include <stdio.h>

/* Factorial
El programa calcula el factorial de un numero entero

FAC, I, NUM: variables de tipo entero. */

void main()
{
    long FAC; //declaramos la variable como un entero largo//
    int NUM, I; //declaramos la variables como enteros//

    printf("Ingrese numero a operar:\t");
    scanf("%d", &NUM);// pedimos que ingrese el numero que quiere operar y lo almacenamos en NUM//

    if (NUM >= 0)// evaluamos una condicion para decidir el siguiente paso//
    {
        FAC = 1; // damos el valor 1 a la variable FAC//

        for(I = 1; I <= NUM; I++) //iniciamos un ciclo que continua mientras que I sea menor o igual que el numero ingresado//
        {
            FAC = FAC * I;// multiplicamos el numero de ciclos por el resultado del ciclo anterior//

            printf("\nCiclo: %d\t Factorial instantaneo: %ld\n", I, FAC);
        }
        printf("\n------------------------------\n");
        printf("\n El Resultado factorial es: %ld\n", FAC); //imprimimos el resultado del factorial//
        printf("\n------------------------------\n");
    }
    else
    {
        printf("\nError en el dato\n"); // si no se cumple el if dara este error//
    }


    system("pause");
}
