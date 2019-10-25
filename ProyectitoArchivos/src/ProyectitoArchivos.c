/*
 ============================================================================
 Name        : ProyectitoArchivos.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "cliente.h"
#include "utn.h"

int main(void)
{
 FILE *pFile;
 int r;
 sCliente* listaClientes[50];
 for (int i = 0; i <50; i++){listaClientes[i]=NULL;}
 int posicion=0;
 char var1[32];
 char var2[32];
 char var3[32];
 char var4[32];
 char var5[32];

 pFile = fopen("clientes.txt","r");
 if(pFile == NULL)
 {
	 printf("El archivo no existe");
	 exit(EXIT_FAILURE);
 }
 do
 {
	 r = fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",var1,var2,var3,var4,var5);
	 if(r==5){
	 printf("Lei: %s %s %s %s %s\n",var1,var2,var3,var4,var5);
	 //Hacer new para generar un cliente
	 //Cargar los campos con los datos
	 //Guardar Puntero Addr en la lista
	 int id = atoi(var1);
	 sCliente* pc = new_clienteParametros(var2,var4,var5,var3,id,1);
	 if(pc!=NULL)
	 {
		 listaClientes[posicion] = pc;
		 posicion++;
		 if(posicion>=50){break;}
	 }

	 }else
	 break;
 }while(!feof(pFile));
 fclose(pFile);
 exit(EXIT_SUCCESS);
}
