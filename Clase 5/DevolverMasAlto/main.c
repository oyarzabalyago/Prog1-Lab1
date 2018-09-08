#include <stdio.h>
#include <stdlib.h>
#include "olivieri.h.h"
#define TAM = 5


int main()
{
    int vec [TAM] = {10, 12, 99, 1, 15,};
    int valorMasAlto;
    valorMasAlto = busquedaMasAlto (vec, TAM);
    printf("EL NUMERO MAS ALTO ES %d", valorMasAlto);
    printf("\n %d", vec);
}
