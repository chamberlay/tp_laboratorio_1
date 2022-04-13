#include "TP_[1]Calculos.h"
#include "Funciones.h"
#include "inputs.h"

float ingresarNumeroFlotante(char* mensaje, char* mensajeError, float minimo, float maximo)
{
	float numero;

	printf(mensaje);
	fflush(stdin);
	scanf("%f", &numero);

	while(numero < minimo || numero > maximo)
	{
		printf(mensajeError);
		fflush(stdin);
		scanf("%f", &numero);
	}

	return numero;
}
int ingresarNumeroEntero(char* mensaje, char* mensajeError, int min, int max)
{
	int numeroIngresado;

	if(mensaje != NULL && mensajeError != NULL && min < max)
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

	}

	return numeroIngresado;
}
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
