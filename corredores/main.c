#include <stdio.h>
#include "lib.h"
#define N 3

int main() {
     struct corredor{
        char nombre[30];
        int edad;
        char genero[15];
        char club[20]
     }corredor[N];

    int opc;
    for (int i = 0 ; i < N; i++ ){
        puts("Cual es tu nombre:");
    	leestring(corredor[i].nombre,30);
    	puts("Que edad tienes:");
    	scanf ("%d",&corredor[i].edad);
    	puts("que genero eres: masculino o femenino");
    	leestring(corredor[i].genero, 15);
    	puts("Cual es tu club:");
    	leestring(corredor[i].club, 20);
    	printf("");
        }
        do {
        printf ("_____________________________________________________\n");
        printf ("1. Mostrar todos los corredores \n");
    	printf ("2. Mostrar en que categoria participaran y su edad \n");
    	printf ("3. Salir\n");
    	printf ("Seleccione una opcion:\n");
    	printf ("______________________________________________________\n\n");
    	scanf ("%d", &opc);
    	fflush(stdin);

    	switch(opc){
    	    case 1:
                for (int i = 0; i < N; ++i){
                printf ("\n");
                printf ("El nombre del participante %d es:%s \n",i+1,corredor[i].nombre);
                printf ("Su edad es de %d a%cos  es un: %s y viene del club:%s \n",corredor[i].edad,164,corredor[i].genero,corredor[i].club);
                printf ("\n");
            	}
                break;

  	        case 2:
                for (int i = 0; i < N; ++i){
                    if (corredor[i].edad <= 18){
                    printf ("El corredor: %s de %d a%cos de edad participara en la categoria Juvenil \n",corredor[i].nombre,corredor[i].edad,164);
                    }else if ((corredor[i].edad <= 40) && (corredor[i].edad > 18) ){
                      printf ("El corredor: %s de %d  a%cos de edad participara en la categoria SE%cOR \n",corredor[i].nombre,corredor[i].edad,164,165);
                        }else if (corredor[i].edad > 40 ){
                                printf ("El corredor: %s de %d a%cos de edad participara en la categoria VETERANO \n",corredor[i].nombre,corredor[i].edad,164);
                               }
                }
                break;

                case 3:
                    printf ("Saliendo del programa\n");
                    break;

                default:
  	            printf("opcion no valida\n");
  	            break;
    	}
  	     }while(opc != 3);
    return 0;
}
