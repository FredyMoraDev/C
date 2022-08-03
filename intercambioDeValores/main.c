/*Programa que iniciala dos variables numericos e intercambia los val￾ores de las variables.*/
#include <stdio.h>

int main() {
    int aux, v1, v2;

    printf("Introduzca el primer valor:\n " );
    scanf("%d", &v1 );
    printf("Introduzca el segundo valor:\n " );
    scanf("%d", &v2 );

    aux = v1;
    v1 = v2;
    v2 = aux;
    printf( "Ahora, el primer valor es = %d y el valor del segundo quedo como = %d\n", v1,v2 );

    return 0;
}
