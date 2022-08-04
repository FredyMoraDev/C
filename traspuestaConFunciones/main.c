#include <stdio.h>
#define N 5
#define M 5

void llenarMatriz (int matriz[N][M]);
void imprimir (int matriz[N][M]);
void traspuesta(int matriz[N][M]);
int main() {

    int matriz[N][M];

    llenarMatriz(matriz);
    imprimir(matriz);
    traspuesta(matriz);
    return 0;
}

    void llenarMatriz (int matriz[N][M]) {
        int i = 0;
        int j = 0;
            while (i < N){
                while (j < M){
                printf("\nDame datos para la matriz  :");
                scanf ("%d",&matriz[i][j]);
                j++;
            }
            j = 0;
            i++;
            }
    }

    void imprimir (int matriz[N][M]){
        puts("\n\t La matriz original quedo asi:\n\n");
        //imprimir
        int i = 0;
        int j = 0;
        while (i < N){
            while (j < M){
                printf("\t%d",matriz[i][j]);
                j++;
            }
        j = 0;
        puts ("");
        i++;
        }
    }

    void traspuesta(int matriz[N][M]){
        puts("\n");
        puts("\tMatriz Traspuesta\n");
        //imprime traspuesta
        int i = 0;
        int j = 0;
        while (i < N){
            while (j < M){
                printf("\t%d",matriz[j][i]);
                j++;
            }
        j = 0;
        puts ("");
        i++;
        }
    }