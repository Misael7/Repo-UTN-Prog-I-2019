/*
 * AlquilerDeJuegosRequests.c
 *
 *  Created on: Oct 8, 2019
 *      Author: misael
 */

#include "AlquilerDeJuegosRequests.h"
///////////////////////////////////////Clientes////////////////////////////////////////
int startClient(Client clientes[],int length)
{
	if(clientes!=NULL)
	{
		for(int i=0; i < length;i++)
			{
				clientes[i].isEmpty=1;
			}

	}
	return 0;
}

int addClient(Client clientes[], int length)
{
	for(int i = 0; i<length ; i++ )
	{
		if(clientes[i].isEmpty == 1)
		{
			printf("Ingrese nombre:\n");
			getStringNames(clientes[i].clientName);
			FLUSH;
			printf("Ingrese apellido:\n");
			getStringNames(clientes[i].clientLastName);
			FLUSH;
			printf("Ingrese genero (1 M 2 F):\n");
			getInt(&clientes[i].clientGender);
			FLUSH;
			printf("Ingrese número de teléfono sin símbolos:\n");
			getInt(&clientes[i].phoneNumber);
			FLUSH;
			clientes[i].isEmpty=0;
			clientes[i].clientID=i;
			break;
		}
	}

	return 0;
}

int modClient(Client clientes[],int length, int idSearch)
{
	printf("\n Introduzca ID de cliente a modificar\n");
	getInt(&idSearch);
	clientes[idSearch].isEmpty=1;
	addClient(clientes,length);
	return 0;
}

int removeClient(Client clientes[], int length,int idSearch)
{
	printf("\n Introduzca ID de cliente a dar de baja \n");
	getInt(&idSearch);
	clientes[idSearch].isEmpty=1;
	return 0;
}

int printClient(Client clientes[], int length)
{
	for(int i = 0; i<length ; i++ )
	{
		if(clientes[i].isEmpty==0)
		{
			printf("Nombre: %s \n",clientes[i].clientName);
			printf("Apellido: %s \n",clientes[i].clientLastName);
			printf("Género: %d \n", clientes[i].clientGender);
			printf("Número de telefono: %d \n", clientes[i].phoneNumber);
			printf("ID de empleado: %d \n", clientes[i].clientID);
		}
	}

	return 0;
}

int findClientById(Client clientes[], int length,int idSearch)
{
	printf("\n Introduzca ID de cliente a localizar \n");
	getInt(&idSearch);
	clientes[idSearch];
	printf("\nLa ID buscada corresponde a:\n");
	printClient(clientes,length);
	return 0;
}
///////////////////////////////////////Juegos/////////////////////////////////////////

int startGame(Game juegos[],int length)
{
	if(juegos!=NULL)
	{
		for(int i=0; i < length;i++)
			{
				juegos[i].isEmpty=1;
			}

	}
	return 0;
}

int addGame(Game juegos[], int length)
{
	for(int i = 0; i<length ; i++ )
	{
		if(juegos[i].isEmpty == 1)
		{
			printf("Ingrese nombre de juego:\n");
			getStringNames(juegos[i].gameName);
			FLUSH;
			printf("Ingrese desc. del juego:\n");
			getStringNames(juegos[i].gameDesc);
			FLUSH;
			printf("Ingrese valor del juego:\n");
			getFloat(&juegos[i].gamePrice);
			FLUSH;
			printf("Ingrese categoria del juego:\n 1) Accion \n 2) Aventura \n 3) Terror \n 4) Fantasia \n");
			getInt(&juegos[i].gameCategory);
			FLUSH;
			juegos[i].isEmpty=0;
			juegos[i].gameID=i;
			break;
		}
	}

	return 0;
}

int modGame(Game juegos[],int length, int idSearch)
{
	printf("\n Introduzca ID de juego a modificar\n");
	getInt(&idSearch);
	juegos[idSearch].isEmpty=1;
	addClient(juegos,length);
	return 0;
}

int removeGame(Game juegos[], int length,int idSearch)
{
	printf("\n Introduzca ID de juego a dar de baja \n");
	getInt(&idSearch);
	juegos[idSearch].isEmpty=1;
	return 0;
}

int printGame(Game juegos[], int length)
{
	for(int i = 0; i<length ; i++ )
	{
		if(juegos[i].isEmpty==0)
		{
			printf("Nombre: %s \n",juegos[i].gameName);
			printf("Apellido: %s \n",juegos[i].gameDesc);
			printf("Precio: %f \n", juegos[i].gamePrice);
			printf("Categoría: %d \n", juegos[i].gameCategory);
			printf("ID de juego: %d \n", juegos[i].gameID);
		}
	}

	return 0;
}

int findGameById(Game juegos[], int length,int idSearch)
{
	printf("\n Introduzca ID de juego a localizar \n");
	getInt(&idSearch);
	juegos[idSearch];
	printf("\nLa ID buscada corresponde a:\n");
	printGame(juegos,length);
	return 0;
}
