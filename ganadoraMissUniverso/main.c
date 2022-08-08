#include <stdio.h>
#include "lib.h"
#define N 10
int main(){
    struct Missuniverso{
        int id[10];
        char apellido[30];
        char nombre[30];
        float inteligencia;
        float belleza;
        float traje;
        float total;
    }Missuniverso[N];

    int opc,indice,indice2;
    float mayor,menor;

    for (int i = 0 ; i < N; i++ ){
        printf("Cual es el nombre de la participante %d?: \n",i+1);
        leestring(Missuniverso[i].nombre,30);
        printf("Cual es el apellido de la participante %d?: \n",i+1);
        leestring(Missuniverso[i].apellido,30);
        printf("Cual es el ID de la participante %d?: \n",i+1);
        leestring(Missuniverso[i].id,10);
        printf("Cual es el puntaje de traje de ba%co de la participante %d?: \n",164,i+1);
        scanf ("%f",&Missuniverso[i].traje);
        printf("Cual es el puntaje de inteligencia de la participante %d?: \n",i+1);
        scanf ("%f",&Missuniverso[i].inteligencia);
        printf("Cual es el puntaje de belleza de la participante %d?: \n",i+1);
        scanf("%f",&Missuniverso[i].belleza);
        printf("-----------------------------------------------------------------------\n");
        Missuniverso[i].total = (Missuniverso[i].traje + Missuniverso[i].belleza + Missuniverso[i].inteligencia);
    }

    do {
        printf ("_____________________________________________________\n");
        printf ("1.Mostrar a todas las participantes \n");
        printf ("2.Mostrar a participante con mayor puntuacion \n");
        printf ("3.Mostrar a participante con menor puntuacion \n");
        printf ("4.Salir\n");
        printf ("Seleccione una opcion:\n");
        printf ("______________________________________________________\n\n");
        scanf ("%d", &opc);
        fflush(stdin);

        switch(opc){
            case 1:
                for (int i = 0 ; i < N; i++ ){
                    printf("\tEl nombre y apellido de la participante %d es: %s %s\n",i+1,Missuniverso[i].nombre,Missuniverso[i].apellido );
                    printf("\tEl ID de la participante %d es: %s \n",i+1,Missuniverso[i].id);
                    printf("\tEl puntaje total de la participante %d es: %.2f\n",i+1,Missuniverso[i].total);
                    printf("__________________________________________________________________________________\n\n");
                }
                break;

            case 2:
                mayor = Missuniverso[0].total;
                for (int i = 0 ; i < N; i++ ){
                    if(Missuniverso[i].total > mayor){
                        mayor = Missuniverso[i].total;
                        indice = i;
                    }}
                printf("\tEl nombre de la participante  con la puntuacion mas alta es: %s %s \n",Missuniverso[indice].nombre,Missuniverso[indice].apellido);
                printf("\tEl puntaje total de la participante es: %.2f\n",Missuniverso[indice].total);
                printf("\tEl ID de la participante : %s \n",Missuniverso[indice].id);
                printf("__________________________________________________________________________________\n\n");

                break;

            case 3:
                menor = mayor;
                for (int i = 0 ; i < N; i++ )
                    if(Missuniverso[i].total < menor){
                        menor = Missuniverso[i].total;
                        indice2 = i;
                        printf("\tEl nombre de la participante  con la puntuacion mas baja es: %s %s \n",Missuniverso[indice2].nombre,Missuniverso[indice2].apellido);
                        printf("\tEl puntaje total de la participante es: %f\n",Missuniverso[indice2].total);
                        printf("\tEl ID de la participante : %s \n",Missuniverso[indice2].id);
                        printf("__________________________________________________________________________________\n\n");
                    }
                break;

            case 4:
                puts("Saliendo del programa...");
                break;

            default:
                puts("opcion no valida");
                break;
        }
    }while(opc != 4);
    return 0;
}
