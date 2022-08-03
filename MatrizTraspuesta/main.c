/*programa guarda una matriz de 5 por 5 de numeros enteros. Luego, obtener la Traspuesta de la matriz.
 * El programa pide al usuario guardar los datos de la matriz. Inmediatamente el usuario debe de
 *poder imprimir la matriz con los datos guardados correctamente. Despues, debe
 * de poder crear la traspuesta de la matriz y finalmente imprimir el resultado de
la traspuesta. */
#include <stdio.h>

#define N 5
#define M 5

int main() {

    int matriz[N][M];

    int i = 0;
    int j = 0;

    while (i < N){
        while (j < M){
            printf("\nDame datos para la matriz:  ");
            scanf ("%d",&matriz[i][j]);
            j++;
        }
        j = 0;
        i++;
    }
    puts("\n\t La matriz original quedo asi:\n\n");
    //imprimir
    i = 0;
    j = 0;

    while (i < N){
        while (j < M){
            printf("\t%d",matriz[i][j]);
            j++;
        }
        j = 0;
        puts ("");
        i++;
    }
    puts("\n");
    puts("\tMatriz Traspuesta\n");
    //imprime traspuesta
    i = 0;
    j = 0;

    while (i < N){
        while (j < M){
            printf("\t%d",matriz[j][i]);
            j++;
        }
        j = 0;
        puts ("");
        i++;
    }
    return 0;
}
