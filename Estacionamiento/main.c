#include <stdio.h>
#include "lib.h"
int main()
{
    struct LugarEstacionamiento lugares[CANTIDAD_CARROS + CANTIDAD_MOTOS];
    limpiarLugares(lugares);
    menu(lugares);
}