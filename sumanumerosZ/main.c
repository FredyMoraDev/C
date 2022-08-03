#include <stdio.h>

int main() {
    char letra;
    int n, suma = 0, aux = 0 ;

    printf("Sumara todos los n%cmeros hasta teclees  'Z' \n",163);
    do{
        printf("\nIngresa un n%cmero: ",163);
        scanf("%d", &n);
        scanf("%c", &letra);
        if(letra != 'Z' && letra != 'z'){
            suma += n;
            aux++;
        }
    }while(letra != 'Z' && letra != 'z');
        printf("\nIngresaste %d n%cmeros y la suma de estos es: %d",aux,163, suma);

    return 0;
}