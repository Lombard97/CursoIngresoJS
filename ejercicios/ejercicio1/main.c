#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros;
    int contador = 0;
    int acumulador = 0;
    float promedio;

    for(contador=0;contador<5;contador++)
    {

        printf("Ingrese 5 datos");
        scanf("%d" , &numeros);
        acumulador = acumulador+numeros;
    }

    promedio = acumulador / contador;

    printf("El promedio de los datos: %f" , promedio);


    return 0;
}
