#include <stdio.h>

int main() {
    int num;
    float kilometros,metros;

    do{
        printf ("\nQue deseas hacer?:\n");
        printf ("CONVERTIR DE KILOMETROS A METROS PRESIONA '1' \n");
        printf ("CONVERTIR DE METROS A KILOMETROS '2'\n");
        printf ("Para salir presiona '3'\n");
        scanf("%d",&num);

            switch(num){
                case 1:
                printf("Escribe los kilometros\n");
                scanf("%f",&kilometros);
                metros  = kilometros * 1000;
                printf ("En %.2f kilometros hay %.2f metros ",kilometros,metros);
                break;

                case 2:
                printf("Escribe los metros\n");
                scanf("%f",&metros);
                kilometros  = metros / 1000;
                printf ("%.2f metros equivale a %.2f kilometros ",metros, kilometros);
                break;

                case 3:
                printf("Hasta luego\n");

                default:
                printf("Opcion no valida\n");
                break;
            }
    }while (num != 3 );
    return 0;
}
