#include <stdio.h>

int main(){
    float n1,perimetro,area;
    char letra;

    printf( "\t>>>Area y Perimetro de un Cuadrado <<<\n\n" );
    printf( "\tSi desea optener el perimetro presione A \n" );
    printf( "\tSi desea optener el area presione B \n");
    printf( "\tSi desea el area y el perimetro presione C\n\n");
    printf("\tElija una operacion:\n");

	letra = getchar();
	switch ( letra )
	{
		case 'A':
        case 'a':
            printf("Ingrese largo del cuadrado:\n");
	        scanf("%f",&n1);
            perimetro = 4*n1;
            printf("El perimetro del cuadrado es:%.2f",perimetro);
			break;

		case 'B':
        case 'b':
    		printf("Ingrese largo del cuadrado:\n");
	        scanf("%f",&n1);
            area = n1*n1;
            printf("El area del cuadrado es %.2f",area);
			break;

		case 'C':
        case 'c':
		    printf("Ingrese largo del cuadrado:\n");
	        scanf("%f",&n1);
            perimetro = 4*n1;
            area = n1*n1;
		    printf ("El resultado del perimetro es:\n\t %.2f\n y de area es:\n\t %.2f",perimetro ,area);
			break;

		default:
			printf("Opcion no valida\n");
            break;
	}
    return 0;
}
