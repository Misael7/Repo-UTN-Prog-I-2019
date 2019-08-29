/*
 * funcionesMaxMin.h
 *
 *  Created on: 28 ago. 2019
 *      Author: alumno
 */

#ifndef FUNCIONESMAXMIN_H_
#define FUNCIONESMAXMIN_H_



int funcionMaxMin(int *numMax, int *numMin)
{
		int flag=0;
		int numIngres=0;
		int numItera=0;


	printf("Ingrese cantidad de iteraciones ");
	scanf(" %d",&numItera);

	for(;numItera>0;numItera--)
	{
		printf("ingrese un numero ");
		scanf("%d",&numIngres);

		if(flag==0)
		{
			*numMin=numIngres;
			*numMax=numIngres;
			flag=1;
		}

		if (&numIngres>numMax)
		{
			*numMax=numIngres;
		}

		if (&numIngres<numMin)
		{
			*numMin=numIngres;
		}

	}
	return 0;
}

#endif /* FUNCIONESMAXMIN_H_ */
