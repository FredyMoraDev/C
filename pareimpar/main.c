#include <stdio.h>

int main() {
    int numero;
    char *resultado;
    printf("Escribe un n%cmero: \n",163);
    scanf("%d", &numero);

    resultado = ( (numero % 2 == 0)  ? "par" : "impar");

    printf("El n%cmero: %d es  %s\n",163,numero, resultado);


    return 0;
}
