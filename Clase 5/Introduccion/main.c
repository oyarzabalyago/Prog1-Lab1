#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vec [5];
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese un numero ");
        scanf("%d", &vec[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("\nUsted ingreso el numero %d", vec[i]);
    }
    return 0;
}
