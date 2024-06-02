#include <stdio.h>

/* Lanzamiento de martillo
El programa, al recibir como dato N lanzamiento de martillo, calcula el promedio de los lanzamientos de la atleta cubana.

I, N: son variables de tipo entero
LAN, SLA: variables de tipo real*/

void main()
{
    int I, N; //declaramos las variables como enteros//
    float LAN, SLA = 0; //declaramos las variables como flotantes y asignamos valor 0//
    do // macamos inicio del ciclo do-while//
    {
    printf("Ingrese el numero de lanzamientos:\t");
    scanf("%d", &N);// pedimos al usuario que nos de el numero de lanzamientos y esto lo almacenamos en N//
    }
    while (N < 1 || N > 11); // se utiliza la estructura de do-while para verificar que el valor de N sea correcto//

    for (I = 1; I <= N; I++) // iniciamos ciclo for, donde se repetirar la misma cantidad de veces que tiros haya realizado la atleta//
    {
        printf("\nIngrese el lanzamiento %d: ", I);
        scanf("%f", &LAN); //pedimos al usuario que introduzca la distancia del lanzamiento y lo almacenamos en LAN//

        SLA = SLA + LAN; // sumamos esta distancia al total//
    }
    SLA = SLA / N;// dividimos el total entre el numero de lanzamientos para obtener el promedio//

    printf("\n El promedio de lanzamientos es: %.2f\n", SLA); // imprimimos el promedio//
    system("pause");

}
