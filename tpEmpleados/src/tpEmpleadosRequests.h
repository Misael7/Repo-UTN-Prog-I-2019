/*
 * tpEmpleadosRequests.h
 *
 *  Created on: Oct 2, 2019
 *      Author: misael
 */

#ifndef TPEMPLEADOSREQUESTS_H_
#define TPEMPLEADOSREQUESTS_H_
#include "tpEmpleadosStruct.h"
#include "handyFunctions.h"
#include <stdio_ext.h>


int startEmployee(Employee listA[],int length);
int addEmployee(Employee listA[],int length);
int printEmployees(Employee* list, int length);


#endif /* TPEMPLEADOSREQUESTS_H_ */
