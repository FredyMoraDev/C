#include <stdio.h>


int main() {
    float kg,gr,kilogramos,gramos;
    int letra;
    do {
    printf( "\n>>>Convertidor de gramos a kilogramos y biceversa <<<" );
    printf( "\n Si desea convertir de kilogramos a gramos presiona 'A' " );
    printf( "\n Si desea convertir de gramos a kilogramos presione 'B' ");
    printf( "\n Si desea salir presione  'W'");
    printf("\n Elija una operacion: ");
    scanf("%d",&letra);

	letra = getchar();
	switch ( letra )
	{
		case 'A':
        case 'a':
		printf("Ingrese kilogramos a convertir:\n");
	    scanf("%f",&kg);
        kilogramos = 1000 * kg;
        printf("La conversion de kilogramos a gramos es:%.3f g\n",kilogramos);
        break;

		case 'B':
        case 'b':
		printf("Ingrese gramos a convertir:\n");
	    scanf("%f",&gr);
        gramos = gr / 1000;
        printf("La conversion de gramos a kilogramos es %.3f kg\n",gramos);
        break;

		default:
            printf("opcion no valida\n");
            break;


	}
    } while ( letra != 'w' && letra != 'W' );

    return 0;
}
