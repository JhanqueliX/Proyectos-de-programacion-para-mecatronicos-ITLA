#include <stdio.h>
#include <stdlib.h>



void main(void)
{
    char cad0[50];
    char p;
    int c = 0, min = 0, may = 0, num = 0, I = 0;

    printf("\nEl programa cuenta cuantas minusculas, mayusculas y numeros tiene dada stringa.");
    printf("\n----------------------------");
    printf("\ningrese una stringa: ");

    while ((p = getchar()) != '\n')
    {
        cad0[I++] = p;
        cad0[I + 1] = '\0';
    }


    while (cad0[c] != '\0')
    {
        if ((int)cad0[c] > 64 && cad0[c] < 91)
        {
            may++;
        }
        else if ((int)cad0[c] > 96 && cad0[c] < 123)
        {
            min++;
        }

        else if ((int)cad0[c] != 32 && (int)cad0[c] > 47 && cad0[c] < 59)
        {
            num++;
        }

        c++;
    }
    fflush(stdin);
    printf("\n----------------------------");
    printf("\nMAYUSCULAS: %d\tminusculas: %d\tNum3r05: %d\n", may, min, num);
    printf("----------------------------\n");
    system("pause");
}
