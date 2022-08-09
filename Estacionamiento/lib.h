#ifndef lib
#define lib
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define CANTIDAD_MOTOS 6
#define CANTIDAD_CARROS 10
#define MAXIMA_LONGITUD_CADENA 1000
#define OCUPADO 1
#define DESOCUPADO 0
#define TIPO_MOTO 'M'
#define TIPO_CARRO 'C'
#define VALOR_HORA_CARRO 50
#define VALOR_HORA_MOTO 35
#define MINUTOS_EXTRA_PARA_RECARGO 2
#define VALOR_POR_MINUTO 2

void imprimirFechaAPartirDeTimestamp(time_t tiempo){
    struct tm *tm = localtime(&tiempo);
    printf("%02d/%02d/%02d %02d:%02d:%02d",
           tm->tm_mday, tm->tm_mon + 1,
           tm->tm_year + 1900,
           tm->tm_hour,
           tm->tm_min,
           tm->tm_sec);
}

void consumirNuevaLinea(void){
    int c;
    do{
        c = getchar();
    } while (c != EOF && c != '\n');
}

struct LugarEstacionamiento{
    char placa[MAXIMA_LONGITUD_CADENA];
    time_t entrada;
    int estado;
    char tipo;
    int horas;
};

void limpiarLugares(struct LugarEstacionamiento lugares[CANTIDAD_CARROS + CANTIDAD_MOTOS]){
    for (int i = 0; i < CANTIDAD_CARROS; i++){
        strcpy(lugares[i].placa, "");
        lugares[i].entrada = 0;
        lugares[i].estado = DESOCUPADO;
        lugares[i].tipo = TIPO_CARRO;
        lugares[i].horas = 0;
    }
    for (int i = CANTIDAD_CARROS; i < CANTIDAD_CARROS + CANTIDAD_MOTOS; i++){
        strcpy(lugares[i].placa, "");
        lugares[i].entrada = 0;
        lugares[i].estado = DESOCUPADO;
        lugares[i].tipo = TIPO_MOTO;
        lugares[i].horas = 0;
    }
}

void mostrarEstadoEstacionamiento(struct LugarEstacionamiento lugares[CANTIDAD_CARROS + CANTIDAD_MOTOS]){
    int i;
    for ( i = 0; i < CANTIDAD_CARROS; i++){
        printf("#%d [CARRO] ", i + 1);
        if (lugares[i].estado == OCUPADO){
            printf("Ocupado por %s desde ", lugares[i].placa);
            imprimirFechaAPartirDeTimestamp(lugares[i].entrada);
        }else{
            printf("Desocupado");
        }
        printf("\n");
    }
    for (;  i < CANTIDAD_CARROS + CANTIDAD_MOTOS; i++){
        printf("#%d [MOTO] ", i + 1);
        if (lugares[i].estado == OCUPADO){
            printf("Ocupado por %s desde ", lugares[i].placa);
            imprimirFechaAPartirDeTimestamp(lugares[i].entrada);
        }else{
            printf("Desocupado");
        }printf("\n");
    }
}

void marcarEntradaVehiculo(struct LugarEstacionamiento lugares[CANTIDAD_CARROS + CANTIDAD_MOTOS], int indice, char placa[MAXIMA_LONGITUD_CADENA], int horas){
    lugares[indice].estado = OCUPADO;
    strncpy(lugares[indice].placa, placa, MAXIMA_LONGITUD_CADENA);
    lugares[indice].entrada = time(NULL);
    lugares[indice].horas = horas;
}

void limpiarLugar(struct LugarEstacionamiento *lugarEstacionamiento){
    lugarEstacionamiento->entrada = 0;
    lugarEstacionamiento->estado = DESOCUPADO;
    lugarEstacionamiento->horas = 0;
    strcpy(lugarEstacionamiento->placa, "");
}

