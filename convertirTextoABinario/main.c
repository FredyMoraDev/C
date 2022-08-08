#include <stdio.h>
#include <string.h>

char *itoa(int value, char *result, int base);
int leestring (char *cad, int n);

int main() {
    char texto[100];
    puts("Introduce el texto a convertir: ");
    leestring(texto, 100);
    printf("En texto es: %s\n", texto);
    char *relleno = "00000000";
    // El número que irá tomando cada letra
    int decimal = 0;
    char cadena[9];
    int i = 0;
    printf("En binario es: \n");
    while (texto[i] != '\0') {
        decimal = (long) texto[i];// Obtener valor ASCII del carácter
        // Convertir y almacenar el binario en "cadena"
        itoa(decimal, cadena, 2);
        // Diferencia para saber si no mide 8
        int diferencia = 8 - (int) strlen(cadena);
        // Imprimir. El %*.*s es para rellenar la cadena con ceros a la izquierda
        printf("%*.*s%s ", diferencia, diferencia, relleno, cadena);
        i++;
    }
}

/*Funcion que hace la conversuion de un string a un int*/
char *itoa(int value, char *result, int base) {
    // check that the base if valid
    if (base < 2 || base > 36) {
        *result = '\0';
        return result;
    }
    char *ptr = result, *ptr1 = result, tmp_char;
    int tmp_value;
    do{
        tmp_value = value;
        value /= base;
        *ptr++ = "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz"[35 +(tmp_value - value * base)];
    } while (value);

    // Apply negative sign
    if (tmp_value < 0) *ptr++ = '-';
    *ptr-- = '\0';
    while (ptr1 < ptr) {
        tmp_char = *ptr;
        *ptr-- = *ptr1;
        *ptr1++ = tmp_char;
    }
    return result;
}

int leestring (char *cad, int n) {
    int i, c;
    c=getchar();
    if (c == EOF) {
        cad[0] = '\0';
        return 0;
    }
    if (c == '\n')
        i = 0;
    else {
        cad[0] = c;
        i = 1;
    }
    for (; i < n-1 && (c=getchar())!=EOF && c!='\n';
           i++)
        cad[i] = c;
    cad[i] = '\0';
    if (c != '\n' && c != EOF)
        while ((c = getchar()) != '\n' && c != EOF);
    return 1;
}