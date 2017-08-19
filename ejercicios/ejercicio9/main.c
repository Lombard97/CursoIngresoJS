#include <stdio.h>
#include <stdlib.h>

int main()
{
    char vocales;
    int contador = 0;

    while(contador==20)
    {
        printf("Ingrese un caracter: ");
        scanf("%c", &vocales);
        contador = contador++;
    }
}
