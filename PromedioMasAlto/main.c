#include <stdio.h>
#define N 5
int main() {

    struct persona {
    char matricula [10];
    char nombre [40];
    int edad ;
    float promedio;
    } persona[N];

    float mayor;
    int pmayor, opc;

    for (int i = 0 ; i < N; i++ ){
        printf ("Dame el nombre del alumno %i:\n",i+1);
    	scanf ("%s",&persona[i].nombre);
    	printf ("Dame la matricula del alumno %i:\n",i+1);
    	scanf ("%s",&persona[i].matricula);
    	printf ("Dame la edad del alumno %i :\n",i+1);
    	scanf ("%d", &persona[i].edad);
    	printf ("Dame el promedio del alumno %i :\n",i+1);
    	scanf ("%f", &persona[i].promedio);
    	fflush(stdin);
        }

        do {
        printf ("_____________________________________________________\n");
        printf ("1. Mostrar a todos los alumno\n");
    	printf ("2. Mostrar al alumno con el promedio mas alto\n");
    	printf ("3. Salir\n");
    	printf ("Seleccione una opcion:\n");
    	scanf ("%d", &opc);
    	fflush(stdin);

    	switch(opc){
    	    case 1:
                for (int i = 0; i < N; ++i){
                printf ("_____________________________________________________\n");
                printf ("El nombre del alumno %i es:%s\n",i+1,persona[i].nombre);
                printf ("La matricula del alumno %i es:%s\n",i+1,persona[i].matricula);
                printf ("La edad del alumno %i es:%d\n",i+1,persona[i].edad);
                printf ("El promedio del alumno %i es:%f\n",i+1,persona[i].promedio);
                }
  	        break;

  	        case 2:
                for (int i = 0; i < N; ++i)
                    if (persona[i].promedio > mayor){
                    mayor = persona[i].promedio;
                    pmayor = i;
                    }
                    printf ("El alumno con mejor promedio es: %s\n",persona[pmayor].nombre);
                    printf ("Su matricula es: %s\n",persona[pmayor].matricula);
                    printf ("Su edad es : %d\n",persona[pmayor].edad);
                    printf ("Su promedio es: %f\n",persona[pmayor].promedio);
  	        break;

  	        default:
  	            printf("opcion no valida\n");
  	            break;

    	}
    } while(opc != 3);

    return 0;
}
