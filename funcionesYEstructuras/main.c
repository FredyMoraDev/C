#include <stdio.h>
#include "lib.h"

int main(){
    int opc, opc1,opc2,pmayor;
    float n,  a, b,mayor,nmayor = 0,nmenor = 0, N = 0;
    struct persona {
    char nombre [40];
    float promedio;
    } persona[5];

    do {
        printf("_____________________________________________________\n");
        printf("1. Areas de figuras geometricas\n");
        printf("2. Comparacion de numeros \n");
        printf("3. Operaciones basicas matematicas \n");
        printf("4. Mejor promedio de un grupo de alumnos\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion:\n");
        printf("______________________________________________________\n\n");
        scanf("%d", &opc);
        fflush(stdin);

        switch (opc) {
            case 1:
                do {
                    printf("________________Areas_____________________________________\n");
                    printf("1. Circulo \n");
                    printf("2. Cuadrado \n");
                    printf("3. Rectangulo \n");
                    printf("4. Triangulo \n");
                    printf("5. Trapecio \n");
                    printf("6. Salir\n");
                    printf("Seleccione una opcion:\n");
                    printf("______________________________________________________\n\n");
                    scanf("%d", &opc1);
                    fflush(stdin);

                    switch (opc1) {
                        case 1:
                            circulo();
                            break;

                        case 2:
                            cuadrado();
                            break;

                        case 3:
                            rectangulo();
                            break;

                        case 4:
                            triangulo();
                            break;

                        case 5:
                            trapecio();
                            break;

                        case 6:
                            puts("Saliendo de las areas de figuras geometricas");
                            break;

                            default:
                                printf("Opcion no valida\n");

                    }
            }while (opc1 != 6);
            break;

            case 2:

                puts("Cuantos numeros quieres comparar?\n" );
                scanf ("%f", &N);
                for (int i = 1; i <= N; i++){
                    printf ("\nIngresa el valor del numero %d:",i);
                    scanf ("%f", &n);
                    if(i == 1 || mayor < n)
                        nmayor = n;
                    if(i == 1 || nmenor > n)
                        nmenor = n;
                }
                printf ("Valor del numero  mayor: %.2f\n", nmayor);
                printf ("Valor del numero  menor: %.2f\n", nmenor);
            break;

            case 3:
                do {
                    printf ("1 Sumar\n");
                    printf ("2 Restar\n");
                    printf ("3 Multiplicar\n");
                    printf ("4 Dividir\n");
                    printf ("5 Salir\n");
                    printf ("Opcion: ");
                    scanf("%d",&opc2);

                    switch(opc2) {
                        case 1:
                            printf("\nIntroduce a: ");
                            scanf("%f", &a);
                            printf("\nIntroduce b: ");
                            scanf("%f", &b);
                            printf("La suma de %.2f y %.2f es: %.2f\n\n", a, b, suma(a, b));
                            break;

                        case 2:
                            printf("\nIntroduce a: ");
                            scanf("%f", &a);
                            printf("\nIntroduce b: ");
                            scanf("%f", &b);
                            printf("La resta de %.2f y %.2f es: %.2f\n\n", a, b, resta(a, b));
                            break;

                        case 3:
                            printf("\nIntroduce a: ");
                            scanf("%f", &a);
                            printf("\nIntroduce b: ");
                            scanf("%f", &b);
                            printf("La multiplicacion de %.2f y %.2f es: %.2f\n\n", a, b, multiplicar(a, b));
                            break;

                        case 4:
                            puts("Ingrese dividendo: ");
                            scanf("%f", &a);
                            puts("Ingrese divisor: ");
                            scanf("%f", &b);
                            if ( b == 0 )
                                printf( "\n   ERROR: No se puede dividir entre cero.\n" );
                            else
                                printf( "\n   Resultado = %.2f \n", a, b, dividir(a, b));
                            break;

                        case 5:
                            printf("\n   Gracias por usar la calculadora.\n");
                            break;

                        default:
                            printf("Opcion no valida\n");
                            break;
                    }
                }while(opc2 != 5);
                break;

  	        case 4:
                  puts ("Cuantos Alumnos tiene el grupo?");
                  scanf ("%f", &N);
                  for (int i = 0 ; i < N ; i++ ){
                      printf ("Dame el nombre y apellido del alumno %i:\n",i+1);
                      leestring(persona[i].nombre,40);
                      printf ("Dame el promedio del alumno %i :\n",i+1);
                      scanf ("%f", &persona[i].promedio);
                      fflush(stdin);
                  }
                  for (int i = 0; i < 5; ++i)
                      if (persona[i].promedio > mayor){
                          mayor = persona[i].promedio;
                          pmayor = i;
                      }
                  printf ("El alumno con mejor promedio es: %s\n",persona[pmayor].nombre);
                  printf ("Su promedio es: %f\n",persona[pmayor].promedio);
                  break;

                  case 5:
                      puts ("Saliendo del programa");
        }
    }while(opc != 5);
    return 0;
}
