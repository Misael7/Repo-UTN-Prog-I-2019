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
	getString(a);
	printf("Main %s",a); //Print test getString
	return EXIT_SUCCESS;
}
