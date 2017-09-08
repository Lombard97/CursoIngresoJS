#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    char seguir='s';
    int opcion;
    float operador1=0;
    float operador2=0;
    float suma=0;
    float resta=0;
    float division;
    float multiplicacion;
    int i;
    int factorial=1;

        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n\n");

        printf("Ingrese un numero acorde a la opcion del menu que desea ejecutar ");
        scanf("%d",&opcion);

        while(opcion<1||opcion>9)
        {
            printf("Opcion invalida,Reingrese un numero acorde a la opcion del menu que desea ejecutar ");
            scanf("%d",&opcion);
        }

        system("cls");
        printf("la opcion ingresada es: %d\n",opcion);

        printf("\n1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n\n");
    while (seguir=='s')
    {
        switch(opcion)
        {
            case 1:
                printf("ingrese el primer operador\n");
                scanf("%f",&operador1);
                printf("ingrese el numero acorde a la siguiente operacion que desea realizar ");
                scanf("%d",&opcion);
                break;
            case 2:
                printf("ingrese el segundo operador\n");
                scanf("%f",&operador2);
                printf("\ningrese el numero acorde a la siguiente operacion que desea realizar ");
                scanf("%d",&opcion);
                break;
            case 3:
                suma = operador1+operador2;
                printf("\nEl resultado de la suma entre los operadores es: %.2f",suma);
                printf("\ningrese el numero acorde a la siguiente operacion que desea realizar ");
                scanf("%d",&opcion);
                break;
            case 4:
                resta = operador1-operador2;
                printf("\nEl resultado de la resta entre los operadores es: %.2f",resta);
                printf("\ningrese el numero acorde a la siguiente operacion que desea realizar ");
                scanf("%d",&opcion);
                break;
            case 5:
                printf("En el caso de la division debe tener en cuenta que: el dividendo sera el operador 1 y el divisor el operador 2.\n");
                while(operador1==0||operador2==0)
                {
                   printf("\nNo se puede dividir con uno o ambos operadores valiendo cero, reingrese otra opcion u operador ");
                   scanf("%d",&opcion);
                   break;
                   break;
                }
                division = operador1/operador2;
                printf("El resultado de la division entre los operadores es: %.2f",division);
                printf("\ningrese el numero acorde a la siguiente operacion que desea realizar ");
                scanf("%d",&opcion);
                break;
            case 6:
                multiplicacion = operador1*operador2;
                printf("El resultado de la multiplicacion entre los operadores es: %.2f\n",multiplicacion);
                printf("\ningrese el numero acorde a la siguiente operacion que desea realizar ");
                scanf("%d",&opcion);
                break;
                case 7:
                    for(i=1;i<=operador1;i++)
                    {
                        factorial = factorial * i;
                    }
                printf("\nEl factorial del numero ingresado es: %d", factorial);
                printf("\ningrese el numero acorde a la siguiente operacion que desea realizar ");
                scanf("%d",&opcion);
                break;
                case 8:
                suma = operador1+operador2;
                printf("\nEl resultado de la suma entre los operadores es: %.2f",suma);
                resta = operador1-operador2;
                printf("\nEl resultado de la resta entre los operadores es: %.2f",resta);
                division = operador1/operador2;
                printf("\nEl resultado de la division entre los operadores es: %.2f",division);
                multiplicacion = operador1*operador2;
                printf("\nEl resultado de la multiplicacion entre los operadores es: %.2f\n",multiplicacion);
                    for(i=1;i<=operador1;i++)
                    {
                        factorial = factorial * i;
                    }
                printf("\nEl factorial del numero ingresado es: %d", factorial);
                printf("\ningrese el numero acorde a la siguiente operacion que desea realizar ");
                scanf("%d",&opcion);
                break;
            case 9:
                seguir='n';

        }
    }
}


