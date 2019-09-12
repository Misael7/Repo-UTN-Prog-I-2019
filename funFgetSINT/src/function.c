/*
 * function.c
 *
 *  Created on: 12 sep. 2019
 *      Author: alumno
 */


#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
int getIntUTN(int * intInput);


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

