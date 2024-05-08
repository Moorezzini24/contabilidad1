#include <stdio.h>
#include "funciones.h"

int main() {
    float monto_credito, tasa_interes, tiempo_pago;
    printf("Ingresa el monto de credito: ");
    scanf("%f", &monto_credito);
    printf("Ingresa la tasa de interes anual: ");
    scanf("%f", &tasa_interes);
    printf("Ingresa el tiempo de pago en años: ");
    scanf("%f", &tiempo_pago);

    calcular_pagos(monto_credito, tasa_interes, tiempo_pago);
    return 0;
}

