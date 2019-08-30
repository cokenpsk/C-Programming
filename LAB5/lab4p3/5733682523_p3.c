#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int month,year;
	printf("Enter month and year: ");
	scanf("%d %d",&month,&year);
	if(year%4==0&&year%100!=0||year%400==0)
		{
		switch(month)
			{case 1:case 3: case 5: case 7: case 8: case 10: case 12: printf("Number of days = 31"); break;
			 case 2: printf("Number of days = 29"); break;
			case 4: case 6: case 9: case 11: printf("Number of days = 30"); break;
			}
		}
	else
		{
		switch(month)
		{case 1:case 3: case 5: case 7: case 8: case 10: case 12: printf("Number of days = 31"); break;
		case 2: printf("Number of days = 28"); break;
		case 4: case 6: case 9: case 11: printf("Number of days = 30"); break;
		}
		}
	return 0;
}
