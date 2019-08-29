#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;
	char template[20],copy[20];
	printf("Input any string: ");
	gets(template);
	for(i=0,j=0;template[i]!='\0';i++)
	{
		if(template[i]!='A'&&template[i]!='E'&&template[i]!='I'&&template[i]!='O'&&template[i]!='U'&&
		template[i]!='a'&&template[i]!='e'&&template[i]!='i'&&template[i]!='o'&&template[i]!='u')
		{
			copy[j]=template[i];
			j++;
		}
	}
	copy[j]='\0';
	printf("New string: %s",copy);
	return 0;
}
