/*
 * function.c
 *
 *  Created on: 12 sep. 2019
 *      Author: alumno
 */


#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <stdio_ext.h>
#define FLUSH __fpurge(stdin);

int getIntUTN(int * intInput);
int getFloatUTN(float * floatInput);
int getCharUTN(char * charInput);


int getIntUTN(int * intInput)
{
	int buffer = 0;
	int errorNum=0;
	int numLength;
	char numInt[6];
	printf("Ingrese INT");
	FLUSH;
	fgets(numInt,sizeof(numInt),stdin);
	numLength=strlen(numInt)-1;

	for(int i=0;i<numLength-1;i++)
		{
			if(!(numInt[i]>='0' && numInt[i]<='9'))
			{
				errorNum=-1;
				break;
			}
		}

	if(errorNum==0)
	{
		buffer=atoi(numInt);
		*intInput=buffer;
	}


	return errorNum;
}

int getFloatUTN(float * floatInput)
{
	float buffer = 0;
	int errorNum=0;
	int numLength;
	char numFloat[20];
	printf("Ingrese float");
	FLUSH;
	fgets(numFloat,sizeof(numFloat),stdin);
	printf("%s",numFloat);
	numLength=strlen(numFloat)-1;
	/*9for(int i=0;i<numLength-1;i++)
		{
			if(!(numFloat[i]>='0' && numFloat[i]<='9'))
			{
				errorNum=-1;
				break;
			}
		}*/

	if(errorNum==0)
	{
		printf("numFloat %s",numFloat);
		buffer=atof(numFloat);
		printf("buffer %f",buffer);
		*floatInput=buffer;
	}


	return errorNum;
}
/*{
	float getFloat=0;
	int errorNum=0;
	scanf("%f",&getFloat);
	FLUSH;
	if(!(getFloat*2/2==getFloat))
	{
	 errorNum=-1;
	}
	else
	{
		*floatInput=getFloat;
	}
	return errorNum;
}
*/
int getCharUTN(char * charInput)
{
	FLUSH;
	char buffer[1024];
	fgets(buffer,sizeof(buffer),stdin);
	strncpy(charInput,buffer,50);
	printf("char %s",buffer);
	return 0;
}


