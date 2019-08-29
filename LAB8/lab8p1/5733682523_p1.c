#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,pass;
	float score[5],measure[5]={5.5,7.5,6,4.5,5.5};
	pass=0;
	printf("Input your lab score\n");
	for(i=0;i<5;i++)
	{
		scanf("%f",&score[i]);
		if(score[i]>=measure[i])
			pass++;
	}
		printf("You passed %d labs.",pass);
	return 0;
}
