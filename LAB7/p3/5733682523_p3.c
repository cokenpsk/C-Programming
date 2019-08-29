#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,year;
	float balance,rate;
	printf("Input your balance: ");
	scanf("%f",&balance);
	printf("Input your interest rate(%): ");
	scanf("%f",&rate);
	printf("Input your period (years): ");
	scanf("%d",&year);
	for(i=1;i<=year;i++)
		{
		balance=balance+(balance*(rate/100.));
		printf("The balance after year %d is %.7g\n",i,balance);
		}
	
	return 0;
}
