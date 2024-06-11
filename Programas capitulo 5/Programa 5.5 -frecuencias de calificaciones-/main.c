#include <stdio.h>

// Frecuencia de calificaciones.

const int TAM = 50;

void lectura(int *, int);
void frecuencia(int *, int, int *, int);
void impresion(int *, int);
void mayor(int *, int);

void main(void)
{
    int CAL[TAM], FRE[6] = {0};

    printf("El programa, al recibir como datos las calificaciones de un grupo de 50\nalumnos, obtiene la frecuencia de cada una de las calificaciones y además\nescribe cual es la frecuencia mas alta. */");
    printf("\n----------------------------\n");

    lectura(CAL, TAM);
    frecuencia(CAL, TAM, FRE, 6);
    printf("\nFrecuencia de Calificaciones\n");
    impresion(FRE, 6);
    mayor(FRE, 6);

    printf("\n----------------------------\n");
    system("pause");
}

void lectura(int VEC[], int T)
{
    int I;

    for (I=0; I<T; I++)
    {
        printf("Ingrese la calificacion -0:5- del alumno %d: ", I+1);
        scanf("%d", &VEC[I]);
    }
}

void impresion(int VEC[], int T)
{
    int I;

    for (I=0; I<T; I++)
    {
        printf("\nVEC[%d]: %d", I, VEC[I]);
    }
}

void frecuencia(int A[], int P, int B[], int T)
{
    int I;

    for (I=0; I<P; I++)
    {
        if ((A[I] >= 0) && (A[I] < 6))
        {
            B[A[I]]++;
        }
    }
}

void mayor(int *X, int T)
{
    int I, MFRE = 0, MVAL = X[0];

    for (I=1; I<T; I++)
    {
        if (MVAL < X[I])
        {
            MFRE = I;
            MVAL = X[I];
        }
    }
    printf("\n\nMayor frecuencia de calificaciones: %d \tValor: %d", MFRE, MVAL);
}
