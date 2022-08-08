#include <stdio.h>
#include <string.h>

#define F 51 // Definimos el tama o maximo de las fiLas
#define C 51 // Definimos el tama o maximo de las columnas

void ImprimeMatriz (char matriz[F][C]); //funcion para imprimir la matriz
int Leearchivo1 (char matriz[F][C]); //funcion para leer el archivo de texto donde tenemos nuestro laberinto1
int Leearchivo2 (char matriz[F][C]); //funcion para leer el archivo de texto donde tenemos nuestro laberinto2
int Leearchivo3 (char matriz[F][C]); //funcion para leer el archivo de texto donde tenemos nuestro laberinto3
int Leearchivo4 (char matriz[F][C]); //funcion para leer el archivo de texto donde tenemos nuestro laberinto4
int  Leearchivo5 (char matriz[F][C]); //funcion para leer el archivo de texto donde tenemos nuestro laberinto sin solucion
void LimpiaMatriz(char matriz[F][C]); //Funcion para limpiar la matriz e inicarla en 0
int LocalizaX (char matriz[F][C]); //funcion para localizar a la fila de E= entrada o inicio de la solucion del laberinto
int localizaY (char matriz[F][C]); //funcion para localizar a la columna de E = entrada o inicio de la solucion del laberinto
int LocalizaSX(char matriz[F][C]); //funcion para localizar a la fila de S = es el destino final de la solucion
int localizaSY (char matriz[F][C]);//funcion para localizar a la columna de S = es el destino final de la solucion
void Avanza(char matriz[F][C],int x, int y);//Funcion para que nuestro punto avanze y llegue al destino final


int main(){
    int num; // para elegir el case de nuestro menu
    char matriz[F][C]; // declaracion de la matriz
    int x=0,y=0; // declaracion de filas y columnas
    printf ("\t""LABERINTOS""\n");// impresion de nuestra presentaci n
    printf ("\tFredy Mora Santill%cn\n",160);
    do {
        printf ("__________________________________________\n");
        printf ("1. LABERINTO 10X10 \n");
        printf ("2. LABERINTO 20X20 \n");
        printf ("3. LABERINTO 30X30 \n");
        printf ("4. LABERINTO 50X50 \n");
        printf ("5. LABERINTO SIN SOLUCI%cN \n",162);
        printf ("6. PARA SALIR \n");
        printf ("__________________________________________\n");
        scanf ("%d",&num);//se almacena la elecci n elegida

        switch (num){
        case 1:// desarrollo del case 1
            LimpiaMatriz(matriz); //se invoca a la funcion de limpiar la matriz para inicarla en 0
            Leearchivo1 (matriz); // se invoca a la funcion para leer el archivo1 que es nuestro primer laberinto
            ImprimeMatriz(matriz); // se invoca a la funcion que imprime nuestro laberinto
            x=LocalizaSX (matriz); //se invoca a la funcion que localiza la coordenada X de nuestra S
            y=localizaSY (matriz); // se invoca ala funcion que localiza la coordenada Y de nuestra S
            printf("S se encuentra en %d,%d\n\n",x,y); // se imprime las coordenadas donde se encuentra nuestra S
            x=LocalizaX (matriz); // se invoca a la funcion que localiza la coordenada X de nuestra E
            y=localizaY (matriz); // se invoca a la funcion que localiza la coordenada y de nuestra E
            printf("E se encuentra en %d,%d\n\n",x,y); // se imprimen las coordenadas donde se encuentra nuestra E
            Avanza(matriz,y,x); // se invoca a la funcion que validara el camino que debemos tomar para encontrar la salida
            break;

        case 2: // practicamente es lo mismo que el case 1 a EXCEPCION  de leer archivo ya que en esa parte se lee el archivo2 donde viene nuestro laberinto 2

            LimpiaMatriz(matriz);
            Leearchivo2 (matriz);
            ImprimeMatriz(matriz);
            x=LocalizaSX (matriz);
            y=localizaSY (matriz);
            printf("S se encuentra en %d,%d\n\n",x,y);
            x=LocalizaX (matriz);
            y=localizaY (matriz);
            printf("E se encuentra en %d,%d\n\n",x,y);
            Avanza(matriz,y,x);
            break;

        case 3: // practicamente es lo mismo que el case 1 a EXCEPCION  de leer archivo ya que en esa parte se lee el archivo3 donde viene nuestro laberinto 3

            LimpiaMatriz(matriz);
            Leearchivo3 (matriz);
            ImprimeMatriz(matriz);
            x=LocalizaSX (matriz);
            y=localizaSY (matriz);
            printf("S se encuentra en %d,%d\n\n",x,y);
            x=LocalizaX (matriz);
            y=localizaY (matriz);
            printf("E se encuentra en %d,%d\n\n",x,y);
            Avanza(matriz,y,x);
            break;

        case 4: // practicamente es lo mismo que el case 1 a EXCEPCION  de leer archivo ya que en esa parte se lee el archivo4 donde viene nuestro laberinto 4

            LimpiaMatriz(matriz);
            Leearchivo4 (matriz);
            ImprimeMatriz(matriz);
            x=LocalizaSX (matriz);
            y=localizaSY (matriz);
            printf("S se encuentra en %d,%d\n\n",x,y);
            x=LocalizaX (matriz);
            y=localizaY (matriz);
            printf("E se encuentra en %d,%d\n\n",x,y);
            Avanza(matriz,y,x);
            break;

        case 5: // practicamente es lo mismo que el case 1 a EXCEPCION  de leer archivo ya que en esa parte se lee el archivo4 donde viene nuestro laberinto 4

            LimpiaMatriz(matriz);
            Leearchivo5 (matriz);
            ImprimeMatriz(matriz);
            x=LocalizaSX (matriz);
            y=localizaSY (matriz);
            printf("S se encuentra en %d,%d\n\n",x,y);
            x=LocalizaX (matriz);
            y=localizaY (matriz);
            printf("E se encuentra en %d,%d\n\n",x,y);
            Avanza(matriz,y,x);
            break;

        default:
            printf("Opci%cn no valida",162);
            break;
        }
    }
    while(num != 6);

    return 0;
}

