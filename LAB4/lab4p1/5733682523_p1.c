#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int pay,change;
	char choice;
	printf("You pay :");
	scanf("%d",&pay);
	printf("Enter your choice(A-F) :");
	scanf(" %c",&choice);
	switch(choice)
	{
		case 'A': change=pay-6; 
		printf("Your change is %d Baht.",change);break;
		case 'B': change=pay-7;
		printf("Your change is %d Baht.",change);break;
		case 'C': change=pay-13; 
		printf("Your change is %d Baht.",change);break;
		case 'D': change=pay-15; 
		printf("Your change is %d Baht.",change);break;
		case 'E': change=pay-18; 
		printf("Your change is %d Baht.",change);break;
		case 'F': change=pay-21; 
		printf("Your change is %d Baht.",change);break;
		default: printf("INVALID CHOICE");
	}
	return 0;
}
