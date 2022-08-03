/*Programa de encriptacion.Lee una cadena, la guarda en un arreglo,
y la encripta (sumando el valor 3 al codigo ASCII de cada caracter). Despues
realiza el desencriptado, en vez de sumar 3, se resta 3 al valor al insertar la
cadena encriptada. */
#include <stdio.h>
#include <string.h>

int main() {
    int opc,z;
    char frase[100];

    do{
        printf("\n__________________________\n");
        printf("Menu\n");
        printf("1. Encriptar\n");
        printf("2. Desencriptar\n");
        printf("3. Salir\n");
        printf("Selecciona una opcion:\n");
        scanf ("%d",&opc);

        switch(opc){
            case 1:
                printf("Escribe la frase a encriptar sin dejar espacios: \n");
                scanf("%s",&frase);
                z = strlen(frase);
                for(int i = 0; i < z ; i++ ){
                frase[i]+=3;
                    }
                printf("La frase encriptada es: %s\n",frase);
            break;

            case 2:
                printf("Escribe la frase para desencriptar:\n");
                scanf("%s",&frase);
                z = strlen(frase);
                for(int i = 0; i < z ; i++ ){
                    frase[i] -=3 ;
                }
                printf("La frase desencriptada es: %s\n",frase);
            break;

            default :
                printf("Opcion no valida\n");
                break;
        }
    }while(opc != 3);

    return 0;
}
