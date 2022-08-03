#include <stdio.h>
#include <stdlib.h>

int main() {
    system("COLOR 2"); /*Cambia el color de la letra de la consola*/

    for(int ch = 65 ; ch <= 122; ch++ ) {
        printf("ASCII valor = %d, Caracter = %c\n", ch , ch );
    }
    for (int i = 130; i<=225; i++){
        printf("Los caracteres especiales son: %c, y su valor en ASCII es = %d \n" ,i,i);
    }


    return 0;
}
