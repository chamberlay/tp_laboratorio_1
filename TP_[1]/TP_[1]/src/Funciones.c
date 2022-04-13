#include "TP_[1]Calculos.h"
#include "Funciones.h"
#include "inputs.h"

void procesarMenu(int opcion, float kmIngresados, float  precioAerolineas, float precioLatam)
{
	switch(opcion)
			{

				case 3:

					if(kmIngresados > 0 && precioLatam > 0 && precioAerolineas > 0)
					{
						printf("\nSe realizaron los calculos necesarios.");
					}else
					{
						printf("\nNo se han cargado los datos.");
					}

				break;

				case 4:

					if(kmIngresados > 0 && precioLatam > 0 && precioAerolineas > 0)
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
						printf("No se han cargado los datos.");
					}

				break;

				case 5:
					printf("en construccion.");
				break;

				case 6:
					printf("\nPrograma terminado!!");
				break;
			}
}

void mostrarMenu(void)
{
    int opcion;
	float kmIngresados;
	float precioAerolineas;
	float precioLatam;

	do
	{
		pedirEntero(&opcion, "1. Ingresar kilómetros:\n"
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

		if(opcion == 1)
		{
			kmIngresados = ingresarNumeroFlotante("Ingrese los kilometros del vuelo: ", "Error. Reingrese los kilometros del vuelo (100 / 16.000): ", 100, 16000);
		}
		else
		{
			if(opcion == 2)
			{
				precioAerolineas = ingresarNumeroFlotante("Ingrese el precio del vuelo con aerolineas: ", "Error. Debe ingresar un precio valido (100 / 1.000.000): ", 1000, 1000000);

				precioLatam = ingresarNumeroFlotante("Ingrese el precio del vuelo con latam: ", "Error. Debe ingresar un precio valido (100 / 1.000.000): ", 1000, 1000000);
			}else
			{
				procesarMenu(opcion, kmIngresados, precioAerolineas, precioLatam);
			}
		}

	}while(opcion != 6);
}
