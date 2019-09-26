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
	printf("Get Char\n");
	getString(a);
	printf("Get Char names\n");
	getStringNames(aName);
	printf("Main string test %s \n",a); //Print test getString
	printf("Main string names test %s\n",aName);
	return EXIT_SUCCESS;
}
