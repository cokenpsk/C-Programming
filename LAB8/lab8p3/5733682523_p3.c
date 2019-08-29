#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float min,max,temp[7]={32.1,34.5,31.7,32.1,31.4,29.9,30.8};
	int i,minday,maxday;
	max=0,min=1000;
	for(i=0;i<7;i++)
	{
		if(temp[i]>max)
		{
			max=temp[i];
			maxday=i+1;
		}
		if(temp[i]<min)
		{
			min=temp[i];
			minday=i+1;
		}
	}
	printf("Day %d has the highest temperature\n",maxday);
	printf("Day %d has the lowest temperature",minday);
	
	return 0;
}
