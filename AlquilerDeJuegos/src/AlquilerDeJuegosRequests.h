/*
 * AlquilerDeJuegosRequests.h
 *
 *  Created on: Oct 8, 2019
 *      Author: misael
 */

#include "AlquilerDeJuegosStructs.h"
#include "handyFunctions.h"
#include <stdio_ext.h>


///////////////////////////////////////Clientes////////////////////////////////////////
int startClient(Client clientes[],int length);
int addClient(Client clientes[], int length);
int modClient(Client clientes[],int length, int idSearch);
int removeClient(Client clientes[], int length,int idSearch);
int printClient(Client clientes[], int length);
int findClientById(Client clientes[], int length,int idSearch);

///////////////////////////////////////Juegos/////////////////////////////////////////
int startGame(Game juegos[],int length);
int addGame(Game juegos[], int length);
int modGame(Game juegos[],int length, int idSearch);
int removeGame(Game juegos[], int length,int idSearch);
int printGame(Game juegos[], int length);
int findGameById(Game juegos[], int length,int idSearch);

///////////////////////////////////////Alquileres/////////////////////////////////////////
int startRental(Rental alquileres[],int length);
int addRental(Rental alquileres[], int length, Game juegos[], Client clientes[]);
int modRental(Rental alquileres[],int length, int idSearch, Game juegos[], Client clientes[]);
int removeRental(Rental alquileres[], int length,int idSearch);
int printRental(Rental alquileres[], int length);
int findRentalById(Rental alquileres[], int length,int idSearch);

