/*
 ============================================================================
 Name        : handyFunctions.c
 Author      : Misael E. Cortes
 Version     :
 Copyright   : Use them at will
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "handyFunctions.h"

int main(void)
{
	char a[50];
	char aName[50];
	int intA;
	int intB;
	float floatA;

	printf("Get Char\n");
	getString(a);
	printf("Get Char names\n");
	getStringNames(aName);
	printf("Get int\n");
	getInt(&intA);
	printf("Get unsignedInt\n");
	getUnsignedInt(&intB);
	printf("Get Float\n");
	getFloat(&floatA);

	printf("Main string test %s \n",a); //Print test getString
	printf("Main string names test %s\n",aName);
	printf("Main int test %d\n",intA);
	printf("Main unsigned int test %d\n",intB);
	printf("Main float test %f\n"
			"",floatA);


	return EXIT_SUCCESS;
}
