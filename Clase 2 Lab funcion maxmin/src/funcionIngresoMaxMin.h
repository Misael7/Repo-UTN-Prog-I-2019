/*
 * funcionIngresoMaxMin.h
 *
 *  Created on: 29 ago. 2019
 *      Author: alumno
 */

#ifndef FUNCIONINGRESOMAXMIN_H_
#define FUNCIONINGRESOMAXMIN_H_
#include <ctype.h>


int pedirNumero(int*numIng, int rangoMax, int rangoMin)
{
	int reintentos=0;
	printf(" Ingrese numero: ");
	scanf("%d",numIng);
	while(*numIng<=rangoMin && *numIng>=rangoMax)
		{

			printf(" Error, ingrese un numero ");
			reintentos ++;
			scanf("%d",numIng);

			if(reintentos == 5)
				{
					return -1;
				}
			}
	return 0;
	}

#endif /* FUNCIONINGRESOMAXMIN_H_ */
