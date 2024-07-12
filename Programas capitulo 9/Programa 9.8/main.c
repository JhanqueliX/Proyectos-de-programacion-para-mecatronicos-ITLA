#include <stdio.h>

/* Alumnos.
El programa almacena variables de tipo estructura alumno en un archivo. */

typedef struct {
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void escribe(FILE *);

int main(void) {
    FILE *ar;
    if ((ar = fopen("ad1.dat", "w")) != NULL) {
        escribe(ar);
        fclose(ar);
    } else {
        printf("\nEl archivo no se puede abrir");
    }
    return 0;
}

void escribe(FILE *ap) {

    alumno alu;
    int i = 0, r;
    printf("\nDesea ingresar información sobre alumnos? (Si-1 No-0): ");
    scanf("%d", &r);
    while (r) {
        i++;
        printf("Matrícula del alumno %d: ", i);
        scanf("%d", &alu.matricula);

        printf("Nombre del alumno %d: ", i);
        while (getchar() != '\n');
        fgets(alu.nombre, sizeof(alu.nombre), stdin);
        size_t len = strlen(alu.nombre);
        if (len > 0 && alu.nombre[len-1] == '\n') {
            alu.nombre[len-1] = '\0';
        }

        printf("Carrera del alumno %d: ", i);
        scanf("%d", &alu.carrera);

        printf("Promedio del alumno %d: ", i);
        scanf("%f", &alu.promedio);

        fwrite(&alu, sizeof(alumno), 1, ap);


        printf("\n¿Desea ingresar información sobre más alumnos? (Sí-1 No-0): ");
        scanf("%d", &r);
    }
}
