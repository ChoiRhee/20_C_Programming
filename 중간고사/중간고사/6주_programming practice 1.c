#include <stdio.h>
int main(void)
{
	int x, y;
	printf("2개의 정수를 입력하세요: ");
	scanf("%d %d", &x, &y);

	if (x == 0)
		if (y == 0)
			printf("두 수 모두 0입니다. \n");
		else
			printf("둘 중에서 하나는 0입니다. \n");
	return 0;
}