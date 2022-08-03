#include <stdio.h>
#define N 3

int main() {
    float arr1[N];
    int num;
    int i = 0;
    float nuevo = 0;
    float buscar = 0;


    printf( "\nArreglo dimension uno\n" );
    for ( i = 0 ; i < N ; i++ ){
        printf ("\nDame valor de los elemento a agregara la posicion %d:  ",i);
        scanf ("%f",&arr1[i]);
    }
    for (i = 0 ; i < N ; i++ ){
        printf("\nLa posicion de los elementos  %d quedo asi : %.2f", i, arr1[i]);
    }

    do{
        printf ("\nQue deseas hacer?:\n");
        printf ("AGREGAR UN ELEMENTO PRESIONA '1': \n");
        printf ("BORRAR UN ELEMENTO PRESIONA '2':\n");
        printf ("BUSCAR UN ELEMENTO PRESIONA '3': \n");
        printf ("PARA SALIR PRESIONA '4':\n");
        scanf ("%d",&num);

        switch (num){
            case 1:
                printf ("Que posicion quieres modificar? \n");
                scanf("%d",&i);
                printf ("Ingresa el nuevo valor\n");
                scanf("%f",&nuevo);
                arr1[i] = nuevo;
                for (i = 0 ; i < N ; i++ ){
                printf("La posicion de los elementos  %d quedo asi : %.2f\n", i, arr1[i]);
                }
            break;

            case 2:
                printf ("Que posicion quieres eliminar? \n");
                scanf("%d",&i);
                arr1[i] = 0;
                for (i = 0 ; i < N ; i++ ){
                printf("La posicion de los elementos  %d quedo asi : %.2f\n", i, arr1[i]);
                }
            break;

            case 3:
                printf ("Que elemento estas buscando? \n");
                scanf("%f",&buscar);
                for (  i = 0 ; i < N ; i++){
                    if (buscar == arr1[i]){
                        printf("El elemento esta en la posicion %d\n", i);
                    }
                }
           break;

            default:
                printf("Opcion no valida\n");
            break;
        }
        }while(num != 4);

    return 0;
}
