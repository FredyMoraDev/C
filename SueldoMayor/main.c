#include <stdio.h>
#include "lib.h"

#define N 5
int main(){
    struct empleado{
        char nombre[30];
        int edad;
        float sueldo;
    }empleado[N];

    int opc;
    float mayor,menor;
    int indice,menor2;
    for (int i = 0 ; i < N; i++ ){
        puts("Cual es tu nombre: ");
        leestring(empleado[i].nombre,30);
        puts("Que edad tienes: ");
        scanf ("%d",&empleado[i].edad);
        puts("Cual es tu sueldo: ");
        scanf("%f",&empleado[i].sueldo);
        printf("_______________________\n");
    }
        do {
            printf ("_____________________________________________________\n");
            printf ("1. Mostrar todos los empleados \n");
            printf ("2. Mostrar el empleado con mayor sueldo \n");
            printf ("3. Mostrar el empleado con menor sueldo \n");
            printf ("4. Salir\n");
            printf ("Seleccione una opcion:\n");
            printf ("______________________________________________________\n\n");
            scanf ("%d", &opc);
            fflush(stdin);

            switch(opc)
            {
                case 1:
                    for (int i = 0; i < N; ++i){
                        printf ("_____________________________________________________\n");
                        printf ("El nombre del empleado %d es:%s \n",i+1,empleado[i].nombre);
                        printf ("Su edad es de %d a%cos\n",empleado[i].edad,164);
                        printf ("Su sueldo es de:$ %.2f \n",empleado[i].sueldo);
                        printf ("_____________________________________________________\n");
                    }
                    break;

                case 2:
                    for (int i = 0; i < N; ++i){
                        if (empleado[i].sueldo > mayor){
                            mayor = empleado[i].sueldo;
                            indice = i;
                        }
                    }
                        printf ("_____________________________________________________\n");
                        printf ("El empleado con mayor salario es: %s\n",empleado[indice].nombre);
                        printf ("Su salario es:$%.2f\n",empleado[indice].sueldo);
                        printf ("Su edad es : %d\n",empleado[indice].edad);
                        printf ("_____________________________________________________\n");
                    break;

                case 3:
                    menor = mayor;
                    for (int i = 0; i < N; ++i){
                        if ( menor > empleado[i].sueldo){
                            menor = empleado[i].sueldo;
                            menor2 = i;
                        }
                    }
                        printf ("_____________________________________________________\n");
                        printf ("El empleado con menor salario es: %s\n",empleado[menor2].nombre);
                        printf ("Su salario es:$%.2f\n",empleado[menor2].sueldo);
                        printf ("Su edad es : %d\n",empleado[menor2].edad);
                        printf ("_____________________________________________________\n");
                    break;

                case 4:
                    printf ("Saliendo del programa\n");
                    break;

                default:
                    printf("Opcion no valida\n");
                    break;
        }
    }while(opc != 4);
    return 0;
}

