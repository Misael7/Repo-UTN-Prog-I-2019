/*
 ============================================================================
 Name        : tpEmpleados.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "tpEmpleadosStruct.h"
#include "handyFunctions.h"
#include "tpEmpleadosRequests.h"
#define LENGTH 1000

int main(void)
{
	Employee listA[LENGTH];
	int menuOptions;
	int flagAdd=0;
	int searchNum;
	startEmployee(listA,LENGTH);

	do
	{
		printf("\n Ingrese una opción para operar:\n 1)Alta de empleado \n 2)Modificar datos de empleado \n 3)Baja de empleado \n 4)Buscar empleado \n 8)Mostrar empleados \n ... \n Ingrese 9 para salir del programa \n");
		FLUSH;
		scanf("%d",&menuOptions);

		switch(menuOptions)
		{

				case(1):
				addEmployee(listA, LENGTH);
				flagAdd=1;
				FLUSH;
				break;
				//-------------------------------------------------------------------------//
				case(2):
						if(flagAdd==1)
						{

						}
						else
						{
							printf("\n Debe cargar un empleado antes de modificarlo\n");
						}
				FLUSH;
				break;
				//-------------------------------------------------------------------------//
				case(3):
						if(flagAdd==1)
						{

						}
						else
						{
							printf("\n Debe cargar un empleado antes de darlo de baja\n");
						}
				FLUSH;
				break;

				case(4):
						if(flagAdd==1)
						{
							findEmployeeById(listA,LENGTH,searchNum);
						}
						else
						{
							printf("\n Debe cargar un empleado antes de buscarlo\n");
						}
				FLUSH;
				break;

				//-------------------------------------------------------------------------//
				case(8):
						if(flagAdd==1)
						{
							printEmployees(listA,LENGTH);
						}
						else
						{
							printf("\n Debe cargar un empleado para mostrarlo!!");
						}

		}
		/////////////endswitch
	}
	while(menuOptions!=9);

	return 0;
}
