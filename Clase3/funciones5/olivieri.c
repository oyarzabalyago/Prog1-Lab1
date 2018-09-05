#include <stdio.h>
#include <stdlib.h>

/** \brief VALIDA UN NUMERO
 * \param PRIMER MENSAJE
 * \param SEGUNDO MENSAJE DE ERROR
 * \param LIMITE INFERIOR
 * \param LIMITE MAXIMO
 * \return DEVUELVE EL NUMERO VALIDADO
 */
int getInt(char mensaje [], char error[], int lMin, int lMax)
{
    int numero;
    printf("%s", mensaje);
    scanf("%d", &numero);
    while (numero < lMin || numero > lMax)
    {
        printf("%s", error);
        scanf("%d", &numero);
    }
    return numero;
}

