#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    int tamano;
    int i = 0, j;

    printf("Ingresa una frase sin dejar espacios:\n");
    scanf("%s",&cadena);
    printf("La frase que introduciste es:%s\n",cadena);
     while(cadena[i]!='\0'){
        i++;
    }
    printf("La cadena al reves es: \n");
    for (j = i-1; j >= 0; j--){
        printf("%c", cadena[j]);
    }
    tamano = strlen(cadena);
    printf("\nLa cadena contiene %d caracteres",tamano);
    return 0;
}
