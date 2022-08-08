#ifndef lib
#define lib
#include <stdio.h>
#include <stdlib.h>
#define F 5
#define C 5

void llenarmatriz(int Matriz[F][C]) {
    for(int i = 0 ; i < F ;i++) {
        for(int j = 0; j < C; j++) {
            printf("\nDame el valor para la Posicion [%d]-[%d] :",i,j);
            scanf("%d",&Matriz[i][j]);
        }
    }
    printf(" \n");
}

void vermatriz(int Matriz[F][C]) {
    printf("matriz \n");
    for(int i = 0; i < F; i++) {
        for(int j = 0; j < C; j++) {
            printf("[ %d ]",Matriz[i][j]);
        }
        printf("\n");
    }
}

void Sumarm(int Matriz1[F][C],int Matriz2[F][C]) {
    int resultado[F][C];
    for(int i = 0; i < F; i++) {
        for(int j = 0; j < C; j++) {
            resultado[i][j]=Matriz1[i][j]+Matriz2[i][j];
        }
    }
    vermatriz(resultado);
}
#endif // lib.h