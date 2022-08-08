#include <stdio.h>

int main() {
    float sueldo10,sueldo7,sueldo5,sueldo3,sueldof,sueldom;
    int a;
    printf("Cuantos a%cos tiene trabajando en la empresa?\n ",164);
    scanf("%d",&a);

    if ( a >= 10 ){
        sueldo10 = ((120000*0.1)+(120000));
        sueldof = (sueldo10) - ((sueldo10*15)/100);
        sueldom = sueldof/12;
        printf("Usted tiene mas de 10 a%cos trabajando aqui\n tiene un aunmento del 10 porciento ,su nuevo sueldo anual sera de :$ %.2f\n",164,sueldo10);
        printf("Ya descontando impuestos su sueldo final es :$%.2f\nY mensualmente su sueldo sera de:$ %.2f",sueldof,sueldom);
                }
            if (a < 10 && a >= 5){
            sueldo7 = ((120000*0.07)+(120000));
            sueldof = (sueldo7) - ((sueldo7*15)/100);
            sueldom = sueldof/12;
            printf("Usted tiene mas de 5 a%cos trabajando aqui,pero menos de 10\n tiene un aunmento del 7 porciento ,su nuevo sueldo anual sera de :$ %.2f\n",164,sueldo7);
            printf("Ya descontando impuestos su sueldo final es :$%.2f\n y mensualmente su sueldo sera de:$ %.2f",sueldof,sueldom);
                }
                if (a < 5 && a >= 3){
                sueldo5 = ((120000*0.05)+(120000));
                sueldof = (sueldo5) - ((sueldo5*15)/100);
                sueldom = sueldof/12;
                printf("Usted tiene mas de 3 a%cos trabajando aqui,pero menos de 5 \n tiene un aunmento del 5 porciento ,su nuevo sueldo anual sera de :$ %.2f\n",164,sueldo5);
                printf("Ya descontando impuestos su sueldo final es :$%.2f\n y mensualmente su sueldo sera de:$ %.2f",sueldof,sueldom);
                }
                    if (a < 3 ){
                    sueldo3 = ((120000*0.03)+(120000));
                    sueldof = (sueldo3) - ((sueldo3*15)/100);
                    sueldom = sueldof/12;
                    printf("Usted tiene menos de 3 a%cos trabajando aqui,tiene un aunmento del 3 porciento\n su nuevo sueldo anual sera de :$ %.2f\n",164,sueldo3);
                    printf("Ya descontando impuestos su sueldo final es :$%.2f\n y mensualmente su sueldo sera de:$ %.2f",sueldof,sueldom);
                }
    return 0;
}
