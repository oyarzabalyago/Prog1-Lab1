#include <stdio.h>
#include <stdlib.h>
#include "olivieri.h"


int main()
{
    int edad;
    edad = getInt("Ingrese su edad laboral: ", "Reingrese su edad: ", 18, 65);
    printf("Su edad laboral es: %d", edad);
    return 0;
}















