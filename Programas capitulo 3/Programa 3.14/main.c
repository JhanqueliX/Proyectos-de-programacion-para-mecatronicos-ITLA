#include <stdio.h>

/* Eleccion
EL programma obtiene el total de votos de cada candidato y el porcentaje correspondiente. Tambien considera votos nulos.

VOT, C1, C2, C3, C4, C5, NU, SVO: variables enteras.
PO1, PO2, PO3, PO4, PO5, PON: variables de tipo real. */

void main()
{
    int VOT, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU =0, SVO;// declaramos variabes
    float PO1, PO2, PO3, PO4, PO5, PON;

    printf("\nIngrese el primer voto: ");
    scanf("%d", & VOT); // preguntamos por el primer voto y se almacena en VOT//

    while (VOT) //mientras no se ingrese sero seguira el ciclo
    {
        switch(VOT) // segun el numero que ingrese se le añadira un voto al candidato de dicho numero
        {
        case 1: C1++; break;
        case 2: C2++; break;
        case 3: C3++; break;
        case 4: C4++; break;
        case 5: C5++; break;
        default: NU++; break; //si el numero no esta entre los candidatos es nulo
        }
        printf("ingrese el siguiente voto -0 para terminar-: ");
        scanf("%d", &VOT); // se piden mas votos y se indica que con 0 se termina
    }

    SVO = C1 + C2 + C3 + C4 + C5 + NU; // suma el total de votos
    PO1 = ((float) C1 / SVO) * 100; // se sacan los porcentajes de cada candidato dividiendo sus votos entre el total y multiplicandolo por cien, tambien se indica que el resultado de dividir sera un float a pesar de que los valores sean enteros
    PO2 = ((float) C2 / SVO) * 100;
    PO3 = ((float) C3 / SVO) * 100;
    PO4 = ((float) C4 / SVO) * 100;
    PO5 = ((float) C5 / SVO) * 100;
    PON = ((float) NU / SVO) * 100;

    printf("\n---------------------------------------------\n");
    printf("\nTotal de votos: %d", SVO); // se imprimen los resultados, votos totales, votos de cada candidato y en porcentaje//
    printf("\n\nCandidato 1: %d votos -- Porcentaje: %5.2f", C1, PO1);
    printf("\nCandidato 2: %d votos -- Porcentaje: %5.2f", C2, PO2);
    printf("\nCandidato 3: %d votos -- Porcentaje: %5.2f", C3, PO3);
    printf("\nCandidato 4: %d votos -- Porcentaje: %5.2f", C4, PO4);
    printf("\nCandidato 5: %d votos -- Porcentaje: %5.2f", C5, PO5);
    printf("\nNulos:       %d votos -- Porcentaje: %5.2f", NU, PON);
    printf("\n---------------------------------------------\n");

    system("pause");
}
