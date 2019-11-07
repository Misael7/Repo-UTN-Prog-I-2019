#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"
#include "handyFunctions.h"

/** \brief Carga los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromText(char* path , LinkedList* pArrayListEmployee)
{
	FILE* pFile;
	pFile = fopen("data.csv","r");
		if(pFile == NULL)
		{
				printf("El archivo no existe");
				exit(EXIT_FAILURE);
		}
		else
		{
			parser_EmployeeFromText(pFile, pArrayListEmployee);
		}
		fclose(pFile);
    return 1;
}

/** \brief Carga los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromBinary(char* path , LinkedList* pArrayListEmployee)
{
	FILE* pFile;
		pFile = fopen("data.csv","rb");
			if(pFile == NULL)
			{
					printf("El archivo no existe");
					exit(EXIT_FAILURE);
			}
			else
			{
				parser_EmployeeFromText(pFile, pArrayListEmployee);
			}
			fclose(pFile);

	return 1;
}

/** \brief Alta de empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_addEmployee(LinkedList* pArrayListEmployee)
{
	printf("Ingreso 0");
	Employee* this=NULL;
	printf("Ingreso 1");
	this = (Employee*)malloc(sizeof(Employee*));
	char strId[50];
	char nombreStr[50];
	char horasTrabajadasStr[50];
	char sueldoStr[50];
	printf("Ingreso 2");
	if(this!=NULL)
	{
		strcpy(strId,atoi(ll_len(pArrayListEmployee)));
		printf("Ingrese Nombre: \n");
		getStringNames(nombreStr);
		printf("Ingrese Horas Trabajadas: \n");
		getString(horasTrabajadasStr);
		printf("Ingrese Sueldo: \n");
		getString(sueldoStr);


		this = employee_newParametros(strId, nombreStr,horasTrabajadasStr,sueldoStr);

		ll_add(pArrayListEmployee, this);
	}

	return this;
}

/** \brief Modificar datos de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_editEmployee(LinkedList* pArrayListEmployee)
{
	int index;
	printf("Introducir núm de empleado a modificar");
	scanf("%d",index);
	FLUSH;
	ll_get(pArrayListEmployee, index);
	controller_addEmployee(pArrayListEmployee);
    return 1;
}

/** \brief Baja de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_removeEmployee(LinkedList* pArrayListEmployee)
{
	int index;
	printf("Introducir núm de empleado a eliminar");
	scanf("%d",index);
	ll_get(pArrayListEmployee, index);
	ll_remove(pArrayListEmployee,index);
    return 1;
}

/** \brief Listar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_ListEmployee(LinkedList* pArrayListEmployee)
{
	printf("%d",ll_len(pArrayListEmployee));
	for(int i =0 ; i <ll_len(pArrayListEmployee); i++)
	{
	Employee* empleado;
	empleado=ll_get(pArrayListEmployee, i); // equivalente empleado = array[i]
	printf("ID Empleado %d\nNombre Empleado  %s\nHoras Trabajadas %d\nSueldo %d\n", empleado->id , empleado->nombre , empleado->horasTrabajadas , empleado->sueldo);
	}
    return 1;
}

/** \brief Ordenar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_sortEmployee(LinkedList* pArrayListEmployee)
{
	Employee* arg1;
	Employee* arg2;
	ll_sort(pArrayListEmployee,employeeSortCondition(*arg1 ,* arg2),0);
    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsText(char* path , LinkedList* pArrayListEmployee)
{
	FILE *pFile;
	Employee* empleado;
	int cant=0;
	int longo = ll_len(pArrayListEmployee);
	if((pFile=fopen("data.csv","w"))==NULL) //Se abre en modo escritura
	{
	printf("\nEl archivo no puede ser abierto");
	exit (1);
	}
	cant=fwrite (empleado, sizeof(Employee) ,longo,pFile); //Se escribe al archivo
	if (cant<longo)
	{
		printf("\nError al escribir el archivo");
	}
	else
	{
		printf("\nSe escribieron %d caracteres", cant);
	}
	fclose(pFile);
    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsBinary(char* path , LinkedList* pArrayListEmployee)
{
	FILE *pFile;
	Employee* empleado;
	int cant=0;
	int longo = ll_len(pArrayListEmployee);
	if((pFile=fopen("data.csv","wb"))==NULL) //Se abre en modo escritura
	{
		printf("\nEl archivo no puede ser abierto");
		exit (1);
	}
	cant=fwrite (empleado, sizeof(Employee) ,longo,pFile); //Se escribe al archivo
	if (cant<longo)
	{
			printf("\nError al escribir el archivo");
	}
	else
	{
			printf("\nSe escribieron %d caracteres", cant);
	}
	fclose(pFile);
    return 1;
}

