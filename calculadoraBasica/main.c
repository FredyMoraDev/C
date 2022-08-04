#include <stdio.h>

int main() {

    int opcion;
    float n1,n2;

    do{
        printf( "\n   >>>CALCULADORA<<< \n" );
        printf( "\n 1. Sumar dos n%cmeros.", 163 );
        printf( "\n 2. Restar dos n%cmeros.", 163 );
        printf( "\n 3. Multiplicar dos n%cmeros.", 163 );
        printf( "\n 4. Dividir dos n%cmeros.", 163 );
        printf( "\n 5. Salir " );
        printf("\nElija una operacion: ");
        scanf( "%d", &opcion );
        fflush( stdin );

        switch ( opcion ){
        case 1:
            puts("Ingrese primer numero: ");
            scanf("%f",&n1);
            puts("Ingrese segundo numero: ");
            scanf("%f",&n2);
            printf("La suma es:%.2f \n",n1+n2);
            break;

        case 2:
            puts("Ingrese primer numero: ");
            scanf("%f",&n1);
            puts("Ingrese segundo numero: ");
            scanf("%f",&n2);
            printf("La resta es: %.2f\n",n1-n2);
            break;

        case 3:
            puts("Ingrese primer numero: ");
            scanf("%f",&n1);
            puts("Ingrese segundo numero: ");
            scanf("%f",&n2);
            printf("La multiplicacion es:%.2f \n", n1*n2);
            break;

        case 4:
            puts("Ingrese dividendo: ");
            scanf("%f",&n1);
            puts("Ingrese divisor: ");
            scanf("%f",&n2);
                if ( n2 == 0 )
                    printf( "\n   ERROR: No se puede dividir entre cero.\n" );
                else
                    printf( "\n   Resultado = %.2f \n", n1 / n2 );
            break;

        case 5:
            printf("\n   Gracias por usar la calculadora.\n");
            break;

            default:
                printf("Opcion no valida\n");
                break;
        }
    }while(opcion != 5);

    return 0;
}
