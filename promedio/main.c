#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[5]={16,4,5,5,8};
    float promedio;
    int i;
    int suma=0;
    for(i=0;i<5;i++)
    {
        printf("%d\n",vector[i]);

    }
    for(i=0;i<5;i++)
    {
        suma = suma + vector[i];
    }
    promedio = (float)suma/5;

    printf("el promedio es: %f", promedio);

    if(vector[0]/2)
    {

    }

}


/* mostrar numeros pares e impares y la cantidad, validar que el numero ingresado sea distinto a 0*/
