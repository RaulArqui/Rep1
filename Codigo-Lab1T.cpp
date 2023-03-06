/**********************************************************************************************************************
 // FileName:        Lab.cpp
 // Program version: Dev-C++ 5.11
 // Company:         TECNM - ITCH
 // Description:     Clasificador de Microcontroladores
 // Authors:         Raul Alejandro Rodriguez Morales
 // Updated:         02/19/2023
 //Nota:  			RELACION ENTRE PUNTEROS Y ARREGLOS
****************************************************************************/
#include<stdio.h>

/************************************************
    DEFINICION DE ESTRUCTURAS
************************************************/
 typedef struct {
	char nombre[40];
	char fabricante[40];
  	int arqui;
}Micro_S;
/************************************************
    PROTOTIPOS DE FUNCIONES
************************************************/
void cleanBuffIn(void);     /*FUNCION PARA LIMPIAR EL BUFFER DE ENTRADA EN SUSTITUCION DE fflush(stdin)*/
/************************************************
    FUNCION  MAIN
************************************************/
int main()
{
	int cantidad;
	int i;
	printf("Ingrese el Numero de Microcontroladores:");
	scanf("%d",&cantidad);
	int numero=1;
	Micro_S micro[cantidad];
	
	/*Pedimos datos*/
	for(i=0;i<cantidad;i++)
	{
		printf("\nDame el nombre del microcontrolador #%d ",i+1);
		cleanBuffIn();
		scanf (" %s", (char*)micro[i].nombre);  
    
		printf("\nIngrese el nombre del fabricante:");
		cleanBuffIn();
		scanf (" %s", (char*)micro[i].fabricante);  
    
		printf("\nIngrese el tamano de arquitectura del microcontrolador:");
		cleanBuffIn();
		scanf (" %d", (int*)&micro[i].arqui);  
	
		numero++;	
	}
	/*Imprimimos datos*/
  printf("\n-------------------------------------");
	printf("\n Informacion de Microcontroladores:");
  printf("\n-------------------------------------");
	for(i=0;i<cantidad;i++)
	{
		printf("\n Nombre del microcontrolador (%d): %s",i+1,micro[i].nombre);
		printf("\n Fabricante: %s",micro[i].fabricante);
		printf("\n Tamano: %d bits\n",micro[i].arqui);	
	}
	return 0;
}

/***********FUNCION cleanBuffIn********/
void cleanBuffIn(void){     /*FUNCION PARA LIMPIAR EL BUFFER DE ENTRADA EN SUSTITUCION DE fflush(stdin)*/
	int ch;
	while ((ch = fgetc(stdin)) != EOF)  /* Brinca o descarta todos los caracteres de stdin, */
	{                                   /* hasta que se encuentra con EOF, llegado al final del buffer.*/
	  if( ch == '\n' ) break;           /* o si encuentra un salto de linea */
	}
}
