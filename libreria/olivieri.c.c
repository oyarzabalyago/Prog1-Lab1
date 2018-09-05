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
