#include <stdio.h>
#include <math.h>

/* Pares e impares
El programa, al recibir como datos N numeros enteros, obtiene la suma de los numeros pares y calcula el promedio de los impares.

Pro: variable de tipo real

I, N, NUM, SPA, SIM, CIM: variables de tipo entero. */

void main()
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0; //variables declaradas como enteros, SPA, SIM y CIM set to 0//
    float PRO;//variable declarada float

    printf("Ingrese el numero de datos que se van a procesar: \t");
    scanf("%d", &N); // pedimos al usuario que ingrese la cantidad de numeros que se procesaran//

    if(N > 0) //evaluamos una condicion para tomar una decision de ejecucion//
    {
        for(I=1; I <= N; I++) // iniciamos un ciclo for, I como control de ciclo, y se repetira la cantidad de veces que le hayamos indicado//
        {
            printf("\nIngrese el numero %d: ", I);
            scanf("%d", &NUM); // pide al usuario que ingrese un numero y lo almacena en NUM//

            if(NUM)// si el numero es diferente de 0 continua al siguiente if//
            {
                if(pow(-1, NUM) > 0) // este if evalua si el numero es par//
                {
                    SPA = SPA + NUM; // a los numero pares los suma al total//
                }
                else
                {
                    SIM = SIM + NUM;
                    CIM++; // suma los impares a un total y cuenta cuantas veces se ejecuta y asi saber cuanto impares hay//
                }
            }

        }
        PRO = SIM/CIM; //calcula el promedio de los impares//

        printf("\n La suma de los numeros pares es: %d\n", SPA);
        printf("\n El promedio de numeros impares es: %5.2f\n", PRO); //imprime los resultados//
    }
    else
    {
        printf("\n El valor de N es incorrecto\n"); // en caso de que sea ingresado numero negarivo como cantidad de numeros a ingresar//
    }
    system("pause");
}
