/*
 * Ventas.h
 *
 *  Created on: 20 nov. 2019
 *      Author: alumno
 */

#ifndef VENTAS_H_
#define VENTAS_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <string.h>
#include "LinkedList.h"

typedef struct
{
	char id_venta[50];
	char fecha_venta[50];
	char tipo_foto[50];
	char cantidad[50];
	char precio_unitario[50];
	char cuit_cliente[50];
}Ventas;

Ventas* venta_new();
Ventas* venta_newParametros(char* id_venta,char* fecha_venta,char* tipo_foto,char* cantidad,char* precio_unitario, char*cuit_cliente);
void venta_delete();

#endif /* VENTAS_H_ */
