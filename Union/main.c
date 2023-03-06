#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

union miUnion{
		int a;
		char ch;
		float b;
		int *ptr;
		
	}mu, *muptr=&mu;

int main(int argc, char *argv[]) {
	
	mu.b=4.15;
	printf("el valor de mu.b = %f");
	printf("el valor de mu.a = %d");
	printf("el valor de mu.ch = %s");
	printf("el valor de mu.b = %f");
	
	
	
	
	
	
	return 0;
}
