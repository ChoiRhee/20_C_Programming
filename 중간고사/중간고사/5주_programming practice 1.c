#include <stdio.h>
int main(void)
{
	int x;
	double y;

	x = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
	printf("x = %5d \n", x);				//-23

	y = 3 + 2 * (x = 7 / 2);
	printf("x = %5d, y = %5.2f \n", x, y);	//3, 9

	x = (int)3.8 + 3.3;
	printf("x = %5d \n", x);				//6

	x = 3 / 5 * 22.0;
	printf("x = %5d \n", x);				//0

	y = (double)(x = 4) * 3 / 5;
	printf("y = %5.2f \n", y);				//2.4

	y = x * 3 / 5;
	printf("y = %5.2f \n", y);				//2

	return 0;
}