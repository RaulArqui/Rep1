#include <iostream>
#include <var1_def.h> 			//Archivo de encabezado en la libreria de la carpeta de DevC++
#include "var2_def.h" 			//Archivo de encabezado en la carpeta del proyecto
#include "Includes/var3_def.h"	//Archivo de encabezado en un subdirectorio de la carpeta del proyecto
#include "C:\var4_def.h"		//Archivo de encabezado en una ubicacion fuera del proyecto

int main() {
	var1 = 1;
	var2 = 2;
	var3 = 3;
	var4 = 4;
	printf("var1 = %d\n",var1);
	printf("var2 = %d\n",var2);
	printf("var3 = %d\n",var3);
	printf("var4 = %d\n",var4);
	
	return 0;
}
