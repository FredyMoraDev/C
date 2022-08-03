#include <stdio.h>

int main() {

    const int N = 5;
    const int M = 5;
    int matriz[N][M];

    llenarMatriz(matriz, N,M);
    imprimir(matriz,N,M);
    traspuesta(matriz,N,M);
    return 0;
}

    int llenarMatriz (int matriz[5][5],int N,int M){
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

    int imprimir (int matriz[5][5],int N, int M){
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
    
    int traspuesta(int matriz[5][5],int N,int M){
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