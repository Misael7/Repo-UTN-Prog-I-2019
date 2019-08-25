/*
 ============================================================================
 Name        : SumaPromedio-Clase1.c
 Author      : Misael Emmanuel Cortes
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int hacerSumas (int *resultado);

int main(void)
	{
	int resultado;
	hacerSumas(&resultado);
	printf("El promedio es:%d",resultado);
	return 0;
	}

int hacerSumas (int *resultado)
	{
	int numIngreso;
	int cuentaIngresos=0;
	int sumaIngresos=0;
	while(cuentaIngresos<5)
		{
			printf("Ingrese 5 num");
			scanf("%d",&numIngreso);
			sumaIngresos=numIngreso+sumaIngresos;
			cuentaIngresos++;
		}
	*resultado=sumaIngresos/cuentaIngresos;
	return 0;
}
