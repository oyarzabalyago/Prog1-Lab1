#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "olivieri.h.h"

int main()
{
    char nombre[20] = {"MAriaNA IneS"};
    char apellido [20] = {"PEREz"};
    char nombreCompleto [40];
    strcpy(nombreCompleto, nombre); //COPIA EL NOMBRE
    strcat(nombreCompleto, " "); //CONCATENA ESPACIO
    strcat(nombreCompleto, apellido); //CONCATENA EL APELLIDO



    strlwr(nombreCompleto); //COPIA TODO A MINUSCULA
    nombreCompleto[0] = toupper(nombreCompleto[0]); //PRIMERA LETRA MAYUSCULA
    int cant = strlen(nombreCompleto); //CREA UNA VARIABLE Y LA INICIALIZA CON LA CANTIDAD DE CARACTERES
    for (int i = 0;i < cant; i++) //BUSCA EL ESPACIO Y LA PROXIMA EN MAYUSCULA
    {
        if (nombreCompleto[i] == ' ')
        {
            nombreCompleto [i+1] = toupper(nombreCompleto[i+1]);
        }
    }
    printf("%s", nombreCompleto);
}
