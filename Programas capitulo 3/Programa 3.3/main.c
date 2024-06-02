#include <stdio.h>

/* Suma pagos
el programa al recibir como datos un conjunto de pagos realizados en el ultimo mes, obtiene la suma de los mismo.
PAG y SPA: variables de tipo real.*/

void main ()
{
    float PAG, SPA; // Declara las variables como enteros//
    SPA = 0; // asigna el valor sero a la variable SPA//
    printf("ingrese el primer pago:\t"); //ingica que deve ingresar//
    scanf("%f", &PAG); //lee lo que el usuario ingresa y lo asigna a la variable PAG//

    while(PAG) //la condicion del loop es verdadera mientras el pago es diferente de cero//
    {
        SPA = SPA + PAG; // suma cada pago ingresado al total//
        printf("Ingrese el siguiente pago (si no hay mas pago ingrese 0):\t"); //indica que el usurio debe ingresar//
        scanf("%f", &PAG); // la proposicion que modifica la condicion del loop es una lectura dentro del loop//
    }

    printf("\nEl total de los pagos del mes: %.2f\n", SPA);//imprime el total//
    system("pause");
}
