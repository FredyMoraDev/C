#include <stdio.h>
#define N 10 /*N equivale al numero de elementos que se van a ordenar*/

int main(){
    /*insertando los datos*/
    int min,temporal,array[N];
    printf("Por favor ingresa diez numeros:\n");

    for(int i = 0; i < N ; i++){
        printf("n%cmero [ %d ] = ", 163, i+1);
        scanf("%d",&array[i]);
    }
    printf("\n");

    /*imprimiendo los numeros*/
    printf("Datos ingresados:  \n");
    for(int i = 0; i < N; i++)
        printf("%5d",array[i]);
        printf("\n");

    /*ordenando los numeros de menor a mayor*/
    for(int i = 0; i < N-1; i++){
        min = i;
        for(int j = i+1; j < N ;j++)
            if( array[min] > array[j])
                min = j;
                temporal = array[i];
                array[i] = array[min];
                array[min] = temporal;
    }
    /*imprimiendo numeros ordenados */
    printf("De menor a mayor:  \n");
    for(int i=0;i<N;i++)
        printf("%5d",array[i]);
        printf("\n");

    /*ordenando los numeros de mayor a menor*/
    for(int i = 0; i < N-1; i++){
        min = i;
        for(int j = i+1; j < N ;j++)
            if( array[min] < array[j])
                min = j;
                temporal = array[i];
                array[i] = array[min];
                array[min] = temporal;
    }

    /*imprimiendo numeros ordenados de mayor a menor  */
    printf("De mayor a menor:  \n");
    for(int i=0;i<N;i++)
        printf("%5d",array[i]);
        printf("\n");

    return 0;
}
