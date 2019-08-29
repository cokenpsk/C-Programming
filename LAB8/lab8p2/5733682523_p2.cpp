#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int sum=0,i,labnum,measure[10]={6,8,9,10,8,9,7,7,9,10};
	printf("Input the lab number you want\n");
	labnum=1;
	for(i=0;labnum!=0&&i<10;i++)
	{
		scanf("%d",&labnum);
		sum=sum+measure[labnum-1];
	}
	printf("Sum = %d",sum);
	return 0;
}