int Leearchivo1 (char matriz[F][C]){
    FILE * flujo = fopen("C:\\Users\\crack\\Documents\\repositorio\\C\\Laberinto\\laberinto10.txt", "r");//aqui se pone la ruta de nuestro archivo y se abre
    if (flujo == NULL){
        perror("Error en la apertura de archivo");
        return 1;
    }
    while (feof(flujo)==0){
        for (int i=0; i<F; i++){
            fgets(matriz[i],F+1,flujo);
            strtok(matriz[i],"'\n'");
        }
    }
    fclose(flujo);// aqui se cierra nuestro archivo
}

int Leearchivo2 (char matriz[F][C]){
    FILE * flujo = fopen("C:\\Users\\crack\\Documents\\repositorio\\C\\Laberinto\\laberinto.txt", "r");//aqui se pone la ruta de nuestro archivo y se abre
    if (flujo == NULL){
        perror("Error en la apertura de arcchivo");
        return 1;
    }
    while (feof(flujo)==0){
        for (int i=0; i<F; i++){
            fgets(matriz[i],F+1,flujo);
            strtok(matriz[i],"'\n'");
        }
    }
    fclose(flujo);
}

/**
 * practicamente igual que nuestra funcion leerarchivo1
 * @args char matriz
 */
int Leearchivo3 (char matriz[F][C]){
    FILE * flujo = fopen("C:\\Users\\crack\\Documents\\repositorio\\C\\Laberinto\\laberinto30.txt", "r");//aqui se pone la ruta de nuestro archivo y se abre
    if (flujo == NULL){
        perror("Error en la apertura de arcchivo");
        return 1;
    }
    while (feof(flujo)==0){
        for (int i=0; i<F; i++){
            fgets(matriz[i],F+1,flujo);
            strtok(matriz[i],"'\n'");
        }
    }
    fclose(flujo);
}

int Leearchivo4 (char matriz[F][C]){
    FILE * flujo = fopen("C:\\Users\\crack\\Documents\\repositorio\\C\\Laberinto\\laberinto50.txt", "r");//aqui se pone la ruta de nuestro archivo y se abre
    if (flujo == NULL){
        perror("Error en la apertura de arcchivo");
        return 1;
    }
    while (feof(flujo)==0){
        for (int i=0; i<F; i++){
            fgets(matriz[i],F+1,flujo);
            strtok(matriz[i],"'\n'");
        }
    }
    fclose(flujo);
}

