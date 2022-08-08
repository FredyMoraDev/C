#include <stdio.h>
#include "lib.h"

int main() {
    int opc;

    do {
        printf ("________________Areas_____________________________________\n");
        printf ("1. Circulo \n");
        printf ("2. Cuadrado \n");
        printf ("3. Rectangulo \n");
        printf ("4. Triangulo \n");
        printf ("5. Trapecio \n");
        printf ("6. Salir\n");
        printf ("Seleccione una opcion:\n");
        printf ("______________________________________________________\n\n");
        scanf ("%d", &opc);
        fflush(stdin);

        switch(opc)
        {
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
                printf ("Saliendo...\n");
                break;

            default:
                printf("Opcion no valida\n");
                break;
        }

    }while(opc != 6);

    return 0;
}
