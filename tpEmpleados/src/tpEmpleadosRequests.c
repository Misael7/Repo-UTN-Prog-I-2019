/*
 * tpEmpleadosRequests.c
 *
 *  Created on: Oct 2, 2019
 *      Author: misael
 */
#include "tpEmpleadosStruct.h"
#include "tpEmpleadosRequests.h"



int startEmployee(Employee listA[],int length)
{
	if(listA!=NULL)
	{
		for(int i=0; i < length;i++)
			{
				listA[i].isEmpty=1;
			}

	}
	return 0;
}

int addEmployee(Employee listA[], int length)
{
	for(int i = 0; i<length ; i++ )
	{
		if(listA[i].isEmpty == 1)
		{
			printf("Ingrese un nombre:\n");
			getStringNames(listA[i].name);
			FLUSH;
			printf("Ingrese un apellido:\n");
			getStringNames(listA[i].lastName);
			FLUSH;
			printf("Ingrese salario:\n");
			getFloat(&listA[i].salary);
			FLUSH;
			printf("Ingrese sector:\n");
			getInt(&listA[i].sector);
			FLUSH;
			listA[i].isEmpty=0;
			listA[i].empID=i;
			break;
		}
	}

	return 0;
}

int printEmployees(Employee listA[], int length)
{
	for(int i = 0; i<length ; i++ )
	{
		if(listA[i].isEmpty==0)
		{
			printf("Nombre: %s \n",listA[i].name);
			printf("Apellido: %s \n",listA[i].lastName);
			printf("Salario: %f \n", listA[i].salary);
			printf("Sector: %d \n", listA[i].sector);
			printf("ID de empleado: %d \n", listA[i].empID);
		}
	}

	return 0;
}

int findEmployeeById(Employee listA[], int length,int idSearch)
{
	printf("\n Introduzca ID de empleado a localizar \n");
	getInt(&idSearch);
	listA[idSearch];
	printf("\nLa ID buscada corresponde a:\n");
	printEmployees(listA,length);
	return 0;
}
