#include <stdio.h>

/*promedio curso,
el programa al recibir como dato el promedio de un alumno en unn curso universitario, escribe si su promedio es mayor o igual a 6.

Pro: variable de tipo real. */

void main(void)
{
    float PRO;
    printf("ingrese el promedio del alumno: ");
    scanf("%f", &PRO);
    if (PRO >= 6)
    {
        printf("\nAprobado");
    }

}
