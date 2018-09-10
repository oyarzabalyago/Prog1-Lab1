#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int vec [10] = {0};
    int i;
    char respuesta;
    do
    {
        printf("Ingrese un indice: ");
        scanf("%d", &i);
        while (i < 0 || i >= 10)
        {
            printf("ERROR, REINGRESE EL INDICE: ");
            scanf("%d", &i);
        }
        printf("Ingrese el valor: ");
        scanf("%d", &vec[i]);
        printf("Quiere seguir? ");
        fflush(stdin);
        scanf("%c", &respuesta);
    } while (respuesta != 'n');
    for (int i = 0; i < 10; i++)
    {
        printf("\nNumero: %d", vec[i]);
    }
    return 0;
}
