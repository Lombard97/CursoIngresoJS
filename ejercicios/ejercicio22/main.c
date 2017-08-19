#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int aux ;

    printf("ingrese numero 1: ");
    scanf("%d" , &num1);
    printf("ingrese numero 2: ");
    scanf("%d" , &num2);

    aux = num1;
    num1 = num2;
    num2 = aux;

    printf("num1 vale: %d\n" , num1);
    printf("num2 vale: %d" , num2);
}

