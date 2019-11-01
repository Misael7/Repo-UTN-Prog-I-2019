#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromText(FILE* pFile , LinkedList* pArrayListEmployee)
{
	int r;
	int pos=0;
	Employee* listaEmpleados[1000];

	char var1[50],var3[50],var2[50],var4[50];

	do
	{
			r = fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",var1,var2,var3,var4);
			if(r==4)
			{


				 int id = atoi(var1);
					 Employee* empleado = employee_newParametros(var1,var2,var3,var4);
					 if(empleado!=NULL)
					 {
						 //listaEmpleados = empleado;
						 //pos++;
						 //if(pos>=1000){break;}
						 ll_add(pArrayListEmployee,empleado); // Equivalente a array[pos]=empleado

					 }



			/*printf("Leí: %s %s %s %s\n",var1,var2,var3,var4);*/
			}
			else
			break;
	}while(!feof(pFile));
    return 1;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee)
{

    return 1;
}
