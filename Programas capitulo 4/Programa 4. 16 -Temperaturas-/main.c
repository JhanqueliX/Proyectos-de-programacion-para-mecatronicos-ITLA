#include <stdio.h>
#include <math.h>

//temperaturas

void Acutem(float);
void Maxima(float, int);
void Minima (float, int);

float ACT = 0.0;
float MAX = -50.0;
float MIN = 60.0;

int HMAX;
int HMIN;

void main(void)
{
    float TEM;
    int I;

    printf("\nRecibe como datos 24 numeros reales que representan las\n temperaturas en el exterior en un periodo de 24 horas. Calcula el\n promedio del dia y las temperaturas maxima y minima con la hora en\n que se registraron.\n");
    printf("-----------------------------------------");

    for (I = 1; I <= 24; I++)
    {
        printf("\nIngresa la temperatura de la hora %d: ", I);
        scanf("%f", &TEM);

        Acutem(TEM);
        Maxima(TEM, I);
        Minima(TEM, I);

    }
    printf("\nPromedio del dia: %5.2f", (ACT / 24));
    printf("\nMaxima del dia: %5.2f \tHora: %d,", MAX, HMAX);
    printf("\nMinima del dia: %5.2f \tHora: %d", MIN, HMIN);
    printf("\n-----------------------------------------\n");
    system("pause");
}

void Acutem(float T)
{
    ACT += T;
}

void Maxima(float T, int H)
{
    if(MAX < T)
    {
        MAX = T;
        HMAX = H;
    }
}

void Minima(float T, int H)
{
    if (MIN > T)
    {
        MIN = T;
        HMIN = H;
    }
}
