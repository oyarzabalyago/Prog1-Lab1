#include <stdio.h>
#include <stdlib.h>
#include "olivieri.h.h"

#define TAM 5
int main()
{
    int vec [TAM] = {9, 10, 11, 12, 13};
    int indice;
    indice = buscarNumero(vec, TAM, 8);
    if (indice == -1)
    {
        printf("No se encontro el numero\n");
    } else
    {
        printf("EL NUMERO %d SE ENCONTRO\n", indice);
    }
    mostrarVector(vec, TAM);
    return 0;
}

