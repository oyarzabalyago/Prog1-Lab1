#include <stdio.h>
#include <stdlib.h>
#include "olivieri.h.h"
/** \brief VALIDA UN NUMERO
 * \param PRIMER MENSAJE
 * \param SEGUNDO MENSAJE DE ERROR
 * \param LIMITE INFERIOR
 * \param LIMITE MAXIMO
 * \return DEVUELVE EL NUMERO VALIDADO
 */
int getInt(char mensaje [], char error[], int lMin, int lMax, int i)
{
    int numero;
    printf("%s", mensaje);
    scanf("%d", &numero);
    i--;
    while (numero < lMin || numero > lMax)
    {
        printf("%s", error);
        scanf("%d", &numero);
        i--;
        if (i == 0)
        {
            return 0;
        }
    }
    return numero;
}


/** \brief SUMAR DOS NUMEROS
 * \param NUMERO A
 * \param NUMERO B
 * \return RESULTADO DE LA SUMA
 */
int sumar (int a, int b)
{
    int resultado;
    resultado = a + b;
    return resultado;
}


/** \brief RESTA DOS NUMEROS
 * \param NUMERO A
 * \param NUMERO B
 * \return EL RESULTADO DE LA RESTA
 */
int restar (int a, int b)
{
    int resultado;
    resultado = a - b;
    return resultado;
}

/** \brief MULTIPLICA DOS NUMEROS
 * \param NUMERO A
 * \param NUMERO B
 * \return EL RESULTADO DEL PRODUCTO DE LOS DOS NUMEROS
 */
int multiplicar (int a, int b)
{
    int resultado;
    resultado = a * b;
    return resultado;
}


/** \brief DIVIDE DOS NUMEROS
 * \param NUMERO A
 * \param NUMERO B
 * \return DEVUELVE LA DIVISION
 */
int dividir (int a, int b)
{
    float resultado;
    if (b == 0)
    {
        resultado = 0;
    } else
    {
        resultado = a / (float) b;
    }
    return (float) resultado;
}


/** \brief CALCULA EL FACTORIAL DE UN NUMERO
 * \param NUMERO A CALCULAR
 * \return SU FACTORIAL
 */
int factorial (int a)
{
    if (a == 1)
    {
        return 1;
    } else
    {
        return a * (factorial(a - 1));
    }
}


/** \brief MUESTRA UN VECTOR
 * \param EL VECTOR
 * \param EL TAMAÑO
 * \return VISUALIZA EL VECTOR
 */
void mostrarVector (int vec[], int tam)
{
    for (int i = 0;i < tam;i++)
    {
        printf("%d  ", vec[i]);
    }
}


/** \brief BUSCA UN NUMERO DENTRO DE UN ARRAY
 * \param VECTOR EN EL QUE SE BUSCA
 * \param TAMAÑO DEL VECTOR
 * \param NUMERO A BUSCAR
 * \return DEVUELVE EL NUMERO SI LO ENCUENTRA O FALSE SI NO
 */
int buscarNumero (int vec[], int tam, int valor)
{
    int indice = -1;

    for (int i = 0; i < tam; i++)
    {
        if (vec [i] == valor)
        {
            indice = valor;
            break;
        }
    }
    return indice;
}


/** \brief ORDENA UN VECTOR DE MENOR A MAYOR
 * \param EL VECTOR A ORDENAR
 * \param EL TAMAÑO DEL VECTOR
 * \return EL VECTOR ORDENADO
 */
int ordenamientoVector (int vec[], int tam)
{
    int aux;
    for (int i = 0; i < tam; i++)
    {
        for (int j = i + 1; j < tam; j++)
        {
            if (vec[i] > vec[j])
            {
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
    }
    return vec[tam];
}
