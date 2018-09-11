#include <stdio.h>
#include <stdlib.h>
#include "olivieri.h.h"

int main()
{
    char vector[] = {'A', 'z', 'C', 'a', 'r', 'c'};
    vector[6] = burbujeoChar(vector, 6, 0);
    mostarCharArray(vector, 6);
}
