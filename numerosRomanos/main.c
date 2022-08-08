#include <stdio.h>

int main() {
    int num,millar,centenas,decenas,unidades;

        do{
           printf( "Introduce un numero menor a 4000, para salir presiona Z \n " );
            scanf( "%d", &num );
            if(num >= 4000){
                    printf( "\nIntroduce un numero menor a 4000 \n " );
                    scanf( "%d", &num );
            }
            unidades = num%10 ;
            num = num/10;
            decenas = num%10 ;
            num = num/10;
            centenas = num%10 ;
            num = num/10;
            millar = num%10 ;
            num = num/10;

            switch( millar ){
            case 1:
                printf( "M" );
                break;
            case 2:
                 printf( "MM" );
                 break;
            case 3:
                 printf( "MMM" );
                 break;
            }

            switch( centenas ){
            case 1:
                printf( "C" );
                break;
            case 2:
                 printf( "CC" );
                 break;
            case 3:
                 printf( "CCC" );
                 break;
            case 4:
                printf( "CD" );
                break;
            case 5:
                printf( "D" );
                break;
            case 6:
                printf( "DC" );
                break;
            case 7:
                printf( "DCC" );
                break;
            case 8:
                printf( "DCCC" );
                break;
            case 9:
                printf( "CM" );
                break;
            }
            switch( decenas ){
            case 1:
                printf( "X" );
                break;
            case 2:
                printf( "XX" );
                break;
            case 3:
                printf( "XXX" );
                break;
            case 4:
                printf( "XL" );
                break;
            case 5:
                printf( "L" );
                break;
            case 6:
                printf( "LX" );
                break;
            case 7:
                printf( "LXX" );
                break;
            case 8:
                printf( "LXXX" );
                break;
            case 9:
                printf( "XC" );
                break;
            }
            switch( unidades ){
            case 1:
                printf( "I\n" );
                break;
            case 2:
                printf( "II\n" );
                break;
            case 3:
                printf( "III\n" );
                break;
            case 4:
                printf( "IV\n" );
                break;
            case 5:
                printf( "V\n" );
                break;
            case 6:
                printf( "VI\n" );
                break;
            case 7:
                printf( "VII\n" );
                break;
            case 8:
                printf( "VIII\n" );
                break;
            case 9:
                printf( "IX\n" );
                break;
            }
            num = getchar();
        }while(num != 'z' && 'Z');
    return 0;
}
