#include <stdio.h>

int main() {
    int a;
    printf("Hola usuario,Introduzca un a%co:\n",164);
    scanf("%d",&a);

    if ( a % 4 == 0 && a % 100 != 0 || a % 400 == 0 ){
        printf( "\nEl a%co %d ES BISIESTO",164,a);
        }else{
        printf( "\nEl a%co %d NO ES BISIESTO",164,a);
        }
    return 0;
}
/*Son bisiestos todos los años múltiplos de 4, excepto aquellos que son múltiplos de 100 pero no de 400.
Por ejemplo, años múltiplos de 4 son: 4, 8, 20, 100, 200, 400, 1000, 2000, 2100, 2800...
De ellos, años múltiplos de 100 pero no de 400 son:100, 200, 1000, 2100...
Así que, de los años enumerados, bisiestos son: 4, 8, 20, 400, 2000, 2800...*/