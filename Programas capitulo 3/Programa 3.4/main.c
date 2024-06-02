#include <stdio.h>
#include <math.h>

/* Suma de cuadrados
el programa, al recibir como datos un grupo de enteros positivos, obtiene el cuadrado de los mismos y la suma correspondiente de dichos cuadrados */

void main()
{
    int NUM; // variable NUM como entero//
    long CUA, SUC = 0; // CUA y SUC como enteros largos//
    printf("\nIngrese un numero entero -0 para termminar-:\t"); // indicamos al usuario que debe ingresar//
    scanf("%d", &NUM); // leemos lo que ingresa el usuario//

    while(NUM) //loop mientras el NUM ingressado sea diferente de cero//
    {
        CUA = pow (NUM,2); //elevamos a la dos el numero ingresado por el usuario y el valor resultante lo guardamos en la variable CUA//

        printf("%d al cubo es %ld", NUM, CUA); // imprimimos el resultado de esta operacion//

        SUC = SUC + CUA; //sumamos este resutado al total de los cuadrados que se multiplican//

        printf("\nIngrese un numero entero -0 para terminar-:\t"); // pedimos otro numero para elevar// o que termine el ciclo
        scanf("%d", &NUM);
    }

    printf("\nLa suma de los cuadrados es %ld\n", SUC); // damos el resultado final de la suma de los cuadrados que se hayan calculado//
    system("pause");
}
