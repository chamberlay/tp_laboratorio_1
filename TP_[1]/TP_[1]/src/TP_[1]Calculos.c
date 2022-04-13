#include "TP_[1]Calculos.h"
#include "Funciones.h"
#include "inputs.h"

float calcularPrecioConDebito(float precio)
{
    float resultado;

    resultado = precio - (precio * 0.10);

    return resultado;
}

float calcularPrecioConCredito(float precio)
{
    float resultado;

    resultado = precio + (precio * 0.25);

    return resultado;
}

double calcularPrecioConBitcoin(float precio)
{
    double resultado;

    resultado = precio / 4606954.55;

    return resultado;
}

float mostrarPrecioPorKm(float precio, float kmIngresados)
{
    float resultado;

    resultado = precio / kmIngresados;

    return resultado;
}

float mostrarDiferenciaDePrecios(float precioLatam, float precioAerolineas)
{
    float resultado;

    if(precioLatam > precioAerolineas)
    {
        resultado = precioLatam - precioAerolineas;
    }
    else
    {
        resultado = precioAerolineas - precioLatam;
    }

    return resultado;
}