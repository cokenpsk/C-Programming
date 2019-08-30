#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float n,c;
	printf("Enter n : ");
	scanf("%f",&n);
	printf("Enter c : ");
	scanf("%f",&c);
	printf("Answer = %.2f",(3*pow(n,2)+((c/(1-(3*n/8)))*pow(n,3))));
	return 0;
}
