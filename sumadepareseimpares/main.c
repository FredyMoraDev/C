#include <stdio.h>
#define N 10
int main() {
    int array[N], sumapar = 0 ,sumaimpar = 0,impar = 0,par = 0,promedio= 0;

    for ( int i = 0 ; i < N ; i++ ){
        printf( "Introduzca el n%cmero %d entero: \n",163, i+1 );
        scanf( "%d", &array[i]);
        if ( array[i]  % 2 == 0 ){
            par = par + 1;
            sumapar = sumapar + array[i];
        }else {
                impar= impar + 1;
                sumaimpar = sumaimpar + array[i];
    }
    }
    promedio = sumaimpar/impar;
    printf( "\nHaz introducido %d n%cmeros pares y %d n%cmeros impares\n",par,163,impar,163);
    printf( "\nLa suma de los n%cmeros pares es: %d y de los impares es: %d \n",163, sumapar,sumaimpar);
    printf( "\nEl promedio de los n%cmeros  impares es: %d \n",163, promedio);
    return 0;
}
