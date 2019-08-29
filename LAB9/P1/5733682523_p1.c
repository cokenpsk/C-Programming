#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char course1[7],course2[7],course3[7];
	printf("Enter course 1 : ");
	scanf("%s", course1);
	printf("Enter course 2 : ");
	scanf("%s", course2);
	printf("Enter course 3 : ");
	scanf("%s", course3);
	if(strcmp(course1,course2)<0)
		{
		if(strcmp(course2,course3)<0)
			printf("%s %s %s",course1,course2,course3);
		if(strcmp(course3,course2)<0)
			printf("%s %s %s",course3,course1,course2);
		}
	else if(strcmp(course2,course3)<0)
		{
		if(strcmp(course3,course1)<0)
			printf("%s %s %s",course2,course3,course1);
		if(strcmp(course3,course1)>0)
			printf("%s %s %s",course2,course1,course3);
		}
	else if(strcmp(course3,course1)<0)
		{
		if(strcmp(course1,course2)<0)
			printf("%s %s %s",course3,course1,course2);
		if(strcmp(course1,course2)>0)
			printf("%s %s %s",course3,course2,course1);
		}	
	return 0;
}
