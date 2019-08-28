#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	int credit1, credit2, credit3;
	float grade1, grade2, grade3, gpx;
	
	credit1=3;	credit2=1;	credit3=2;
	grade1=3.5;	grade2=2;	grade3=4.0;
	gpx=(grade1*credit1+grade2*credit2+grade3*credit3)/(credit1+credit2+credit3);
	
	printf("Course 1 of %d credits got %f\n", credit1, grade1);
	printf("Course 2 of %d credits got %3.1f\n", credit2, grade2);
	printf("Course 3 of %d credits got %8.0f\n", credit3, grade3);
	
	printf("gpx=%6.2f", gpx);
	
	system("PAUSE");
	return 0;
}
