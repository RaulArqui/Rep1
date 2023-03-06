#include <stdio.h>
#include <stdlib.h>


enum dias_e {LUN, MAR, MIE, JUE, VIE, SAB, DOM
}diax;
int main() {
	int dia3=VIE+1;
	int dia4=(int)(JUE);
	dia3++;
	printf("Inicio del programa\n");
	enum dias_e diax = dia3;
	enum dias_e dialibre = dia4;
	printf("El valor de diax es %d\n",diax);
	printf("El valor de dialibre es %d\n",dialibre);
	return 0;
}
