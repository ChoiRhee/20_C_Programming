#include <stdio.h>
#include <math.h>
int main(void)
{
	int a, b, c;
	double x1, x2;

	printf("Enter a, b, c for a quadratic equation ax^2 + bx + c: ");
	scanf("%d %d %d", &a, &b, &c);

	x1 = (-b + sqrt((double)b * b - 4 * a * c)) / (2 * a);
	x2 = (-b - sqrt((double)b * b - 4 * a * c)) / (2 * a);

	printf("The answer id <%.2f,%.2f> \n", x1, x2);

	return 0;
}