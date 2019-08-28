#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv[]) {
	int x=0, y=0, z=0;
	x=2;
	y=4;
	printf("x1 is %d\n",x);
	printf("y1 is %d\n",y);
	x=y;
	printf("x2 is %d\n",x);
	printf("y2 is %d\n",y);
	z=y+x;
	printf("z1 is %d\n",z);	
	z=z/2;
	printf("z2 is %d\n",z);	
	system("PAUSE");
	return 0;
}
