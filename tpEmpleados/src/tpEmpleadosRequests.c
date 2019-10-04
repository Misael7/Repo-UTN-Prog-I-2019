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
	char auxname[51];
	char auxlastName[51];
	float auxsalary;
	int auxsector;

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
			printf("Ingrese salario:\n ");
			getFloat(&listA[i].salary);
			FLUSH;
			printf("Ingrese sector:\n");
			getInt(&listA[i].sector);
			FLUSH;
			listA[i].isEmpty=0;
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
			printf("Nombre: \n %s ",listA[i].name);
			printf("Apellido: \n %s",listA[i].lastName);
			printf("Salario: \n %f", listA[i].salary);
			printf("Sector: \n %d", listA[i].sector);
		}
	}

	return 0;
}
