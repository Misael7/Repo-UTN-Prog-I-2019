#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <string.h>
#include "LinkedList.h"
#include "Employee.h"
#include "handyFunctions.h"



void employee_delete()
{
	void free(void*);
}

Employee* employee_new()
{
	return malloc(sizeof(Employee));
}

Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr,char* sueldoStr)
{
	Employee *retorno = NULL;
	Employee *this;
	int id = atoi(idStr);
	char nombre[128];
	strcpy(nombre,nombreStr);
	int horasTrabajadas = atoi(horasTrabajadasStr);
	int sueldo = atoi(sueldoStr);
	this = employee_new();

	if(this != NULL)
	{
		if(		employee_setId(this,id) == EXIT_SUCCESS &&
				employee_setNombre(this,nombre) == EXIT_SUCCESS &&
				employee_setHorasTrabajadas(this,horasTrabajadas) == EXIT_SUCCESS &&
				employee_setSueldo(this,sueldo) == EXIT_SUCCESS)
		{

				retorno = this;
		}
		else
		{

			employee_delete(this);
		}
	}

	return retorno;

}
//Employee ID Getter Setter
int employee_setId(Employee* this,int id)
{
	int retorno = EXIT_FAILURE;

		if(this != NULL)
		{
			this->id=id;
			retorno = EXIT_SUCCESS;
		}

		return retorno;
}

int employee_getId(Employee* this,int* id)
{
	int retorno = EXIT_FAILURE;

	if(this != NULL && id != NULL)
	{
		*id=this->id;
		retorno = EXIT_SUCCESS;
	}

	return retorno;
}

/*static int isValidId(int *id)
{
	int retorno = EXIT_FAILURE;

	if(id != NULL)
	{
		if(id > 0)
		{
			retorno = EXIT_SUCCESS;
		}
	}
	return retorno;
}*/

//Employee Nombre Getter Setter

int employee_setNombre(Employee* this,char* nombre)
{
	int retorno = EXIT_FAILURE;

	if(this != NULL)
	{
		strcpy(this->nombre,nombre);
		retorno = EXIT_SUCCESS;
	}

	return retorno;
}

int employee_getNombre(Employee* this,char* nombre)
{
	int retorno = EXIT_FAILURE;

	if(this != NULL && nombre != NULL)
	{
		strcpy(nombre,this->nombre);
		retorno = EXIT_SUCCESS;
	}

	return retorno;
}

//Employee HorasTrabajadas Getter Setter

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas)
{
	int retorno = EXIT_FAILURE;

	if(this != NULL)
	{
		this->horasTrabajadas=horasTrabajadas;
		retorno = EXIT_SUCCESS;
	}

	return retorno;
}

int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas)
{
	int retorno = EXIT_FAILURE;

	if(this != NULL)
	{
		*horasTrabajadas=this->horasTrabajadas;
		retorno = EXIT_SUCCESS;
	}

	return retorno;
}

//Employee Sueldo Getter Setter

int employee_setSueldo(Employee* this,int sueldo)
{
	int retorno = EXIT_FAILURE;

	if(this != NULL)
	{
		this->sueldo=sueldo;
		retorno = EXIT_SUCCESS;
	}

	return retorno;
}

int employee_getSueldo(Employee* this,int* sueldo)
{
	int retorno = EXIT_FAILURE;

	if(this != NULL)
	{
		*sueldo=this->sueldo;
		retorno = EXIT_SUCCESS;
	}

	return retorno;
}

int employeeSortCondition(void* arg1 , void* arg2)
{
	Employee * pE1 = (Employee*) arg1;
	Employee * pE2 = (Employee*) arg2;
	if(pE1->horasTrabajadas > pE2->horasTrabajadas)
	{
		return 1;
	}
	if(pE1->horasTrabajadas < pE2->horasTrabajadas)
	{
		return -1;
	}
	return 0;
}

int maxId(LinkedList* pArrayListEmployee, int max)
{
	printf("Max 1\n");
	max=0;
	int flag = 0;
	Employee * this;
	printf("%d\n",ll_len(pArrayListEmployee));
	printf("Max 2 %d\n",&this->id);
	printf("%d\n",ll_len(pArrayListEmployee));
	for(int i =0 ; i <ll_len(pArrayListEmployee); i++)
	{
		printf("Max 3\n");
		this=ll_get(pArrayListEmployee, i);
		printf("Max 4 %d \n");
		if(flag==0)
		{	printf("Max 5 %d\n",&max);
			max = this->id;
			printf("Max afterload %d \n",&max);
			flag = 1;
		}
		printf("Max 6\n");
		if(this->id > max)
		{printf("Max 7\n");
			max = this->id;
		}
	}
	printf("Max 8\n");
	return max;
}
