#include "factorial.h"
int factorial(int numero)
{
    int resultado;

    if(numero==0)
    {
        return 1;
    }

    resultado = numero*factorial(numero -1);
    return resultado;
}

