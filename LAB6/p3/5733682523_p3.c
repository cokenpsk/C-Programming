#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,ten;
	printf("Input an integer\n");
	scanf("%d",&num);
	while(num>0)
	{
		printf("%d\n",num%10);
		num=num/10;
	}
	return 0;
}
