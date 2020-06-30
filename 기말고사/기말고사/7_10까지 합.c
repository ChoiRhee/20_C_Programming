#include <stdio.h>
int main()
{
	int i = 1, sum = 0;
	while (i <= 10)
	{
		sum += i;
		i++;
	}
	printf("1부터 10까지 합은 %d 입니다. \n", sum);

	return 0;
}