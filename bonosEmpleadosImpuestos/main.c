#include <stdio.h>
#include "lib.h"

#define Montecristo 3
int main(){
    struct empleado{
    char nombre[30];
    int antiguedad;
    float sueldohr;
    float horasmes;
    }empleado[Montecristo];

    int opc;
    float sbruto,impuestos,sueldon,bonoano,sueldomes;

    for (int i = 0 ; i < Montecristo; i++ ){
            printf("Cual es el nombre del empleado %d :?\n", i+1);
            leestring(empleado[i].nombre,30);
            puts("Que antiguedad tiene en la empresa: ?");
            scanf ("%d",&empleado[i].antiguedad);
            puts("Cuanto cobra por hora: ?");
            scanf("%f",&empleado[i].sueldohr);
            puts("Cuantas horas trabaja al mes: ?");
            scanf("%f",&empleado[i].horasmes);
    	printf("____________________________________\n");
    }
        do {
            printf ("_____________________________________________________\n");
            printf ("1. Mostrar todos los empleados \n");
            printf ("2. Mostrar el sueldo en bruto\n");
            printf ("3. Mostrar el bono por a%cos trabajando\n",164);
            printf ("4. Mostrar el total de impuestos descontados \n");
            printf ("5. Mostrar el sueldo neto \n");
            printf ("6. Salir\n");
            printf ("Seleccione una opcion:\n");
            printf ("______________________________________________________\n\n");
            scanf ("%d", &opc);
            fflush(stdin);

        	switch(opc){

    	    case 1:
    	        for (int i = 0; i < Montecristo ; ++i){
                    printf ("\n");
                    printf ("El nombre del empleado %d es:%s \n",i+1,empleado[i].nombre);
                    printf ("Su antiguedad en la empresa es de %d a%cos\n",empleado[i].antiguedad,164);
                    printf ("Su sueldo por hora es de: $%.2f \n",empleado[i].sueldohr);
                    printf ("Su sueldo del mes es de: $%.2f \n",empleado[i].sueldohr*empleado[i].horasmes);
                    printf ("Su bono anual es de: $%.2f \n",bonoano = empleado[i].antiguedad*60.5);
                    printf ("\n");
                }
  	        break;

  	        case 2:
  	            for (int i = 0; i < Montecristo; ++i){
                      sbruto = ((empleado[i].sueldohr*empleado[i].horasmes)+(empleado[i].antiguedad*60.5));
                      printf ("El sueldo bruto del empleado %s es de : $%.2f\n",empleado[i].nombre,sbruto);
  	            }
                break;

            case 3:
  	            for (int i = 0; i < Montecristo; ++i){
                      bonoano = empleado[i].antiguedad*60.5;
                      printf ("El bono por a%cos trabajados del empleado %s es de : $%.2f\n",164,empleado[i].nombre,bonoano);
  	            }
                break;

            case 4:
                for (int i = 0; i < Montecristo; ++i){
                    sueldomes = (empleado[i].sueldohr*empleado[i].horasmes)+(empleado[i].antiguedad*60.5);
                    impuestos = (sueldomes*21)/100;
                    printf ("Al empleado %s se le descontaran de su salario $%.2f de impuestos \n",empleado[i].nombre,impuestos);
                }
                break;
            case 5:
                for (int i = 0; i < Montecristo; ++i){
                        sbruto = ((empleado[i].sueldohr*empleado[i].horasmes)+(empleado[i].antiguedad*60.5));
                        sueldomes = (empleado[i].sueldohr*empleado[i].horasmes)+(empleado[i].antiguedad*60.5);
                        impuestos = (sueldomes*21)/100;
                        sueldon = impuestos+sbruto;
                        printf ("El sueldo NETO del empleado %s es de: $%.2f \n",empleado[i].nombre,sueldon);
                }
                break;
            case 6:
                printf ("\nSaliendo del programa\n");

                default:
                printf("Opcion no valida\n");
                break;
        }
        }while(opc != 6);
    	return 0;
        }



