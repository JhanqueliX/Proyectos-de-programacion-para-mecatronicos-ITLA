#include <stdio.h>

/*calificaciones.
El programa, al recibir un grupo de calificaciones de un alumno, obtiene el promedio de calificaciones de cada uno de ellos y, ademas los alumnos con el mejor y peor promedio.

I, MAT, MAMAT y MEMAT: variables de tipo entero.
CAL, SUM, MAPRO, MEPRO y PRO: variables de tipo real. */

void main()
{
    int I, MAT, MAMAT, MEMAT; //declaramos variables//
    float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 100.0;

    printf("Ingrese la matricula del primer alumno:\t");
    scanf("%d", &MAT); //pedimos que se ingrese la matricula del primer alumnos y la almacenamos en MAT//

    while (MAT) // evaluamos que la matricula sea diferente de 0
    {
        SUM = 0;

        for (I = 1; I <= 5; I++) // un ciclo for que se repide 5 veces
        {
            printf("\tIngrese la calificacion del alumno: ", I);
            scanf("%f", &CAL);//pedimos una calificacion del alumno y la almacenamos en CAL
            SUM += CAL; // la sumamos a un total
        }
        PRO = SUM / 5; // el total lo dividimos entre 5 para conseguir el promedio
        printf("\nMatricula: %d\t Promedio: %5.2f", MAT, PRO); // imprimimos la matricula y el promedio del alummno evaluado

        if(PRO > MAPRO) // evaluamos si el promedio es mayor que el actual mayor promedio
        {
            MAPRO = PRO; // si es asi colocamos el promedio en su lugar
            MAMAT = MAT; // y la matricula de este alumno
        }

        if (PRO < MEPRO)  // evaluamos si el promedio es menor que el actual manor promedio
        {
            MEPRO = PRO; // si es asi colocamos el promedio en su lugar
            MEMAT = MAT; // y la matricula de este alumno
        }
        printf("\n\nIngrese la matricula del siguiente alumno -0 para terminar-: ");
        scanf("%d", &MAT); //preguntamos por el siguiente alumno y el ciclo continua hasta que ingresemos 0 como matricula
    }
    printf("\n------------------------\n");
    printf("\n\nAlumno con mejor Promedio:\t%d\t\%5.2f", MAMAT, MAPRO); // imprimimos las matriculas y el promedio de e menor y el mayor promedio
    printf("\n\nAlumno con peor Promedio:\t%d\t\%5.2f\n", MEMAT, MEPRO);
    printf("------------------------\n");

    system("pause");
}
