#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float grade,score,sumc;
	int credit,i;
	i=1;
	score=0;
	sumc=0;
	printf("For each course you took last semester, enter your grade and the number of credits: \n");
	while(i<=6)
	{
		printf("COURSE %d:",i);
		scanf("%f %d",&grade,&credit);
		score=score+(grade*credit);
		sumc=sumc+credit;
		i++;
	}
		printf("\tGPA =%.2f",score/sumc);
	return 0;
}
