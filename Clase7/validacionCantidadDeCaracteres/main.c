#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nombre [20];
    char auxcad [50];

    printf("Ingrese su nombre: ");
    gets(auxcad); //INGRESA EL NOMBRE

    while (strlen(auxcad) > 19) //VALIDACION DE LONGITUD
    {
        printf("ERROR, NOMBRE DEMASIADO LARGO. REINGRESELO: ");
        gets(auxcad);
    }
    strcpy(nombre, auxcad); // COPIA Y PEGA LO QUE TIENE EN UN ARRAY A OTRO
    printf("Usted se llama: %s", nombre);
    return 0;
}
