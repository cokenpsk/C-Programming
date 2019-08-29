#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,n,area=0,sum;
	printf("Enter n:");
	scanf("%d",&n);
	for(x=1;x<=n;x++)
	{
		sum=pow(x,2);
		area=area+sum;
	}
	printf("Area =%d",area);
	return 0;
}
