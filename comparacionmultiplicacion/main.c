#include <stdio.h>

int main() {
     float n1,n2,mul,equiv;

        printf("Hola usuario,%cCu%cl es el primer n%cmero%c:\n",168,160,163,63);
        scanf("%f",&n1);
        printf("%cCu%cl es el segundo n%cmero%c:\n",168,160,163,63);
        scanf("%f",&n2);
        mul = n1 * n2;
        equiv = (n1 >= n2 ? n1 : n2);
        printf("El primer n%cmero escrito es:\n\t %.3f\n",163,n1);
        printf("El segundo n%cmero escrito es:\n\t %.3f\n",163,n2);
        printf("El n%cmero mayor  es:\n\t %f\n",163,equiv);
        printf("La multiplicaci%cn de ambos es:\n\t %f\n",162,mul);

    return 0;
}
