#include <stdio.h>
int main()
{
	int n, i = 1;

	printf("몇 단을 출력할까요?");
	scanf("%d", &n);

	while (i < 10)
	{
		printf("%d * %d = %d \n", n, i, n * i);
		i++;
	}
	return 0;
}