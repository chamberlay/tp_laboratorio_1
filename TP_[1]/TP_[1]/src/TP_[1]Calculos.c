#include "TP_[1]Calculos.h"
#include "Funciones.h"
#include "inputs.h"


/**
 * @fn float calcularPrecioConDebito(float precio)
 * @brief calcular el precio del pasaje con el descuento por pago con tarjeta de debito.
 * @param precio: precio ingresado en el menu
 * @return: el precio total del pasaje con el descuento.
 */
float calcularPrecioConDebito(float precio)
{
    float resultado;

    resultado = precio - (precio * 0.10);

    return resultado;
}

/**
 * @fn float calcularPrecioConCredito(float precio)
 * @brief calcular el precio del pasaje con los intereses por pago con tarjeta de credito.
 * @param precio: precio ingresado en el menu
 * @return: el precio total del pasaje con los intereses.
 */
float calcularPrecioConCredito(float precio)
{
    float resultado;

    resultado = precio + (precio * 0.25);

    return resultado;
}

/**
 * @fn double calcularPrecioConBitcoin(float precio)
 * @brief calcular el precio del pasaje con bitcoins.
 * @param precio: precio ingresado en el menu
 * @return: el precio total del pasaje en bitcoins.
 */
double calcularPrecioConBitcoin(float precio)
{
    double resultado;

    resultado = precio / 4606954.55;

    return resultado;
}

/**
 * @fn float mostrarPrecioPorKm(float precio, float kmIngresados)
 * @brief calcular el precio del pasaje por km.
 * @param precio: precio ingresado en el menu.
 * @param kmIngresados: los kms que se ingresaron en el menu.
 * @return: el precio total del pasaje por km.
 */
float mostrarPrecioPorKm(float precio, float kmIngresados)
{
    float resultado;

    resultado = precio / kmIngresados;

    return resultado;
}

/**
 * @fn float mostrarDiferenciaDePrecios(float precioLatam, float precioAerolineas)
 * @brief calcular la diferencia del precio entre aerolineas argentinas y latam.
 * @param precioLatam: precio ingresado en el menu para latam.
 * @param precioAerolineas: precio ingresado en el menu para aerolineas argentinas.
 * @return: el valor de diferencia entre ambas aerolineas.
 */
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
