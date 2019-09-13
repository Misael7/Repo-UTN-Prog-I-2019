/*
 ============================================================================
 Name        : listaPersonas.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define MAXPERSONAS 100
struct S_Persona
{
	char nombre[50];
	int id;
};
typedef struct S_Persona Persona;


int main(void)

{
	Persona A[100];
	char nom[50];
	for(int i=0;i<sizeof(A)-1;i++)
	{

		A.nombre[i]=fgets(A.nombre,sizeof(A.nombre),stdin);

	}


	return 0;
}


