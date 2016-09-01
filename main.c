#include <stdio.h>
#include <stdlib.h>
#include "funcmodia.h"
int main()
{
    char seguir = 'i';
    int opcion = 0;
    int fope1 = 0;
     int fope2 = 0;
    float ope1 = 0;
     float ope2 = 0;
      float resultado;
system("color 9f");
printf(" bienvenido a la calculadora \n\n");
system("pause");

    while(seguir == 'i')
    {
            printf("1- Ingrese 1er operando, ope1=%d: \n", ope1);
            printf("2- Ingrese 2do operando, ope2=%d: \n", ope2);
            printf("3- Calcular la suma (ope1 + ope2)\n");
            printf("4- Calcular la resta (ope1 - ope2)\n");
            printf("5- Calcular la division (ope1 / ope2)\n");
            printf("6- Calcular la multiplicacion (ope1 * ope2)\n");
            printf("7- Calcular el factorial (ope1!)\n");
            printf("8- Calcular todas las operaciones\n");
            printf("9- Salir\n");


        printf("Ingrese una opcion: ");
        scanf("%d",&opcion);

        while(opcion < 1 || opcion > 9)
        {
            printf("\nERROR, ingrese opcion nuevamente: ");
            scanf("%d", &opcion);
        }


        switch(opcion)
        {

         case 1:
        printf("ingrese el 1er operando");
            scanf("%f", &ope1);
                printf("A = %.2f\n", ope1);
                fope1 = 1;
                break;
         case 2:
            printf("ingrese el 2do operando");
            scanf("%f", &ope2);
                printf("B = %.2f\n", ope2);
                fope2 = 1;
                break;



            case 3:

                if(fope1 == 1 && fope2 == 1)
                {
                    resultado = suma(ope1, ope2);
                }
                else
                {
                    printf("ERROR, ingrese ambos numeros para realizar la operacion.\n");
                }

                break;

            case 4:

               if(fope1 == 1 && fope2 == 1)
                {
                    resultado = resta(ope1, ope2);
                }
                else
                {
                    printf("ERROR, ingrese ambos numeros para realizar la operacion.\n");
                }

                break;

            case 5:

              if(fope1 == 1 && fope2 == 1)
                {
                    resultado = division(ope1, ope2);
                }
                else
                {
                    printf("ERROR, ingrese ambos numeros para realizar la operacion.\n");
                }

                break;

            case 6:

               if(fope1 == 1 && fope2 == 1)
                {
                    resultado = multiplicar(ope1, ope2);

                }
                else
                {
                    printf("ERROR, ingrese ambos numeros para realizar la operacion.\n");
                }

                break;

            case 7:

                if(fope1 == 1)
                {
                    resultado = factorial(ope1);
                    printf("El factorial de %.2f es: %.2f\n", ope1, resultado);
                }
                else
                {
                    printf("ERROR, ingrese el primer operando para realizar la operacion.\n");
                }

                break;

            case 8:

               if(fope1 == 1 && fope2 == 1)
                {
                    resultado = suma(ope1, ope2);
                    resultado = resta(ope1, ope2);
                    resultado = division(ope1, ope2);
                    resultado = multiplicar(ope1, ope2);
                    resultado = factorial(ope1);

                    printf("El factorial de %.2f es: %.2f\n", ope1, resultado);
                }
                else
                {
                    printf("ERROR, ingrese ambos numeros para realizar la operacion.\n");
                }

                break;

            case 9:

                seguir = 'o';

                break;
        }

        system("pause");
        system("cls");



    }
    return 0;
}
