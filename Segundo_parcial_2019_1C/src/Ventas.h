/*
 * Ventas.h
 *
 *  Created on: 20 nov. 2019
 *      Author: alumno
 */

#ifndef VENTAS_H_
#define VENTAS_H_

typedef struct
{
	char id_venta[50];
	char fecha_venta[50];
	char tipo_foto[50];
	char cantidad[50];
	char precio_unitario[50];
	char cuit_cliente[50];
}Ventas;

#endif /* VENTAS_H_ */
