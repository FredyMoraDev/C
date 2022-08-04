#include <stdio.h>
#include "lib.h"
#define N 4

struct consola{
    char nombre[20];
    float precio;
}consola[N];

int main(){

    float mayor;
    int pmayor, opc;

    for (int i = 0 ; i < N; i++ ){
        printf ("Dame el nonmbre de la consola %i sin dejar espacios: \n",i+1);
        scanf ("%s",&consola[i].nombre);
        leestring(consola[20].nombre, i);
        printf ("Dame el precio de la consola %i: \n",i+1);
        scanf ("%f",&consola[i].precio);
    }
    do {
        printf ("_____________________________________________________\n");
        printf ("1. Mostrar todas las consolas \n");
        printf ("2. Mostrar la consola mas cara\n");
        printf ("3. Mostrar la consola con el precio mas bajo\n");
        printf ("4. Salir\n");
        printf ("Seleccione una opcion:\n");
        scanf ("%d", &opc);
        fflush(stdin);

        switch(opc){
            case 1:
                for (int i = 0; i < N; ++i){
                    printf ("_____________________________________________________\n");
                    printf ("El nombre de la consola %i es:%s\n",i+1,consola[i].nombre);
                    printf ("El precio de la consola es %i es: $%.2f\n",i+1,consola[i].precio);
                }
                break;

            case 2:
                for (int i = 0; i < N; ++i)
                    if (consola[i].precio > mayor){
                        mayor = consola[i].precio;
                        pmayor = i;
                    }
                printf ("La consola mas cara es: %s\n",consola[pmayor].nombre);
                printf ("Su precio es: $%.2f\n",consola[pmayor].precio);
                break;

            case 3:
                for (int i = 0; i < N; ++i)
                    if (consola[i].precio < mayor){
                        mayor = consola[i].precio;
                        pmayor = i;
                    }
                printf ("La consola con el precio mas bajo es: %s\n",consola[pmayor].nombre);
                printf ("Su precio es: $%.2f\n",consola[pmayor].precio);
                break;

            default:
                puts("Opcion no valida\n");
                break;
        }
    } while(opc != 4);
    return 0;
}

