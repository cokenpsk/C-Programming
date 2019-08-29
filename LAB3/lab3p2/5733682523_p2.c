#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char sex;
	int age;
	float weight;
	printf("Enter sex age weight:");
	scanf("%c %d %f", &sex,&age,&weight);
	if(sex=='F'&&age>=7&&age<=10&&weight>=4&&weight<=6)
		printf("Pass");
	else
	{
		if(sex=='M')
		printf("Invalid sex");
		if(age<7||age>10)
		printf("\nInvalid age");
		if (weight<4||weight>6)
		printf("\nInvalid weight");
	}
				
    system("PAUSE");
	return 0;
}
