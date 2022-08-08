#include <stdio.h>

int main() {
    char array[10][10];
    int i = 0;

    while (i<10){
        for (int j = 0 ; j < 10; j++){
            array[i][j] ='*';
        }
        i++;
        }

    array[4][8] = 'E';
    array[1][1] = 'S';
    for (int i = 0; i < 10 ;i++){
        for (int j = 0;  j < 10 ; j++){
            printf("%c", array [i][j]);
            }
            printf ("\n");
            }
    return 0;
}
