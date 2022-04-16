#ifndef FUNCIONES_H_
#define FUNCIONES_H_
#include <stdio.h>
#include <stdlib.h>

// kilometros asignados en el enunciado para la carga forzada
#define KM_CARGA_FORZADA 7090

// precio del vuelo con aerolineas argentinas asignado en el enunciado para la carga forzada
#define PRECIO_AEROLINEAS_CARGA_FORZADA 162965

// precio del vuelo con latam asignado en el enunciado para la carga forzada
#define PRECIO_LATAM_CARGA_FORZADA 159339

void mostrarMenu(void);

void procesarMenu(int opcion, float kmIngresados, float  precioAerolineas, float precioLatam, int indexKm, int indexAerolineas, int indexLatam);


#endif /* FUNCIONES_H_ */
