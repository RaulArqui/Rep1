/**********************************************************************************************************************
 // FileName:        main.c
 // Program version: Dev-C++ 5.11
 // Company:         TECNM - ITCH
 // Description:     USO DEL STACK (MEMORIA DE DATOS) / BINOMIO AL CUADRADO
 // Authors:         ALFREDO CHACON
 // Updated:         03/2021
 //Nota:  			VARIABLES LOCALES Y GLOBALES, EXPLICACION DEL USO DE LA MEMORIA Y STACK EN LA INVOCACION DE FUNCIONES  
 //					PARA EL CALCULO DE UN BINOMIO AL CUADRADO 
****************************************************************************/
#include <stdio.h>							//Directivas del preprocesador Archivos de Cabecera o encabezado
//EJEMPLO DE BINOMIO AL CUADRADO   (A+B)^2
int total;									//Declaracion de variables globales del fichero
/************************************************
    PROTOTIPOS DE FUNCIONES
************************************************/
int cuadradoSuma(int a, int y);
int cuadrado(int x);
//void cleanBuffIn(void);
//**********FUNCION (A+B)^2 *******
int cuadradoSuma(int a, int y){				//Declaracion de variables locales
	printf("Direccion de a es= %p\n",(void*)&a);
	
	//Impresion de direccion de memoria en el formato equivocado, generando warning
	//printf("Direccion de a es= %d\n",&a);
	
	int z = cuadrado(a+y);					//Invocacion o llamda a funcion
	return z;
}
//**********FUNCION x^2*******
int cuadrado(int x){						//Declaracion de variables locales
	return x*x;
}

//**********FUNCION x^2*******
int main(){
	int a,b;								//Declaracion de variables locales
	printf("Introduce el primer numero:");
	//fflush(stdin);
	scanf("%d",&a);
	printf("Introduce el segundo numero:");
	//fflush(stdin);  Aunque funciona no es recomendable por portabilidad
  /*se recomienda	cleanBuffIn(); o algun otro metodo*/
	scanf("%d",&b);
	printf("Direccion de a es= %p\n",(void*)&a);
	
	//Impresion de direccion de memoria en el formato equivocado, generando warning
	//printf("Direccion de a es= %d\n",&a);
	
	total=cuadradoSuma(a,b);						//Invocacion o llamda a funcion
	printf("El resultado de (a+b)^2 = %d\n",total);
	return 0;
}

/***********FUNCION cleanBuffIn********/
void cleanBuffIn(void){
	int ch;
	while ((ch = fgetc(stdin)) != EOF)
	{
	  if( ch == '\n' ) break;
	}
}
