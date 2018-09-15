#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "olivieri.h.h"

#define TAM 3

void burbujeoAlumnos (int leg[], int pp[], int sp[], float prom [], char nom[][20], char sex[], int tam);

int main()
{

    int legajos[TAM];
    int pp[TAM];
    int sp[TAM];
    float promedios[TAM];
    char nombres [TAM] [20];
    char sexos [TAM];
    char aux [50];

    for (int i = 0; i < TAM; i++)
    {
        system("cls");
        printf("\nINGRESE EL LEGAJO: ");
        scanf("%d", &legajos[i]);
        printf("\nINGRESE EL NOMBRE: ");
        fflush(stdin);
        scanf("%c", &aux[i]);
        while (strlen(aux) > 19)
        {
            printf("\nNOMBRE DEMASIADO LARGO. REINGRESELO: ");
            fflush(stdin);
            scanf("%c", &aux[i]);
        }
        strcpy(nombres[i], aux);
        printf("\nINGRESE LA NOTA DEL 1ER PARCIAL: ");
        fflush(stdin);
        scanf("%d", &pp[i]);
        while (pp[i] < 0 || pp[i] > 10)
        {
            printf("\nERROR EN LA NOTA, REINGRESELA: ");
            scanf("%d", &pp[i]);
        }
        printf("\nINGRESE LA NOTA DEL 2DO PARCIAL: ");
        scanf("%d", &sp[i]);
        while (sp[i] < 0 || sp[i] > 10)
        {
            printf("\nERROR EN LA NOTA, REINGRESELA: ");
            scanf("%d", &sp[i]);
        }
        printf("\nINGRESE EL SEXO DEL ALUMNO/A: ");
        fflush(stdin);
        scanf("%c", &sexos[i]);
        promedios[i] = (pp[i] + sp[i]) / (float) 2;
    }
    burbujeoAlumnos(legajos, pp, sp, promedios, nombres, sexos, TAM);

    return 0;
}

void burbujeoAlumnos (int leg[], int pp[], int sp[], float prom [], char nom[][20], char sex[], int tam)
{
    int auxInt;
    float auxProm;
    char auxNom [20];
    char auxSex;
    system("cls");
    for (int i = 0; i < tam-1; i++)
    {
        for (int j = i + 1; j < tam; j++)
        {
            if (prom[i] < prom[j])
            {
                auxInt = leg[i];
                leg[i] = leg[j];
                leg[j] = auxInt;

                auxInt = pp[i];
                pp[i] = pp[j];
                pp[j] = auxInt;

                auxInt = sp[i];
                sp[i] = sp[j];
                sp[j] = auxInt;

                auxProm = prom[i];
                prom[i] = prom[j];
                prom[j] = auxProm;

                strcpy(auxNom, nom[i]);
                strcpy(nom[i], nom[j]);
                strcpy(nom[j], auxNom);

                auxSex = sex[i];
                sex[i] = sex[j];
                sex[j] = auxSex;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\nALUMNO: %s", nom [i]);
        printf("\n1ER PARCIAL: %d", pp [i]);
        printf("\n2DO PARCIAL: %d", sp [i]);
        printf("\nPROMEDIO: %f", prom [i]);
        printf("\nLEGAJO: %d", leg[i]);
        printf("\nSEXO: %c\n\n", sex[i]);
    }
}