int  Leearchivo5 (char matriz[F][C]){
    FILE * flujo = fopen("C:\\Users\\crack\\Documents\\repositorio\\C\\Laberinto\\laberinto0.txt", "r");//aqui se pone la ruta de nuestro archivo y se abre
    if (flujo == NULL){
        perror("Error en la apertura de arcchivo");
        return 1;
    }
    while (feof(flujo)==0){
        for (int i=0; i<F; i++){
            fgets(matriz[i],F+1,flujo);
            strtok(matriz[i],"'\n'");
        }
    }
    fclose(flujo);
}

void ImprimeMatriz (char matriz[F][C]){
    for (int i=0; i<F; i++){
        for (int j=0; j<C; j++){
            printf("%c",matriz[i][j]);
        }
        puts("");
    }
}

void LimpiaMatriz(char matriz[F][C]){
    for (int i=0; i<F; i++){
        for (int j=0; j<C; j++){
            matriz[i][j]='\0';
        }
    }
}


int LocalizaX(char matriz[F][C]){
    for (int i=0; i<F; i++){
        for (int j=0; j<C; j++){
            if(matriz[i][j]=='E'){
                return j;
            }
        }
    }
}

int localizaY (char matriz[F][C]){
    for (int i=0; i<F; i++){
        for (int j=0; j<C; j++){
            if(matriz[i][j]=='E'){
                return i;
            }
        }
    }
}

int LocalizaSX(char matriz[F][C]){
    for (int i=0; i<F; i++){
        for (int j=0; j<C; j++){
            if(matriz[i][j]=='S'){
                return j;
            }
        }
    }
}

int localizaSY (char matriz[F][C]){
    for (int i=0; i<F; i++){
        for (int j=0; j<C; j++){
            if(matriz[i][j]=='S'){
                return i;
            }
        }
    }
}

void Avanza(char matriz[F][C],int y, int x){
    int solucion;//variable para imprimir si tiene soluci n o no
    if(matriz[y][x]!='*'){
        if(matriz[y][x]!='E'&& matriz[y][x]!='S'){
            matriz[y][x]='.';
            ImprimeMatriz(matriz);
        }if (matriz[y][x+1]!='*'&&matriz[y][x+1]!='.'){
            Avanza(matriz,y, x+1);
        }else if(matriz[y][x-1]!='*'&&matriz[y][x-1]!='.'){
            Avanza(matriz,y, x-1);
        }else if (matriz[y-1][x]!='*'&&matriz[y-1][x]!='.'){
            Avanza(matriz,y-1,x);
        }else if (matriz[y+1][x]!='*'&&matriz[y+1][x]!='.'){
            Avanza(matriz, y+1,x);
        }else if (matriz [y][x-1]=='*'&& matriz[y+1][x]!='*' && matriz[y][x+1]!='*' && matriz[y-1][x]!='*' &&
                 matriz [y][x-1]=='.'&& matriz[y+1][x]!='.' && matriz[y][x+1]!='.' && matriz[y-1][x]!='.'){
            matriz[x][y]='.';
            ImprimeMatriz(matriz);//aqui valida que si no hay lugar para donde avanzar regrese y busqye otra ruta
        }else if (matriz [y][x-1]=='*'&& matriz[y+1][x]=='*' && matriz[y][x+1]=='*' && matriz[y-1][x]=='*' &&
                 matriz [y][x-1]=='.'&& matriz[y+1][x]=='.' && matriz[y][x+1]=='.' && matriz[y-1][x]=='.'){
            ImprimeMatriz(matriz);//aqui valida que si no hay lugar para donde avanzar regrese y busqye otra ruta
        }else if (solucion = matriz[y][x]=='S'? "Ha llegado al final por lo tanto tiene solucion" : "no tiene solucion") //Aqui valida que si ha llegado a S imprima que ha llegado al final y si no encontro la S imprima que no tiene solucion
            printf("%s \n",solucion);
    }else{
        //ImprimeMatriz(matriz);// se imprime la solucion
    }
    return;
}