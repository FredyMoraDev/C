#include <stdio.h>
#include "lib.h"
#define N 3

int main(){
    struct Alumnos{
    char nombre[30];
    char apellido[30];
    char cedula[20];
    int edad;
    int telefono;
    float promedio;
    }AlumnosMetodologia[N];

    int opc;
    int pmayor,segundo2;
    float mayor,segundo;
    do {
        printf ("_____________________________________________________\n");
        printf ("1. Llenar datos del grupo \n");
        printf ("2.Mostrar todos los alumnos de la materia de Metodologia De La Programacion \n");
    	printf ("3.Mostrar los mejores dos promedios del grupo \n");
    	printf ("4.Salir\n");
    	printf ("Seleccione una opcion:\n");
    	printf ("______________________________________________________\n\n");
    	scanf ("%d", &opc);
    	fflush(stdin);

    	switch(opc){
    	 case 1:
    	    for (int i = 0 ; i < N; i++ ){
            printf("Cual es el nombre del alumno %d: \n",i+1);
            leestring(AlumnosMetodologia[i].nombre,30);
            printf("Cual es el apellido del alumno %d: \n",i+1);
            leestring(AlumnosMetodologia[i].apellido,30);
            printf("Cual es la cedula del alumno %d: \n",i+1);
            leestring(AlumnosMetodologia[i].cedula,20);
            printf("Que edad tiene el alumno %d: \n",i+1);
            scanf ("%d",&AlumnosMetodologia[i].edad);
            printf("Cual es el numero de telefono del alumno %d: \n",i+1);
            scanf ("%d",&AlumnosMetodologia[i].telefono);
            printf("Cual es el promedio del alumno %d: \n",i+1);
            scanf("%f",&AlumnosMetodologia[i].promedio);
            printf("");
            }
            break;

         case 2:
            for (int i = 0 ; i < N; i++ ){
                printf("\tel nombre del alumno %d es: %s \n",i+1,AlumnosMetodologia[i].nombre);
                printf("\tel apellido del alumno %d es: %s \n",i+1,AlumnosMetodologia[i].apellido);
                printf("\tla cedula del alumno %d es: %s\n",i+1,AlumnosMetodologia[i].cedula);
                printf("\tla edad del alumno %d es: %d\n",i+1,AlumnosMetodologia[i].edad);
                printf("\tel numero de telefono del alumno %d es: %d\n",i+1,AlumnosMetodologia[i].telefono);
                printf("\tel promedio del alumno %d es: %f\n",i+1,AlumnosMetodologia[i].promedio);
                printf("__________________________________________________________________________________\n\n");
            }
            break;

         case 3:
             for (int i = 0 ; i < N; i++ )
                if(AlumnosMetodologia[i].promedio > mayor){
                     segundo = mayor;
                     segundo2 = pmayor;
                     mayor = AlumnosMetodologia[i].promedio;
                     pmayor = i;
                    }else if (AlumnosMetodologia[i].promedio > segundo){
                       segundo = AlumnosMetodologia[i].promedio;
                       segundo2 = i;
                }
                printf("\tEl nombre del alumno con el mejor promedio es: %s \n",AlumnosMetodologia[pmayor].nombre);
                printf("\tEl promedio del alumno es: %f\n",AlumnosMetodologia[pmayor].promedio);
                printf("\tEl nombre del alumno con el segundo mejor promedio es: %s \n",AlumnosMetodologia[segundo2].nombre);
                printf("\tEl promedio del alumno es: %f\n",AlumnosMetodologia[segundo2].promedio);
                printf("__________________________________________________________________________________\n\n");
                break;

            case 4:
                printf("\tSaliendo del programa\n");
                break;

                default:
                puts("Opcion no valida");
                break;
    	}
        }while(opc != 4);
    return 0;
    }
