#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int increase,fail,avg,score[12],i,low=0;
	float sum;
	for(i=0;i<12;i++)
	{
		printf("Lab %d : ",i+1);
		scanf("%d",&score[i]);
		sum=sum+score[i];
		if(score[i]<5)
		low=low+1;
	}
	avg=sum/i;
	fail=0;
	for(i=0;i<12;i++)
	{
		if(score[i]<avg)
		fail=fail+1;
	}
	printf("FAIL in %d labs.\n",low);
	printf("Average score = %.6f\n",sum/i);
	printf("LOWER THAN average in %d labs.\n",fail);
	for(i=0;i<12;i++)
	{
		if(score[i+1]>score[i])
		increase=increase+1;
	}
	printf("INCREASE SCORE in %d labs.",increase);
	return 0;
}
