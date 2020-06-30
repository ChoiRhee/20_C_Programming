#include <stdio.h>
int get_integer(void);
int combination(int n, int r);
int factorial(int n);

int main()
{
	int a, b;

	a = get_integer();
	b = get_integer();

	printf("C(%d, %d) = %d \n", a, b, combination(a, b));
	return 0;
}
int get_integer()
{
	int n;
	printf("정수를 입력하세요: ");
	scanf("%d", &n);
	return n;
}
int factorial(int n)
{
	int i;
	long result = 1;
	for (i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}
int combination(int n, int r)
{
	return (factorial(n) / (factorial(n - r) * factorial(r)));
}