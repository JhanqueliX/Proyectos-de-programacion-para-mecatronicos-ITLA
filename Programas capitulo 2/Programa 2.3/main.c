#include <stdio.h>

/* promedio curso.
el programa, al recibir como dato el promedio de un alumno en un curso universitario escribe aprobado si su promedio es mayor o igual a 6 o reprobado en caso contrario.
PRO es una variable ed tipo real. */

void main()
{
    float PRO;
    printf("ingrese el promedio del alumno: ");
    scanf("%f", &PRO);
    if (PRO >= 6.0)
    {
        printf("\nAprobado");
    }
    else
    {
        printf("\nReprobado");
    }

    printf("\n-------------------------\n");

    system("pause");
}
