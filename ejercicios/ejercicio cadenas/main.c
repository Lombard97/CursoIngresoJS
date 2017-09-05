#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nombre[15];
    char apellido[18];
    char apnom[34];
    char aux[200];

    printf("Ingrese su nombre\n");
    gets(nombre);

    printf("%s\n", nombre);

    printf("ingrese su apellido\n");
    gets(apellido);

    printf("%s\n", apellido);

    strcat(apellido,nombre);

    printf("%s", nombre,apellido);

}
