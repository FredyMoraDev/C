#include <stdio.h>

int main() {
    int nacimiento, anno = 2022, mesactual = 8, diactual = 3, edad, mes, dia;

    puts("Ingrese su dia  de nacimiento: ");
    scanf("%d", &dia);
    puts("Ingrese su mes en numero de nacimiento: ");
    scanf("%d", &mes);
    printf("Ingrese su a%co de nacimiento: \n", 164);
    scanf("%d", &nacimiento);

    if (nacimiento >= 2018 ){
            printf ("a%co no valido", 164);
    }
        if (nacimiento <=1900){
            printf("a%co no valido", 164);
            }
            if ( nacimiento > 1900 && nacimiento <= 2017 ){
                edad= anno - nacimiento;
                mes = mesactual-mes ;
                dia = dia -diactual ;
               printf("Usted tiene %d a%cos de edad con %d meses y %d dias \n", edad,164,mes,dia);
            }
    return 0;
}
