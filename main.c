#include <stdio.h>
#include <stdlib.h>
#include "funcmodiaTP2.h"
#define num 20



int main()
{

    iper people[num];
    char seguir = 'n';
    int option = 0;
  system("color 8e");
        printf("\n         �����������������������������������������������������������ͻ");
		printf("\n         �                   ::  bienvenido ::                       �");
		printf("\n         �����������������������������������������������������������ͼ\n\n");

         system("pause");
         system("cls");

    inicio(people);

    while(seguir == 'n')
    {  system("color 8e");

        printf("\n\n \n");
        printf("\n         ������������������������������������������������ͻ");
		printf("\n         �        :     MENU DE OPCIONES  ::              �");
		printf("\n         ������������������������������������������������͹");
		printf("\n         �  1- Agregar persona                            �");
		printf("\n         �  2- Borrar persona                             �");
		printf("\n         �  3- Imprimir lista ordenada por nombre         �");
		printf("\n         �  4- Imprimir grafico de edades                 �");
		printf("\n         �  5- Salir                                      �");
		printf("\n         ������������������������������������������������ͼ");
		printf("\n");



        printf("\n  Ingrese una de las opciones: ");

        option = vM(1, 5);
        printf("\n\n");

        switch(option)
        {
            case 1:
                ups(people);

                break;

            case 2:
                clears(people);
                system("pause");
                system("cls");

                break;

            case 3:
                system("color 5b ");
                lista(people);
                system("pause");

                break;

            case 4:
                system("color 9f");
                grafico(people);

                break;

            case 5:
                printf("  Esta seguro que desea salir? (y=si/n=no): ");
                seguir = vRta(seguir);

                if(seguir == 'y')
                {
                    printf("\n\n  Adios, vuelva pronto!\n\n");
                }

                break;
        }
system("cls");
    system("pause");
    }


    return 0;
}
