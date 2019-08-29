#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char i,dna[80];
	int a=0,t=0,c=0,g=0;
	printf("Enter a gene sequence: ");
	scanf("%s",dna);
	for(i=0;i<strlen(dna);i++)
	{
		if(dna[i]=='A')
			a++;
		else if(dna[i]=='T')
			t++;
		else if(dna[i]=='C')
			c++;
		else if(dna[i]=='G')
			g++;
	}
/*	int arr={a,t,c,g},temp;
	for(i=0;i<4;i++)
	{
		if(arr[i]>arr[i+1])
		{
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}*/
	if(a>t&&a>c&&a>g)
	printf("A gene sequence has %d A.",a);
	else if(t>a&&t>c&&t>g)
	printf("A gene sequence has %d T.",t);
	else if(c>a&&c>t&&c>g)
	printf("A gene sequence has %d C.",c);
	else if(g>t&&g>c&&g>a)
	printf("A gene sequence has %d G.",g);
	return 0;
}
