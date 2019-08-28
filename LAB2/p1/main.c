#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x=2, y=4, z;
	float a;
	x+=5;
	z=x*y++;
	printf("x=%d y=%d z=%d\n", x, y, z);
	a=x/y;
	y=x%z;
	printf("a=%.2f", a);
	printf("y=%d", y);
	printf("%d", x++);
	printf("%d", x);
	system("PAUSE");
	return 0;
}
