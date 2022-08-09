#include <stdio.h>
#include <string.h>
#define N 100
void calcularSignoZodiacal(int diaNacimiento, int mesNacimiento, char signo[N]);

int main() {
    char signo[N] = "";
    puts("\tSigno zodiacal");
    int mes, dia;
    printf("Ingresa t%c mes de nacimiento [1-12]: \n",163);
    scanf("%d", &mes);
    printf("Ingresa t%c d%ca de nacimiento [1-31]: \n",163,161);
    scanf("%d", &dia);
    calcularSignoZodiacal(dia, mes, signo);
    printf("T%c signo Zodical es: %s\n",163, signo);
}

void calcularSignoZodiacal(int diaNacimiento, int mesNacimiento, char signo[N]){
    switch (mesNacimiento){
        case 1:
            if (diaNacimiento <= 20){
                strcpy(signo, "Capricornio");
            }else{
                strcpy(signo, "Acuario");
            }
            break;
        case 2:
            if (diaNacimiento <= 18){
                strcpy(signo, "Acuario");
            }else{
                strcpy(signo, "Piscis");
            }
            break;
        case 3:
            if (diaNacimiento <= 20){
                strcpy(signo, "Piscis");
            }else{
                strcpy(signo, "Aries");
            }
            break;
        case 4:
            if (diaNacimiento <= 20){
                strcpy(signo, "Aries");
            }else{
                strcpy(signo, "Tauro");
            }
            break;
        case 5:
            if (diaNacimiento <= 21){
                strcpy(signo, "Tauro");
            }else{
                strcpy(signo, "Geminis");
            }
            break;
        case 6:
            if (diaNacimiento <= 21){
                strcpy(signo, "Geminis");
            }else{
                strcpy(signo, "Cancer");
            }
            break;
        case 7:
            if (diaNacimiento <= 22){
                strcpy(signo, "Cancer");
            }else{
                strcpy(signo, "Leo");
            }
            break;
        case 8:
            if (diaNacimiento <= 23){
                strcpy(signo, "Leo");
            }else{
                strcpy(signo, "Virgo");
            }
            break;
        case 9:
            if (diaNacimiento <= 23){
                strcpy(signo, "Virgo");
            }else{
                strcpy(signo, "Libra");
            }
            break;
        case 10:
            if (diaNacimiento <= 23){
                strcpy(signo, "Libra");
            }else{
                strcpy(signo, "Escorpio");
            }
            break;
        case 11:
            if (diaNacimiento <= 22){
                strcpy(signo, "Escorpio");
            }else{
                strcpy(signo, "Sagitario");
            }
            break;
        case 12:
            if (diaNacimiento <= 21){
                strcpy(signo, "Sagitario");
            }else{
                strcpy(signo, "Capricornio");
            }
            break;
    }
}
