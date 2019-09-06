/*
 ============================================================================
 Name        : ShuffleArray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int array[5]={20,21,35,1,0};
	int i; int j;
	int aux=0;

	for(i=0;i<5;i++)
	{
		printf("Array sin ordenar: %d\n",array[i]);
	}

	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(array[i]>array[j])
			{
				aux=array[i];
				array[i]=array[j];
				array[j]=aux;
			}
		}
	}

	for(i=0;i<5;i++)
		{
			printf("Array ordenado: %d\n",array[i]);
		}

}
