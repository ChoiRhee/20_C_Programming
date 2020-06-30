#include <stdio.h>
#include <math.h>
int main(void)
{
	double a = 2;
	double b = 16;
	int c = -3;

	printf("square root of a is %.2lf. \n", sqrt(a));
	printf("b^a is %.2lf. \n", pow(b, a));
	printf("absolute value of c is %d. \n", abs(c));
	printf("log(b) is %.2lf.\n", log(b));

	return 0;
}