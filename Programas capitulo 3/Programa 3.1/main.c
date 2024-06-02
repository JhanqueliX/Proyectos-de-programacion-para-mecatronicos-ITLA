#include <stdio.h>

/* Nomina
El programa, al recibir los salarios de 15 profesores, obtiene, el total de la nomina de la universidad.

I: variable de tipo eentero.
SAL y NOM: variables de tipo real.*/

int main() //iniciamos la funcion principal
{
    int I; //declaramos la variable I como entero//
    float SAL, NOM; //declaramos las variables SAL y NOM como flotantes//
    NOM = 0; //asignamos el valor 0 a la variable NOM//

    for (I=1; I<=15; I++) //empezamos un ciclo for, que se detendra cuando I sea 15 y este empzara a contar en 1//
    {
        printf("\n Ingrese el salario del profesor %d: \t", I); //mostramos en pantalla lo que queremos que se ingrese//
        scanf("%f", &SAL); // leemos lo que el usuario ingreso//

        NOM= NOM + SAL; //sumamos el salaio que se ingresa a la nomina acumulada//
    }

    printf("\nEL total de la nomina es: %.2f\n", NOM); // imprimimos la nomina total//
    system("pause"); // press any key to continue...//

    return 0; //retornamos 0//
}
