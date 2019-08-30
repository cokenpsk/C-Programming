#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number,choice;
	printf("Enter a number : ");
	scanf("%d",&number);
	if(number>=1&&number<=10)
	{
		printf("Enter choice : ");
		scanf("%d",&choice);
			switch(choice)
			{
				case 1:
				{ 
					switch(number)
					{
						case 1: printf("I"); break;
						case 2: printf("II"); break;
						case 3: printf("III"); break;
						case 4: printf("IV"); break;
						case 5: printf("V"); break;
						case 6: printf("VI"); break;
						case 7: printf("VII"); break;
						case 8: printf("VIII"); break;
						case 9: printf("IX"); break;
						case 10: printf("IX");break;
				}
				}break;
				case 2:
				{
					if(number%2==0)
					printf("even");
					else
					printf("odd");
				}break;
				default: 
					printf("Invalid choice"); break;
			}
	}
	else
		printf("Invalid number");
	return 0;
}
