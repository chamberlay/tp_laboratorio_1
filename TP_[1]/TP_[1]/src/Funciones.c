#include "TP_[1]Calculos.h"
#include "Funciones.h"
#include "inputs.h"

/**
 * @fn void procesarMenu(int opcion, float kmIngresados, float  precioAerolineas, float precioLatam, int indexKm, int indexAerolineas, int indexLatam)
 * @brief  procesa el menu segun la opcion que se ingrese.
 * @param opcion: es la opcion que se ingreso.
 * @param kmIngresados: son los kms que se ingresaron.
 * @param precioAerolineas: es el importe que se ingreso como costo del vuelo con aerolineas argentinas.
 * @param precioLatam: es el importe que se ingreso como costo del vuelo con latam.
 * @param indexKm: indicador que devuelve -1 si no se ingreso ningun dato o 0 en caso contrario.
 * @param indexAerolineas: indicador que devuelve -1 si no se ingreso ningun dato o 0 en caso contrario.
 * @param indexLatam: indicador que devuelve -1 si no se ingreso ningun dato o 0 en caso contrario.
 */
void procesarMenu(int opcion, float kmIngresados, float  precioAerolineas, float precioLatam, int indexKm, int indexAerolineas, int indexLatam)
{
	switch(opcion)
			{

				case 3:

					if(indexKm == 0 && indexAerolineas == 0 && indexLatam == 0)
					{
						calcularPrecioConDebito(precioLatam);
						calcularPrecioConCredito(precioLatam);
						calcularPrecioConBitcoin(precioLatam);
						mostrarPrecioPorKm(precioLatam, kmIngresados);
						calcularPrecioConDebito(precioAerolineas);
						calcularPrecioConCredito(precioAerolineas);
						calcularPrecioConBitcoin(precioAerolineas);
						mostrarPrecioPorKm(precioAerolineas, kmIngresados);
						mostrarDiferenciaDePrecios(precioLatam, precioAerolineas);

						printf("\nSe realizaron los calculos necesarios.\n");
					}else
					{
						printf("\nNo se han cargado los datos.\n");
					}

				break;

				case 4:

					if(indexKm == 0 && indexAerolineas == 0 && indexLatam == 0)
					{
						printf("KMs ingresados: %.2f\n"
								"\nPrecio Latam: \n"
								"a) Precio con tarjeta de débito: %.2f\n"
								"b) Precio con tarjeta de crédito: %.2f\n"
								"c) Precio pagando con bitcoin : %.7lf\n"
								"d) Precio unitario: %.2f\n"
								"\nPrecio Aerolineas: \n"
								"a) Precio con tarjeta de débito: %.2f\n"
								"b) Precio con tarjeta de crédito: %.2f\n"
								"c) Precio pagando con bitcoin : %.7lf\n"
								"d) Precio unitario: %.2f\n"
								"\nLa diferencia de precio es: %.2f\n",
								kmIngresados,
								calcularPrecioConDebito(precioLatam),
								calcularPrecioConCredito(precioLatam),
								calcularPrecioConBitcoin(precioLatam),
								mostrarPrecioPorKm(precioLatam, kmIngresados),
								calcularPrecioConDebito(precioAerolineas),
								calcularPrecioConCredito(precioAerolineas),
								calcularPrecioConBitcoin(precioAerolineas),
								mostrarPrecioPorKm(precioAerolineas, kmIngresados),
								mostrarDiferenciaDePrecios(precioLatam, precioAerolineas));
					}else
					{
						printf("No se han cargado los datos.\n");
					}

				break;

				case 5:
					printf("KMs ingresados: %d\n"
						   "\nPrecio Latam: \n"
						   "a) Precio con tarjeta de débito: %.2f\n"
						   "b) Precio con tarjeta de crédito: %.2f\n"
						   "c) Precio pagando con bitcoin : %.7lf\n"
						   "d) Precio unitario: %.2f\n"
						   "\nPrecio Aerolineas: \n"
						   "a) Precio con tarjeta de débito: %.2f\n"
						   "b) Precio con tarjeta de crédito: %.2f\n"
						   "c) Precio pagando con bitcoin : %.7lf\n"
						   "d) Precio unitario: %.2f\n"
						   "\nLa diferencia de precio es: %.2f\n",
						   KM_CARGA_FORZADA,
						   calcularPrecioConDebito(PRECIO_LATAM_CARGA_FORZADA),
						   calcularPrecioConCredito(PRECIO_LATAM_CARGA_FORZADA),
						   calcularPrecioConBitcoin(PRECIO_LATAM_CARGA_FORZADA),
						   mostrarPrecioPorKm(PRECIO_LATAM_CARGA_FORZADA, KM_CARGA_FORZADA),
						   calcularPrecioConDebito(PRECIO_AEROLINEAS_CARGA_FORZADA),
						   calcularPrecioConCredito(PRECIO_AEROLINEAS_CARGA_FORZADA),
						   calcularPrecioConBitcoin(PRECIO_AEROLINEAS_CARGA_FORZADA),
						   mostrarPrecioPorKm(PRECIO_AEROLINEAS_CARGA_FORZADA, KM_CARGA_FORZADA),
						   mostrarDiferenciaDePrecios(PRECIO_LATAM_CARGA_FORZADA, PRECIO_AEROLINEAS_CARGA_FORZADA));
				break;

				case 6:
					printf("\nPrograma terminado!!");
				break;
			}
}

/**
 * @fn void mostrarMenu(void)
 * @brief  muestra el menu y capta la opcion que se ingrese.
 */
void mostrarMenu(void)
{
	int indexKm;
	int indexAerolinea;
	int indexLatam;
    int opcion;
	float kmIngresados;
	float precioAerolineas;
	float precioLatam;

	do
	{
		pedirEntero(&opcion, "\n1. Ingresar kilómetros:\n"
						 	 	 "2. Ingresar precio de vuelos:\n"
							 	 "3. Calcular todos los costos.\n"
								 "4. Informar resultados.\n"
								 "5. Carga forzada de datos.\n"
								 "6. Salir.\n"
								 "Ingrese una opción: \n",

								 "Error. Debe ingresar una opcion valida\n"
								 "1. Ingresar kilómetros:\n"
								 "2. Ingresar precio de vuelos:\n"
								 "3. Calcular todos los costos.\n"
								 "4. Informar resultados.\n"
								 "5. Carga forzada de datos.\n"
								 "6. Salir.\n"
								 "Ingrese una opción: \n", 1, 6);

		switch(opcion){
				case 1:
					indexKm = pedirFloat(&kmIngresados, "Ingrese los kilometros del vuelo: \n", "Error. Reingrese los kilometros del vuelo (100 / 16.000): \n", 100, 16000);
				break;

				case 2:
					indexAerolinea = pedirFloat(&precioAerolineas, "Ingrese el precio del vuelo con aerolineas: \n", "Error. Debe ingresar un precio valido (100 / 1.000.000): \n", 1000, 1000000);

					indexLatam = pedirFloat(&precioLatam, "Ingrese el precio del vuelo con latam: \n", "Error. Debe ingresar un precio valido (100 / 1.000.000): \n", 1000, 1000000);
				break;

				default:
					procesarMenu(opcion, kmIngresados, precioAerolineas, precioLatam, indexAerolinea, indexKm, indexLatam);
		}

	}while(opcion != 6);

}
