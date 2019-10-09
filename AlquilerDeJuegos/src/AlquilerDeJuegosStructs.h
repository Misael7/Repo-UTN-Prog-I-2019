/*
 * AlquilerDeJuegosStructs.h
 *
 *  Created on: Oct 8, 2019
 *      Author: misael
 */

#ifndef ALQUILERDEJUEGOSSTRUCTS_H_
#define ALQUILERDEJUEGOSSTRUCTS_H_


typedef struct {
	int gameID;
	char gameName[51];
	char gameDesc[51];
	float gamePrice;
	int gameCategory;
	int isEmpty;
} Game;

typedef struct {
	int clientID;
	char clientName[51];
	char clientLastName[51];
	int clientGender;
	int phoneNumber;
	int isEmpty;
} Client;

typedef struct {
	int rentalID;
	int gameID;
	int clientID;
	int dateDay;
	int dateMonth;
	int dateYear;
	int isEmpty;
} Rental;



#endif /* ALQUILERDEJUEGOSSTRUCTS_H_ */
