/*
 * tpEmpleadosStruct.c
 *
 *  Created on: Oct 2, 2019
 *      Author: misael
 */

#include "tpEmpleadosStruct.h"
#include "tpEmpleadosRequests.h"


typedef struct {
	int ID = 0;
	char name[51];
	char lastName[51];
	float salary =0;
	int sector =0;
	int isEmpty=0;
} Employee;

