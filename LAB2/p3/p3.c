#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,y;
	printf("input x:");
	scanf("%f",&x);
	y=(x+(sqrt((6/(x-1))+3*pow(x,2))))/((2+x)-pow(3,x));
	printf("y=\t%.3f",y);
	return 0;
}
