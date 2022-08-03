#include <stdio.h>

int main() {
    float lado1, lado2, lado3, area = 0, perimetro = 0;
    printf("Ingresar los 3 lados del triangulos a evaluar \n");
    printf("Lado 1:\n ");
    scanf("%f",&lado1);
    printf("Lado 2:\n ");
    scanf("%f",&lado2);
    printf("Lado 3:\n");
    scanf("%f",&lado3);

    if(lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2){
        printf("\nLos n%cmeros ingresados si forman un triangulo!\n",163);
        if (lado1 == lado2  &&  lado1 == lado3  && lado2 == lado3){
            printf("Es un triangulo Equilatero!\n");
        }
        else {
            if(lado1 == lado2 && lado2 && lado3 && lado1 == lado3){
                printf("El triangulo es isosceles!\n");
            }
            else {
                printf("El triangulo es escaleno!\n");
            }
        }
    }
    else {
        printf("\nLos datos ingresados no forman un triangulo!");
    }


    return 0;
}
