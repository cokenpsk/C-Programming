#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int money;
	printf("Enter Money:");
	scanf("%d",&money);
	printf("\nFor %d baht,Your change are %d of hundred note and %d of twenty note and %d of one bath coin.",money,(money/100),(money%100)/20,(money%100)%20);
	return 0;
}
