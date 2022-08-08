#include <stdio.h>
#define N 10

void pedirnumeros(int A[50]);
void ordenarAscendente(int A[50]);
void ordenarDescendiente(int A[50]);

int main(){
    int A[50];
    pedirnumeros(A);
    ordenarAscendente(A);
    ordenarDescendiente(A);
    return 0;
}

void pedirnumeros(int A[50]){
    for (int i = 0 ; i < N ; i++){
        printf("Dame n%cmero %d:\n",163,i+1);
        scanf("%d",&A[i]);
        }
        for (int i = 0 ; i < N ; i++){
            printf ("Los n%cmeros son:%d\n",163,A[i]);
        }
}

void ordenarAscendente(int A[50]){
    int aux;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1; j++) {
            if (A[j] > A[j + 1]) {
                aux = A[j];
                A[j] = A[j + 1];
                A[j + 1] = aux;
            }
        }
    }
    printf ("\nLos n%cmeros de manera ascendente:\n",163);
    for (int i = 0; i < N; i++) {
        printf("\n%d", A[i]);
    }
}

void ordenarDescendiente(int A[50]){
    int aux;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1; j++) {//aqui se cambia el signo para ordenar
             if (A[j] < A[j + 1]) {
                 aux = A[j];
                 A[j] = A[j + 1];
                 A[j + 1] = aux;
             }
        }
    }
    printf ("\nLos n%cmeros de manera Descendiente:\n",163);
    for (int i = 0; i < N; i++) {
        printf("\n%d", A[i]);
    }
}