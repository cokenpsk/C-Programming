#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char word[40],swap;
	int i;
	printf("Input any string: \n");
	gets(word);

	for(i=0;i<strlen(word);i++)
	{
		if(i%2==0)
		{
			swap=word[i];
			word[i]=word[i+1];
			word[i+1]=swap;
		}
	}
	printf("%s", word);
	
	return 0;
}
