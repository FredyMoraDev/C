#include <stdio.h>

int main() {

    const float pi=3.1416;
    float radio,perimetro,area;
       printf ("Ingresa radio\n");
       scanf ("%f",&radio);
       perimetro = (2* pi * radio);
       area = (pi*radio*radio);
       printf ("El perimetro del circulo es:\n\t %.4f\n y su area es:\n\t %.4f",perimetro ,area);
    return 0;
}
