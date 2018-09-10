#include <stdio.h>
#include <stdlib.h>
#include "olivieri.h.h"

#define TAM 5


int main()
{
    int vec [TAM] = {15, 9, 10, 8, 29};
    vec[TAM] = ordenamientoVector(vec, TAM);
    mostrarVector(vec, TAM);
    return 0;
}
