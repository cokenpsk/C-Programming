#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char choice;
	float radius;
	printf("Enter your choice : ");
	scanf("%c",&choice);
	switch(choice)
		{
		case 'a':case 'A':
			{
			printf("Enter radius : ");
			scanf("%f",&radius);
			printf("Area is %.2f",22./7*pow(radius,2));
			break;
			}
		case 'b':case 'B':
			{
			printf("Enter radius : ");
			scanf("%f",&radius);
			printf("Circumference is %.2f",2*22./7*radius);
			break;
			}
		case 'c':case 'C':
			{
			printf("Enter radius : ");
			scanf("%f",&radius);
			printf("Volume is %.2f",4./3*22./7*pow(radius,3));
			break;
			}
		default:
			printf("Invalid Choice");
			
		}
	


		
			
	return 0;
}
