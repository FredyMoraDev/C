#include <stdio.h>

int main() {
    int fila,columna,num;
    char asientos [10][8] ={0};

    do{
        printf( "\n\t CINE IBERO " );
        printf( "\n Elije una opcion en donde en los asientos 0 es libre, 1 reservado y 2 vendido\n" );
        printf( "\n 1. Ver asientos  ");
        printf( "\n 2. Reservar asientos");
        printf( "\n 3. Comprar asiento");
        printf( "\n 4. Salir\n");
        scanf("%d",&num);

        switch ( num ){
            case 1:
                printf("\n-----------------------------------------");
                printf("\n              PANTALLA\n");
                printf("-----------------------------------------\n");
                printf("     0    1    2    3    4    5    6    7 \n");
                printf(" 0  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]\n",asientos[0][0],asientos[0][1],asientos[0][2],asientos[0][3],asientos[0][4],asientos[0][5],asientos[0][6],asientos[0][7]);
                printf(" 1  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]\n",asientos[1][0],asientos[1][1],asientos[1][2],asientos[1][3],asientos[1][4],asientos[1][5],asientos[1][6],asientos[1][7]);
                printf(" 2  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]\n",asientos[2][0],asientos[2][1],asientos[2][2],asientos[2][3],asientos[2][4],asientos[2][5],asientos[2][6],asientos[2][7]);
                printf(" 3  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]\n",asientos[3][0],asientos[3][1],asientos[3][2],asientos[3][3],asientos[3][4],asientos[3][5],asientos[3][6],asientos[3][7]);
                printf(" 4  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]\n",asientos[4][0],asientos[4][1],asientos[4][2],asientos[4][3],asientos[4][4],asientos[4][5],asientos[4][6],asientos[4][7]);
                printf(" 5  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]\n",asientos[5][0],asientos[5][1],asientos[5][2],asientos[5][3],asientos[5][4],asientos[5][5],asientos[5][6],asientos[5][7]);
                printf(" 6  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]\n",asientos[6][0],asientos[6][1],asientos[6][2],asientos[6][3],asientos[6][4],asientos[6][5],asientos[6][6],asientos[6][7]);
                printf(" 7  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]\n",asientos[7][0],asientos[7][1],asientos[7][2],asientos[7][3],asientos[7][4],asientos[7][5],asientos[7][6],asientos[7][7]);
                printf(" 8  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]\n",asientos[8][0],asientos[8][1],asientos[8][2],asientos[8][3],asientos[8][4],asientos[8][5],asientos[8][6],asientos[8][7]);
                printf(" 9  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]  [%d]\n",asientos[9][0],asientos[9][1],asientos[9][2],asientos[9][3],asientos[9][4],asientos[9][5],asientos[9][6],asientos[9][7]);
                break;

            case 2:
                printf("\tReserva de asientos");
                printf("\nEscribe la fila: ");
                scanf("%d", &fila);
                printf("\nEscribe la columna: ");
                scanf("%d", &columna);
                if (asientos[fila][columna] != 1 && asientos[fila][columna] != 2){
                    asientos[fila][columna] = 1;
                }else{
                    printf("Asiento ocupado,elige otro\n");
                }
                break;

            case 3:
                printf("\tPagar  asientos");
                printf("\nEscribe la fila: ");
                scanf("%d", &fila);
                printf("\nEscribe la columna: ");
                scanf("%d", &columna);
                if (asientos[fila][columna] != 1 && asientos[fila][columna] != 2){
                    asientos[fila][columna] = 2;
                }else{
                    printf("Asiento ocupado,elige otro\n");
                }
                break;
            case 4:
                printf("\tSalir");
                break;
        }
    }while (num != 4);
    return 0;
}

