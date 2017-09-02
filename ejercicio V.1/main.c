#include <stdio.h>
#include <stdlib.h>

int main()
{
   int vector[]={5,8,6,9,4,5,6,2,1,6};
   int auxiliar;


    printf("Vector desordenado: %d\n\n", vector[i]);

    for(int i=0;i<9;i++)
   {
       for(int j=0;j<10;j++)
       {
           if(vector[i]>vector[j])
           {
               auxiliar = vector[i];
               vector[i] = vector[j];
               vector[j] = auxiliar;
           }
       }
   }
    printf("vector ordenado: %d\n\n",vector[i]);
}
