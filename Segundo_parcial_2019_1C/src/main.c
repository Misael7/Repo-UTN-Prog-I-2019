#include <stdio.h>
#include <stdlib.h>
#include "Ventas.h"
#include "LinkedList.h"
#include "Parser.h"

/**
PARTE 1
Un negocio de revelado digital de fotos posee un registro en un archivo de las ventas de revelados
realizados por cliente y fecha. Realizar un programa que permita analizar esta información. El
programa deberá iniciar y cargar en una lista los elementos definidos en el archivo data.csv, el cual
cuenta con el siguiente formato:
ID_Venta;Fecha_Venta;Tipo_Foto;Cantidad;Precio_Unitario;CUIT_Cliente
Por ejemplo:
33;16/11/2018;4R_10x15;30;10.99;20-33263109-4
34;17/11/2018;6R_15x20;8;15.25;21-33782109-5
35;21/12/2018;POLAROID_11x9;8;15.25;21-33782109-5
Luego deberá generar un archivo “informes.txt” con el siguiente formato:
********************
Informe de ventas
********************
- Cantidad de fotos reveladas totales: XX
- Cantidad de ventas por un monto mayor a $150: XX
- Cantidad de ventas por un monto mayor a $300: XX
- Cantidad de fotos polaroids reveladas: XX
********************
Los tipos de fotos son los siguientes:
4R_10x15
5R_13x18
6R_15x20
8R_20x25
POLAROID_11x9
POLAROID_10x10
*/


int main()
{
    // Definir Linked List de ventas
    LinkedList* listaVentas;

    // Crear lista empledos
    //...

    // Leer empleados de archivo data.csv
    if(parser_parseVentas("data.csv",listaVentas)==1)
    {
        // Calcular sueldos
        printf("Calculando sueldos de empleados\n");
       // al_map(listaEmpleados,em_calcularSueldo); //Que verga es esto?

        // Generar archivo de salida
        if(generarArchivoSueldos("sueldos.csv",listaEmpleados)==1)
        {
            printf("Archivo generado correctamente\n");
        }
        else
            printf("Error generando archivo\n");
    }
    else
        printf("Error leyendo empleados\n");


    return 0;
}

int generarArchivoSueldos(char* fileName,LinkedList* listaEmpleados)
{
    return 1;
}
