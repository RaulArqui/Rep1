/**********************************************************************************************************************
 // FileName:        main.c
 // Program version: Dev-C++ 5.11
 // Company:         TECNM - ITCH
 // Description:     MEMORIA DINAMICA
 // Authors:         ALFREDO CHACON
 // Updated:         03/2021
 //Nota:  				MEMORIA DINAMICA
*********************/
#include <stdio.h>
#include <stdlib.h>

int main(){
  
  //system("clear");
	/************************************************
      VARIABLES DINAMICAS
	************************************************/
	int var;							//DECLARACION DE VARIABLE ENTERO (STACK)
	int *ptr;							//DECLARACION DE VARIABLE APUNTADOR A ENTERO (STACK)
	ptr= (int*)malloc(sizeof(int));  	//LA FUNCION malloc  RESERVA/ASIGNA UN TAMANO DE MEMORIA DEL HEAP (SEGUN sizeof) segun tipo int  (ESTE CASO 4bytes) 
	*ptr=10;							//SE INICIALIZA LA MEMORIA
	printf(" Direccion de memoria en ptr= 0x%p, dato=%d\n",ptr,*ptr);
	free(ptr);							//SE LIBERA LA MEMORIA
	
	ptr= (int*)malloc(sizeof(int));		//LO MISMO ANTERIOR
	*ptr=20;
	printf(" Direccion de memoria en ptr= 0x%p, dato=%d\n",ptr,*ptr);
	free(ptr);
	

	
	
	
	

	float *a=(float *)malloc(sizeof(float));
	if (a==NULL) exit(0); 								//SE VALIDA QUE SE HAYA ASIGNADO LA MEMORIA (REGRESA NULL SI NO SE PUDO ASIGNAR Y SE TERMINA EL PROGRAMA)
	printf("direccion de a= %p\n",a);
	*a=1.2;
	printf("a= %0.1f\n",*a);
	
	unsigned long int*b;
	if ((b=(unsigned long int*)malloc(sizeof(unsigned long int)))==NULL)
	exit(0); 											// SALIMOS DEL PROGRAMA
	*b=12;
	printf("direccion de a= %p\n",b);
	printf("a= %lu\n",*b);

	/************************************************
      ARREGLO DINAMICO
	************************************************/
	int n,i;											//DECLARACION DE VARIABLE ENTERO (STACK)
	printf("\nDAME EN TAMANO DEL ARREGLO: ");
	fflush(stdin);
	scanf("%d",&n);
	printf(" Direccion de memoria en n= 0x%p\n",&n);
	//int *c=(int*)calloc(tam,sizeof(int));				//CALLOC INICIALIZA LA MEMORIA CON 0 (MALLOC NO INICIALIZA, PUEDE TENER BASURA)
	int *c=(int*)malloc(n*sizeof(int));					//MALLOC RESERVA UN BLOQUE DE MEMORIA DE TAMANO (n VECES int)
	if (c==NULL) exit(0); 
	for(i=0;i<n;i++)
	{							
		c[i]=i+1;	
	}
	//free(c);
	int *d = (int*)realloc(c,(n/2)*sizeof(int));		//REALLOC REASIGNA EL BLOQUE DE MEMORIA EN LA MISMA DIRECCION (LO DESTRUYE Y LO VUELVE A CREAR DE OTRO TAMAÑO)
  //free(d);
	printf("direccion de bloque previo= 0x%p, nueva direccion= 0x%p\n",c,d);
	for(i=0;i<n;i++)
	{								
		printf("%d\n",d[i]);	
	}
 
  free(d);
	/************************************************
      ESTRUCTURA DINAMICO
	************************************************/
	struct ALFA{
		unsigned a;
		float b;
		int *c;
	}*e;

	if ((e=(struct ALFA *)malloc(sizeof(struct ALFA)))==NULL)
	exit(0); 													// SALIMOS DEL PROGRAMA

	e->a=10;
	e->b=2.3;
	e->c=&n;
	
	printf(" Direccion de memoria en e= 0x%p, dato struct a=%d, b=%0.1f, c=%d\n",e,e->a,e->b,*e->c);
  free(e);
	return 0;
}

