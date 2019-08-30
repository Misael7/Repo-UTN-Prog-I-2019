/*
 ============================================================================
 Name        : Clase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funcionIngresoMaxMin.h"
#include <limits.h>

int main(void)
{
	int numIng=0;
    int ok;

	ok = pedirNumero(&numIng,100,1);

	if(ok==0)
	{
		printf("El num es:%d ",numIng);

	}
	else
	{
		printf(" Maximos intentos alcanzados, saliendo ");
	}


	return 0;
	//esto estaba bien

}
