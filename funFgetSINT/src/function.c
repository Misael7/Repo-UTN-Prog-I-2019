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
	fgets(numInt,sizeof(numInt),stdin);
	numLength=strlen(numInt);
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

int getCharUTN(char * charInput)
{
	fgets(charInput,sizeof(charInput),stdin);
	return 0;
}

