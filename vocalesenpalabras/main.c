#include <stdio.h>
#include <conio.h>

int main() {

    char a = 0,e = 0 , i = 0, o = 0, u = 0;
    char palabra[40];
    printf("Contador de vocales en una palabra\n");
    printf("Ingrese una palabra: \n");
    gets(palabra);

    for (int j = 0; j < 40 ; j++){
        switch(palabra[j]){
            case 'A':
            case 'a':
            a++;
            break;

            case 'E':
            case 'e':
            e++;
            break;

            case 'I':
            case 'i':
            i++;
            break;

            case 'O':
            case 'o':
            o++;
            break;

            case 'U':
            case 'u':
            u++;
            break;
        }
    }

    printf("La palabra contiene la vocal a: %d veces \n",a );
    printf("La palabra contiene la vocal e: %d veces \n",e );
    printf("La palabra contiene la vocal i: %d veces \n",i );
    printf("La palabra contiene la vocal o: %d veces \n",o );
    printf("La palabra contiene la vocal u: %d veces \n",u );
    getch();
    return 0;
}
