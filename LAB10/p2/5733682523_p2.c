#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,score[20]={12,15,11,8,19,20,0,3,17,18,19,10,11,12,13,16,17,9,4,11};
	int five=0,ten=0,fifth=0,twenty=0;
	for(i=0;i<20;i++)
	{
		if(score[i]>=0&&score[i]<=5)
		five=five+1;
		else if(score[i]>=6&&score[i]<=10)
		ten=ten+1;
		else if(score[i]>=11&&score[i]<=15)
		fifth=fifth+1;
		else if(score[i]>=16&&score[i]<=20)
		twenty=twenty+1;
	}
	printf("DISTRIBUTION:\n\n");
	printf("%d   ",five);
	for(i=0;i<five;i++)
	{
		printf("X");
	}
	printf("\n%d   ",ten);
	for(i=0;i<ten;i++)
	{
		printf("X");
	}
	printf("\n%d   ",fifth);
	for(i=0;i<fifth;i++)
	{
		printf("X");
	}
	printf("\n%d   ",twenty);
	for(i=0;i<twenty;i++)
	{
		printf("X");
	}
	return 0;
}
