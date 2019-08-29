#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,nplus,i;
	printf("Input intergers\n");
	for(i=0,nplus=1;nplus<=4;i++)
	{
		scanf("%d",&n);
		if(n>0)
			nplus++;
	}
	printf("There are %d numbers",i);
	
	
	return 0;
}
