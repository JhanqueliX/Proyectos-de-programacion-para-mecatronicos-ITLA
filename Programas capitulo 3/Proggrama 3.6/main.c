#include <stdio.h>

/* Nomina de profesores
El programa, al recibir como datos los salarios de los profesores de una universidad, obtiene la nomina y el promedio de los salarios.

I: variable de tipo entero.
SAL NOM y PRO: variables de tipo real */

void main ()
{
    int I = 0; // declaramos la variable como entero y su valor en 0//
    float SAL, PRO, NOM = 0; // declaramos las variables com flotantes y con valor 0//

    printf ("Ingrese el salario del profesor:\t");
    scanf ("%f", &SAL); // pedimos al usuario que ingrese el saladel profesor y guardamos ese valor en la variable SAL//

    do // marcamos donde empieza el ciclo//
    {
        NOM = NOM + SAL; // sumamos el salario a un total//
        I = I + 1; // la I actua como un contador, que cuenta la cantidad de ciclo que se ejecutaron y por tanto la cantidad de salarios ingresados//

        printf("Ingrese el salario del profesor -0 oara terminar- :\t");
        scanf("%f", &SAL); //pedimos al usuario que ingrese mas salarios o que termine el programa//
    }
    while(SAL); // evaluamos la condicion del ciclo, si SAL es 0 se detiene//

    PRO = NOM / I; // dividimos la suma total de los salarios entre la cantidad de salarios que ingresamos para obtener el promeio cuyo valor estara almacenado en PRO//

    printf("\nNomina: %.2f \t Promedio de salarios: %.2f\n", NOM, PRO); // immprimimos la nomina total y el promedio obtenidos//
    system("pause");

}
