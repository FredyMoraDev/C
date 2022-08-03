#include <stdio.h>
#include <string.h>

int main() {

    char palabra[50];
    char palabra2[50];
    int j = 0,num;
    int palindromo = 0;

    printf("Escribe una palabra sin espacios: \n");
    scanf("%s",palabra);

    num = strlen(palabra);

    printf ("\nTu palabra tiene %d letras \n",num);

    for (int i = num -1 ; i >= 0; i--) {
         palabra2[j] = palabra[i];
         j++;

    }
     for(int i = 0; i <= num; i++){
         if(palabra[i]!=palabra2[i]){
             palindromo = 1;
             break;
         }
     }
    if(palindromo == 1){
        printf("La palabra %s no es palindromo",palabra2);
    }
    else{
        printf("La palabra %s es palindromo",palabra2);
    }
    return 0;
}
