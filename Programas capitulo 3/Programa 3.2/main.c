#include <stdio.h>

/*Suma positivos
El programa, al recibir como datos N numeros enteros, obtiene la suma de enteros positivos.

I,N, DEC, SUM: variables de tipo entero. */

int main()
{
    int I, N, NUM, SUM;//declaramos las variables como enteros//
    SUM=0; //asignamos el valor 0 a la variable SUM//


    printf("Ingrese el numero de datos: "); // presentaamos que queremos que se ingrese//
    scanf("%d", &N); // leemos lo que el usurio inngreso y lo asignamos a la variable N//

    for(I=1; I<=N; I++) // iniciamos un ciclo for a que se repetira tantas veces como el usuaio haya indicado//
    {
        printf("Ingrese el dato numero %d:\t", I); //indica que ponga el numero//
        scanf("%d", &NUM); // lee el numero ingresado por el usuario//
        if(NUM > 0)// Si el numero es positivo//
        {
            SUM = SUM + NUM; //lo suma al acumulado de la suma//
        }

    }
    printf("\nLa suma de los numeros positivos es: %d\n", SUM); // imprime el resultado final//
    system("pause");
}
