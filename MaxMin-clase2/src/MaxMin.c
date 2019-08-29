/*
 ============================================================================
 Name        : MaxMin.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funcionesMaxMin.h"

int main(void)
{
	int numMax;
	int numMin;

	funcionMaxMin(&numMax,&numMin);
	printf("Valor maximo: %d ",numMax);
	printf("Valor minimo: %d ",numMin);
	return 0;
}




