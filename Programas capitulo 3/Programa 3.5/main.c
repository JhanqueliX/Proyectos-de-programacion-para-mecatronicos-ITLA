#include <stdio.h>

/* Suma pagos.
El programa obtiene la suma de los pagos realizados el ultimo mes.

PAG y SPA: variabes de tipo real*/

void main()
{

    float PAG, SPA = 0; // declaramos las variables en 0 como float

    printf("Ingrese el primer pago:\t"); // mostramos la indicacion de que el usuario debe ingresar//
    scanf("%f", &PAG); // leemos que el usuario escribio y lo almacenamos en PAG//

    /* Para utilizar la estructura do-while al menos se necesita un pago */
    do
    {
        SPA = SPA + PAG; //sumamos el pago ingresado al total//

        printf("Ingrese siguiente pago (0 para terminar la operacion):\t"); // pedimos al usuario que ingrese otro pago//
        scanf("%f", &PAG);
    }
    while (PAG); // luego de la ejecucion del codigo anterior, entonces evaluamos la condicion del bucle//

    printf("\nEl total de pagos del mes es: %.2f\n", SPA); //imprimimos el total final//
    system("pause");
}
