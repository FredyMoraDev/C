#include <stdio.h>

int main() {
    int horas,segundos,minutos;

        printf("Ingresa el numero de horas\n");
        scanf("%d",&horas);
            minutos = horas * 60;
            segundos = horas * 3600;
            printf("En %d horas hay %d minutos y hay %d segundos \n",horas,minutos,segundos);
    return 0;
}
