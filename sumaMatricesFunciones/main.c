#include <stdio.h>
#include "lib.h"

int main(){
    int Matriz1[F][C];
    int Matriz2[F][C];
    printf("\tMatriz 1\n");
    llenarmatriz(Matriz1);
    printf("\tMatriz 2\n");
    llenarmatriz(Matriz2);
    vermatriz(Matriz1);
    vermatriz(Matriz2);
    printf("\nLa suma de las matrices es la siguiente:\n");
    Sumarm(Matriz1,Matriz2);
    return 0;
}
