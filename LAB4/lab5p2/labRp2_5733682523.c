#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int type,pattern;
	float distance;
	printf("Enter travel distance (km.):");
	scanf("%f",&distance);
	printf("Enter the type of car:");
	scanf("%d",&type);
	printf("Enter driving pattern:");
	scanf("%d",&pattern);
	if(type==1)
		{
			switch(pattern)
			{
				case 1: printf("Fuel required: %.2f litres",distance/12);
						break;
				case 2: printf("Fuel required: %.2f litres",distance/10);
						break;
			}
		}
	else if(type==2)
		{
			switch(pattern)
			{
				case 1: printf("Fuel required: %.2f litres",distance/10);
						break;
				case 2: printf("Fuel required: %.2f litres",distance/8);
						break;
			}
		
		}
	else if(type==3)
		{
			switch(pattern)
			{
				case 1: printf("Fuel required: %.2f litres",distance/9);
						break;
				case 2: printf("Fuel required: %.2f litres",distance/7);
						break;
			}
		}
	else
		printf("Invalid Data");
		
	return 0;
	}

