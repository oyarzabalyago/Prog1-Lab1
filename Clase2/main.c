#include <stdio.h>
#include <stdlib.h>

int numero;
int acumPositivos = 0;
int acumNegativos = 0;
int contPositivos = 0;
int contNegativos = 0;
int contCeros = 0;
int contPares = 0;
float promedioPositivos = 0;
float promedioNegatvos = 0;
int flag = 0;
int flag2 = 0;
int dif;
int max;
int min;
char respuesta;

int main()
{
    do
    {
        printf("\nIngrese un numero: ");
        scanf("%d",&numero);
        if (numero > 0)
        {
            contPositivos++;
            acumPositivos = acumPositivos + numero;
        } else if (numero < 0)
        {
            contNegativos++;
            acumNegativos = acumNegativos + numero;
        } else
        {
            contCeros++;
        }
        if (numero % 2 == 0)
        {
            contPares++;
        }
        if (flag == 0 || numero > max)
        {
            max = numero;
            flag = 1;
        }
        if (flag2 == 0 || numero < min)
        {
            min = numero;
            flag2 = 1;
        }
        printf("\nDesea continuar: ");
        fflush(stdin);
        respuesta = getchar();
    } while (respuesta != 'n');
    if (contPositivos >= 1)
    {
        promedioPositivos = acumPositivos / (float) contPositivos;
    }
    if (contNegativos >= 1)
    {
        promedioNegatvos = acumNegativos / (float) contNegativos;
    }
    dif = acumPositivos - acumNegativos;
    printf("1. La suma de los numeros positivos es %d",acumPositivos);
    printf("\n2. La suma de  los numeros negativos es %d",acumNegativos);
    printf("\n3. La cantidad de ceros es %d",contCeros);
    printf("\n4. La cantidad de numeros pares es %d",contPares);
    printf("\n5. El promedio de los numeros positivos es %f", promedioPositivos);
    printf("\n6. El promedio de los numeros negativos es %f", promedioNegatvos);
    printf("\n7. La diferencia entre los pos y los neg es %d", dif);
    printf("\n8. El numero maximo es %d", max);
    printf("\n8. El numero minimo es %d", min);
    return 0;
}
