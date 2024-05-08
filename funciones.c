#include <stdio.h>
#include "funciones.h"

void calcular_pagos(float monto_credito, float tasa_interes, float tiempo_pago) {
    float capital_pago, interes_anual, capital_interes, cuota_mensual;
    float monto = monto_credito;
    float tasa_mensual = tasa_interes / 100 / 12;
    float suma_interes_total = 0; // Suma total de intereses anuales
    float suma_capital_interes = 0; // Suma total de capital más intereses

    capital_pago = monto_credito / tiempo_pago; // Calculamos el capital a pagar por año una vez
    printf("Capital restante a pagar:   ");
    printf("Capital a pagar por año:    ");
    printf("Interes anual:          ");
    printf("Capital + Interes:      ");
    printf("Cuota mensual por año:  \n");

    for (int año = 1; año <= tiempo_pago; año++) {
        interes_anual = monto * tasa_interes / 100;
        capital_interes = capital_pago + interes_anual;
        cuota_mensual = capital_interes / 12;
        monto_credito -= capital_pago;
        monto -= capital_pago;

        // Mostrar resultados para este año en formato tabular
        printf("%9.2f   ", monto_credito);
        printf("%9.2f   ", capital_pago);
        printf("%9.2f   ", interes_anual);
        printf("%9.2f   ", capital_interes);
        printf("%9.2f   \n", cuota_mensual);

        // Sumar al total de intereses anuales y al total de capital más intereses
        suma_interes_total += interes_anual;
        suma_capital_interes += capital_interes;
    }

    printf("\nSuma total de interes anual: %.2f\n", suma_interes_total);
    printf("Suma total de capital + interes: %.2f\n", suma_capital_interes);
}
