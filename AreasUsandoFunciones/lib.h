#ifndef lib
#define lib
#include <stdio.h>
#include <stdlib.h>

float circulo(){
    const double pi = 3.1416;
    float area,radio;
    printf ("Dame el radio:\n");
    scanf("%f",&radio);
    printf("El area del circuo es:%.2f\n",area = (radio*radio)*pi);
    return area;
}


float cuadrado(){
    float area,lado;
    printf ("Dame el lado:\n");
    scanf("%f",&lado);
    printf("El area del cuadrado es:%.2f\n",area = (lado*lado));
    return area;
}

float rectangulo(){
    float area,base,altura;
    printf ("Dame la base:\n");
    scanf("%f",&base);
    printf ("Dame la altura:\n");
    scanf ("%f",&altura);
    printf("El area del rectangulo es:%.2f\n",area = base*altura);
    return area;
}

float triangulo(){
    float area,base,altura;
    printf ("Dame la base:\n");
    scanf("%f",&base);
    printf ("Dame la altura:\n");
    scanf ("%f",&altura);
    printf("El area del triangulo es:%.2f\n",area = (base*altura)/2);
    return area;
}

float trapecio(){
    float area,base,base2,altura;
    printf ("Dame la base 1:\n");
    scanf("%f",&base);
    printf ("Dame la base 2:\n");
    scanf("%f",&base2);
    printf ("Dame la altura:\n");
    scanf ("%f",&altura);
    printf("El area del trapecio es:%.2f\n",area = ((base+base2)*altura)/2);
    return area;
}
#endif // lib.h