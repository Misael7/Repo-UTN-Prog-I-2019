/*
 ============================================================================
 Name        : funFgetSINT.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "function.h"
#include <strings.h>


int main(void)
{
	int numerito;
	float numerito2;
	char palabrita[50];
	int ret;
	float ret2;
	char ret3;


	ret = getIntUTN(&numerito);
	ret2 = getFloatUTN(&numerito2);
	ret3 = getCharUTN(&palabrita);

	if(ret < 0)
	{
		printf("No se ingreso un numero");
	}
	else if(ret==0)
	{
		printf("Se ingreso int %d",numerito);
		printf(" Se ingreso float %f",numerito2);
		printf(" Se ingreso char %s",palabrita);
	}



	return 0;
}
