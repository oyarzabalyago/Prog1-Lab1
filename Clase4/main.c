#include <stdio.h>
#include <stdlib.h>
#include "olivieri.h"

int main()
{
    int numero;
    numero = getInt("Ingrese un numero: ", "Reingrese el numero: ", 18, 65);
    printf("Ingreso el numero: %d", numero);
    return 0;
}
