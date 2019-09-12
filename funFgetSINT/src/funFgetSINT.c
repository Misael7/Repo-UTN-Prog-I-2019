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
	int ret;


	ret = getIntUTN(&numerito);

	if(ret < 0)
	{
		printf("No se ingreso un numero");
	}
	else if(ret==0)
	{
		printf("Se ingreso %d",numerito);
	}


	return 0;
}
