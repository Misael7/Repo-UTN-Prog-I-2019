#include "LinkedList.h"

int parser_parseVentas(char* fileName, LinkedList* listaVentas)
{
	int r;
	int pos=0;
	char var1[50],var3[50],var2[50],var4[50],var5[50],var6[50];
	do
	{
				r = fscanf(fileName,"%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n",var1,var2,var3,var4,var5,var6);
				if(r==6)
				{
					int id = atoi(var1);
					Ventas* venta = employee_newParametros(var1,var2,var3,var4);
					if(venta!=NULL)
					{
						ll_add(listaVentas,venta); // Equivalente a array[pos]=empleado
					}

				}
				else
				break;
	}while(!feof(fileName));

    return 1; // OK
}

