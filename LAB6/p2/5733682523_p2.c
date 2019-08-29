#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int hour,work0,work1,work20;
	hour=0;
	work0=0;
	work1=0;
	work20=0;
	while(hour>=0)
	{
		printf("Input hours worked : ");
		scanf("%d",&hour);
		if(hour==0)
			work0++;
		else if(hour>=1&&hour<=20)
			work1++;
		else if(hour>20)
			work20++;
	}
		printf("Work 0 hours = %d\n",work0);
		printf("Work 1-20 hours = %d\n",work1);
		printf("Work > 20 hours = %d\n",work20);
	return 0;
}
