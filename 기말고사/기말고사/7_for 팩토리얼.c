#include <stdio.h>
int main()
{
	long fact = 1;
	int i, n;

	printf("정수를 입력하세요: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		fact *= i;

	printf("%d !은 %d 입니다. \n", n, fact);

	return 0;
}