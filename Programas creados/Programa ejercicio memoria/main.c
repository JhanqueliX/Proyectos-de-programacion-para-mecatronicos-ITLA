#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nombre[50];
    int edad;
    char matricula[20];
} Alumno;

void leerDisco();
void grabarDato();

int main()
{
    int opcion;

    do
    {
        printf("\nMenu:\n");
        printf("1. Leer disco\n");
        printf("2. Grabar dato\n");
        printf("0. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            leerDisco();
            break;
        case 2:
            grabarDato();
            break;
        case 0:
            printf("Saliendo...\n");
            break;
        default:
            printf("Opcion no valida. Intente de nuevo.\n");
        }
    }
    while (opcion != 0);

    return 0;
}

void leerDisco()
{
    FILE *file = fopen("alumnos.dat", "rb");
    if (file == NULL)
    {
        perror("Error al abrir el archivo");
        return;
    }

    Alumno *alumnos = NULL;
    int count = 0;

    while (1)
    {
        Alumno temp;
        if (fread(&temp, sizeof(Alumno), 1, file) != 1)
        {
            break;
        }

        Alumno *nuevoAlumnos = realloc(alumnos, sizeof(Alumno) * (count + 1));
        if (nuevoAlumnos == NULL)
        {
            perror("Error al realocar memoria");
            free(alumnos);
            fclose(file);
            return;
        }

        alumnos = nuevoAlumnos;
        alumnos[count] = temp;
        count++;
    }

    fclose(file);

    for (int i = 0; i < count; i++)
    {
        printf("Alumno %d:\n", i + 1);
        printf("Nombre: %s\n", alumnos[i].nombre);
        printf("Edad: %d\n", alumnos[i].edad);
        printf("Matricula: %s\n", alumnos[i].matricula);
    }

    free(alumnos);
}

void grabarDato()
{
    FILE *file = fopen("alumnos.dat", "ab");
    if (file == NULL)
    {
        perror("Error al abrir el archivo");
        return;
    }

    Alumno *alumnos = NULL;
    int count = 0;

    while (1)
    {
        Alumno temp;
        printf("Ingrese el nombre del alumno: ");
        scanf("%s", temp.nombre);
        printf("Ingrese la edad del alumno: ");
        scanf("%d", &temp.edad);
        printf("Ingrese la matricula del alumno: ");
        scanf("%s", temp.matricula);

        Alumno *nuevoAlumnos = realloc(alumnos, sizeof(Alumno) * (count + 1));
        if (nuevoAlumnos == NULL)
        {
            perror("Error al realocar memoria");
            free(alumnos);
            fclose(file);
            return;
        }

        alumnos = nuevoAlumnos;
        alumnos[count] = temp;
        count++;

        printf("Desea ingresar otro registro? (1. Si, 0. No): ");
        int otro;
        scanf("%d", &otro);
        if (!otro)
        {
            break;
        }
    }

    for (int i = 0; i < count; i++)
    {
        if (fwrite(&alumnos[i], sizeof(Alumno), 1, file) != 1)
        {
            perror("Error al escribir en el archivo");
            free(alumnos);
            fclose(file);
            return;
        }
    }

    free(alumnos);
    fclose(file);
}
