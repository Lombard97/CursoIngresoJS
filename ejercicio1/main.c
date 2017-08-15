#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entero;
    float flotante;
    char caracter;
   printf("ingrese un numero");
   printf("ingrese un numero decimal");
   printf("ingrese un caracter");
    scanf("%d",&entero);
    scanf("%f",&flotante);
    scanf("%c",&caracter);
    printf("el entero es:%d",entero);
    printf("el caracter es:%c,caracter");
    caracter = getche();
    printf("el caracter es:%c",caracter);
    return 0;

}
