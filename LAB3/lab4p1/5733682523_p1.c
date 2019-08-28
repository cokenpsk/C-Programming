#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x,y;
	printf("Enter a co-ordinate x,y :");
	scanf("%f %f", &x,&y);
	if(y==pow(3,x)+(5*x)+1)
		printf("ON");
	else
		printf("NO");
	system("PAUSE");
	return 0;
}
