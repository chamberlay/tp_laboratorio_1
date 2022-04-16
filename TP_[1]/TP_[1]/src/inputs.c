#include "TP_[1]Calculos.h"
#include "Funciones.h"
#include "inputs.h"

/**
 * @fn int pedirFloat(float* flotante, char* mensaje, char* mensajeError, float min, float max)
 * @brief pedir un numero flotante y guardarlo.
 * @param flotante: variable donde se guarda el numero ingresado.
 * @param mensaje: el mensaje que se mostrara en primera oportunidad.
 * @param mensajeError: el mensaje que se mostrara en caso de error.
 * @param min: el numero minimo que se permite.
 * @param max: el numero maximo que se permite.
 * @return: retorna -1 en caso de que no se cargara un numero y 0 en caso contrario.
 */
int pedirFloat(float* flotante, char* mensaje, char* mensajeError, float min, float max)
{
	int retorno = -1;
	float numeroIngresado;

	if(flotante != NULL && mensaje != NULL && mensajeError != NULL && min < max)
	{
		printf("%s", mensaje);
		fflush(stdin);
		scanf("%f", &numeroIngresado);

		while(numeroIngresado < min || numeroIngresado > max)
		{
			printf("%s", mensajeError);
			fflush(stdin);
			scanf("%f", &numeroIngresado);
		}

		*flotante = numeroIngresado;
		retorno = 0;
	}

	return retorno;
}


/**
 * @fn int pedirEntero(int* entero, char* mensaje, char* mensajeError, int min, int max)
 * @brief pedir un numero entero y guardarlo.
 * @param entero: variable donde se guarda el numero ingresado.
 * @param mensaje: el mensaje que se mostrara en primera oportunidad.
 * @param mensajeError: el mensaje que se mostrara en caso de error.
 * @param min: el numero minimo que se permite.
 * @param max: el numero maximo que se permite.
 * @return: retorna -1 en caso de que no se cargara un numero y 0 en caso contrario.
 */
int pedirEntero(int* entero, char* mensaje, char* mensajeError, int min, int max)
{
	int retorno = -1;
	int numeroIngresado;

	if(entero != NULL && mensaje != NULL && mensajeError != NULL && min < max)
	{
		printf("%s", mensaje);
		fflush(stdin);
		scanf("%d", &numeroIngresado);

		while(numeroIngresado < min || numeroIngresado > max)
		{
			printf("%s", mensajeError);
			fflush(stdin);
			scanf("%d", &numeroIngresado);
		}

		*entero = numeroIngresado;
		retorno = 0;
	}

	return retorno;
}
