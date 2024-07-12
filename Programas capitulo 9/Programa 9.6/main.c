#include <stdio.h>

/* Archivos con variables enteras y reales.
El programa lee datos de alumnos almacenados en un archivo y escribe la matrícula y el promedio de cada alumno. */

int main(void)
{
    int i, j, n, mat;
    float cal, pro;
    FILE *ar;

    ar = fopen("arc9.txt", "r");
    if (ar != NULL)
    {
        fscanf(ar, "%d", &n);
        for (i = 0; i < n; i++)
        {
            fscanf(ar, "%d", &mat);
            printf("%d\t", mat);
            pro = 0;
            for (j = 0; j < 5; j++)
            {
                fscanf(ar, "%f", &cal);
                pro += cal;
            }
            printf("%.2f\n", pro / 5);
        }
        fclose(ar);
    }
    else
    {
        printf("No se puede abrir el archivo");
    }

    return 0;
}
