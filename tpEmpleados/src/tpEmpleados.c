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
	startEmployee(listA,LENGTH);

	do
	{
		printf("Ingrese una opción para operar:\n 1)Alta de empleado \n 2)Modificar datos de empleado \n 3)Baja de empleado \n ... \n Ingrese 9 para salir del programa \n");
		FLUSH;
		scanf("%d",&menuOptions);

		switch(menuOptions)
		{

				case(1):
				addEmployee(listA, LENGTH);
				printEmployees(listA,LENGTH);
				flagAdd=1;
				FLUSH;
				break;

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

				case(3):
						if(flagAdd==1)
						{

						}
						else
						{
							printf("\n Debe cargar un empleado antes de darlo de baja\n");
						}

		}
	}
	while(menuOptions!=9);

	return 0;
}
