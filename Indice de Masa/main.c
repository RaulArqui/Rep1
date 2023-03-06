/***************************************************************************************************
 // FileName:        main.c
 // Program version: Dev-C++ 5.11
 // Company:         TECNM - ITCH
 // Description:     MANEJO DE ESTRUCTURAS.
 // Authors:         ALFREDO CHACON
 // Updated:         03/2021
 //Nota:  ESTRUCTURAS ANIDADAS
 **************************************************************************************************/
#include<stdio.h>

/************************************************
    DEFINICION DE ESTRUCTURAS
************************************************/
typedef struct{
	char institucion[20];
	char carrera[20];
	int semestre;
	
}Escuela_S;
typedef struct {
	char nombre[20];
	int edad;
	Escuela_S escuela;	
}Alumnos_S;
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
	printf("Numero de alumos:");
	scanf("%d",&cantidad);
	Alumnos_S alumno[cantidad];
	int numero=1;
	
	/*Pedimos datos*/
	for(i=0;i<cantidad;i++)
	{
		printf("\nDame el nombre del alumno #%d ",i+1);
		cleanBuffIn();
		scanf("%s",(char*)&alumno[i].nombre);
		printf("\nDame la edad del alumno:");
		cleanBuffIn();
		scanf("%d",&alumno[i].edad);
		printf("\nDame la carrera del alumno:");
		cleanBuffIn();
		scanf("%s",alumno[i].escuela.carrera);
	
		numero++;	
	}
	/*Imprimimos datos*/
	
	for(i=0;i<cantidad;i++)
	{
		printf("\n Nombre del alumno (%d): %s",i+1,alumno[i].nombre);
		printf("\n edad: %d",alumno[i].edad);
		printf("\n carrera: %s",alumno[i].escuela.carrera);	
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
