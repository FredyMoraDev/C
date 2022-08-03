#include <stdio.h>

int main() {
    double sueldo= 0;
    float final;
    printf("Hola usuario!\n%cCual es el tu sueldo?:\n",168);
    scanf("%lf",&sueldo);

    if ( sueldo >= 5500)
    {
        printf("Tu aumento sera del 15%\n");
        final= sueldo + (sueldo * .15);
        printf("Tu sueldo final sera  de: \n\t$%.2f pesos",final);
    }
    else{
    printf ("Tu aumento sera del 17%\n");
    final= sueldo + (sueldo * 0.17);
    printf ("Tu sueldo final sera  de: \n\t$%.2f pesos",final);
    }

    return 0;
}

/*Programa que calcula el salario final de un empleado, si su sueldo es superior a 5500 tendra un aumento del 15% si es inferior
 tendra un aumento del 17 porciento*/