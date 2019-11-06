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
	Employee* this;
	Employee* retorno = NULL;
	int id=0;
	char nombre[128];
	int horasTrabajadas=0;
	int sueldo=0;
	id= ll_len(pArrayListEmployee);
	printf("Ing. Nom: \n");
	getStringNames(nombre);
	printf("Ing. Hor. Tr: \n");
	getInt(&horasTrabajadas);
	FLUSH;
	printf("Ing. Sueldo: \n");
	getInt(&sueldo);
	FLUSH;
	printf("ID: %d\nNombre: %s \nHoras Tr: %d \nSueldo: %d \n", id , nombre , horasTrabajadas , sueldo);

	// No sé por qué verga crashea acá

	/*employee_setId(this, id);
	employee_setNombre(this,nombre);
	employee_setHorasTrabajadas(this,horasTrabajadas);
	employee_setSueldo(this,sueldo);*/

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

	ll_add(pArrayListEmployee, this);

    return retorno;
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
	Employee* empleado;
	int index;
	printf("Introducir núm de empleado a modificar");
	scanf("%d",index);
	FLUSH;
	ll_set(pArrayListEmployee,index,empleado);
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
	cant=fwrite ( empleado , sizeof ( Employee ) , longo , pFile); //Se escribe al archivo
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
    return 1;
}

