/*
 * Ventas.c
 *
 *  Created on: 20 nov. 2019
 *      Author: alumno
 */

#include "Ventas.h"

void venta_delete()
{
	void free(void*);
}

Ventas* venta_new()
{
	return malloc(sizeof(Ventas));
}

Ventas* venta_newParametros(char* id_venta,char* fecha_venta,char* tipo_foto,char* cantidad,char* precio_unitario, char*cuit_cliente)
{
	Ventas* retorno = NULL;
	Ventas *this;

	return retorno;
}

int venta_setID(Ventas* this,char* id_venta)
{
	int retorno = EXIT_FAILURE;

	if(this != NULL)
	{
		strcpy(this->id_venta,id_venta);
		retorno = EXIT_SUCCESS;
	}

	return retorno;
}