void calcularEImprimirInformacionSalida(struct LugarEstacionamiento lugarEstacionamiento){
    int horasSegunVehiculo = lugarEstacionamiento.horas;
    double total = 0;
    double granTotal = 0;
    double totalExcedente = 0;
    if (lugarEstacionamiento.tipo == TIPO_CARRO){
        total = horasSegunVehiculo * VALOR_HORA_CARRO;
    }else{
        total = horasSegunVehiculo * VALOR_HORA_MOTO;
    }
    time_t ahora = time(NULL);
    time_t entrada = lugarEstacionamiento.entrada;
    // Nota: si se quieren hacer pruebas con otras fechas, hay que
    // cambiar el timestamp a la fecha deseada. Por ejemplo, la siguiente
    // línea apunta al 10 de marzo de 2022 a las 11:00:00
    // time_t entrada = 1646931600;
    time_t diferencia = ahora - entrada;
    printf("===========================\n");
    printf("Entrada: ");
    imprimirFechaAPartirDeTimestamp(entrada);
    printf("\n");
    printf("Salida: ");
    imprimirFechaAPartirDeTimestamp(ahora);
    printf("\n");
    printf("Horas solicitadas: %d\n", horasSegunVehiculo);
    unsigned long long int horas = diferencia / 60 / 60;
    diferencia -= 60 * 60 * horas;
    unsigned long long int minutos = diferencia / 60;
    diferencia -= 60 * minutos;
    int conTiempoExtra = 0;
    if (horas >= horasSegunVehiculo && (((horas - horasSegunVehiculo) * 60) + minutos) >= MINUTOS_EXTRA_PARA_RECARGO){
        conTiempoExtra = 1;
        totalExcedente = (((horas - horasSegunVehiculo) * 60) + minutos) * VALOR_POR_MINUTO;
    }
    granTotal = total + totalExcedente;
    printf("Tiempo dentro de estacionamiento: ");
    printf("%llu hora(s) %llu minuto(s) %llu segundo(s)\n", horas, minutos, diferencia);
    if (conTiempoExtra){
        printf("Tiempo extra: ");
        printf("%llu hora(s) %llu minuto(s) %llu segundo(s)\n", horas - horasSegunVehiculo, minutos, diferencia);
        printf("Pago por tiempo extra: %lf\n", totalExcedente);
    }
    printf("Placa: %s\n", lugarEstacionamiento.placa);
    printf("Pago por horas: %0.2lf pesos\n", total);
    printf("Total: %0.2lf pesos\n", granTotal);
    printf("===========================\n");
}

void marcarSalidaVehiculo(struct LugarEstacionamiento lugares[CANTIDAD_CARROS + CANTIDAD_MOTOS], int indice){
    calcularEImprimirInformacionSalida(lugares[indice]);
    limpiarLugar(&lugares[indice]);
}

int existeVehiculoConPlacaYTipo(struct LugarEstacionamiento lugares[CANTIDAD_CARROS + CANTIDAD_MOTOS], char placa[MAXIMA_LONGITUD_CADENA], char tipo){
    for (int i = 0; i < CANTIDAD_CARROS + CANTIDAD_MOTOS; i++){
        if (lugares[i].tipo == tipo && strcmp(lugares[i].placa, placa) == 0){
            return 1;
        }
    }
    return 0;
}

void menuAsignarVehiculo(struct LugarEstacionamiento lugares[CANTIDAD_CARROS + CANTIDAD_MOTOS]){
    char lecturaUsuario[MAXIMA_LONGITUD_CADENA] = "";
    int lugar = 0;
    int horas;
    mostrarEstadoEstacionamiento(lugares);
    while (1){
        puts("Ingrese el lugar: ");
        scanf("%d", &lugar);
        if (lugar > 0 && lugar <= CANTIDAD_CARROS + CANTIDAD_MOTOS){
            if (lugares[lugar - 1].estado == OCUPADO){
                printf("Ocupado\n");
            }else{
                lugar = lugar - 1;
                break;
            }
        }else{
            printf("Numero no valido\n");
        }
    }
    puts("Ingrese las horas que planea estar en el estacionamiento: ");
    scanf("%d", &horas);
    consumirNuevaLinea();
    while (1){
        printf("Ingrese las placas de");
        if (lugares[lugar].tipo == TIPO_MOTO){
            printf(" la moto: ");
        }else{
            printf(" el carro: ");
        }
        fgets(lecturaUsuario, MAXIMA_LONGITUD_CADENA, stdin);
        lecturaUsuario[strcspn(lecturaUsuario, "\r\n")] = 0;
        if (existeVehiculoConPlacaYTipo(lugares, lecturaUsuario, lugares[lugar].tipo)){
            printf("Ya existe un vehiculo del mismo tipo y con las mismas placas en el sistema\n");
        }else{
            break;
        }
    }
    marcarEntradaVehiculo(lugares, lugar, lecturaUsuario, horas);
}

void menuSacarVehiculo(struct LugarEstacionamiento lugares[CANTIDAD_CARROS + CANTIDAD_MOTOS]){
    int lugar = 0;
    while (1){
        printf("Ingrese el lugar: ");
        scanf("%d", &lugar);
        if (lugar > 0 && lugar <= CANTIDAD_CARROS + CANTIDAD_MOTOS){
            if (lugares[lugar - 1].estado == DESOCUPADO){
                printf("No hay vehiculo estacionado en este lugar\n");
            }else{
                lugar = lugar - 1;
                break;
            }
        }else{
            printf("Numero no valido\n");
        }
    }
    marcarSalidaVehiculo(lugares, lugar);
}

void menu(struct LugarEstacionamiento lugares[CANTIDAD_CARROS + CANTIDAD_MOTOS]){
    int eleccion = 0;
    while (eleccion != 4){
        puts("1. Registrar entrada");
        puts("2. Registrar salida");
        puts("3. Ver estado de estacionamiento");
        puts("4. Salir");
        puts ("Elige: ");
        scanf("%d", &eleccion);
        if (eleccion == 1){
            menuAsignarVehiculo(lugares);
        }else if (eleccion == 2){
            menuSacarVehiculo(lugares);
        }else if (eleccion == 3){
            mostrarEstadoEstacionamiento(lugares);
        }
    }
}
#endif // lib.h