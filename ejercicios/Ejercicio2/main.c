#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numero1;
   int numero2;
   int suma;
   printf("ingrese el primer numero: ");
   scanf("%d",&numero1);
   printf("ingrese el segundo numero: ");
   scanf("%d",&numero2);
   suma = numero1+numero2;
   printf("La suma de los numeros es:%d",suma);

   return 0;
}
