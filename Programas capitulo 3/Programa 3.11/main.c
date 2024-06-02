#include <stdio.h>

/* EL programa, al recibir como datos una serie de calificaciones de un examen, obtiene el rango en que se encuentran estas y cuantas estan en cada rango.

R1, R2, R3, R4 y R5: variables de tipo entero.
CAL: variable de tipo real */

void main()
{
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0; //declaramos las variables enteras y las iniciamos en 0//
    float CAL; // variable declarada float//

    printf("\nIngresa la calificacion del alumno: ");
    scanf("5f", &CAL); // lee la calificacion ingresada por el ususario y la almacena en CAL//

    while (CAL != -1) //evalua que calc sea diferente que negativo 1 para repetir el loop//
    {
        if (CAL < 4)//si la calificacione es menor que cuatro eecuta la siguiente linea, de otro modo pasa al else//
        {
            R1++;// suma 1 al contados de este rango de calificaciones//
        }
        else
        {
            if(CAL < 6)//si la calificacione es menor que 6 eecuta la siguiente linea, de otro modo pasa al else//
            {
                R2++;// suma 1 al contados de este rango de calificaciones//
            }
            else
            {
                if (CAL < 8)//si la calificacione es menor que 8 eecuta la siguiente linea, de otro modo pasa al else//
                {
                    R3++;// suma 1 al contados de este rango de calificaciones//
                }
                else
                {
                    if (CAL < 9)//si la calificacione es menor que 9 eecuta la siguiente linea, de otro modo pasa al else//
                    {
                        R4++;// suma 1 al contados de este rango de calificaciones//
                    }
                    else
                    {
                        R5++;// suma 1 al contados de este rango de calificaciones si no encaja en ninguno de los anteriores//
                    }
                }
            }
        }
        printf("\nIngresa la calificacion del alumno: ");
        scanf("%f", &CAL); // pide que ingrese la siguiente calificacion, y la almacena en CAL//
    }
    printf("\n------------------"); //se imprimen los resultados.
    printf("\n 0..3.99 = %d", R1);
    printf("\n 4..5.99 = %d", R2);
    printf("\n 6..7.99 = %d", R3);
    printf("\n 8..8.99 = %d", R4);
    printf("\n 9..10 = %d", R5);
    printf("\n------------------\n");
    system("pause");
}
