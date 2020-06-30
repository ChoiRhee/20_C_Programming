#include <stdio.h>
int main(void)
{
	int x, y;
	printf("두 수를 입력하세요: ");
	scanf("%d %d", &x, &y);

	if (x == 0 && y == 0)
		printf("두 수 모두 0입니다. \n");
	else if (x == 0 && y != 0)
		printf("둘 중 하나는 0입니다. \n");
	else if (x != 0 && y == 0)
		printf("둘 중 하나는 0입니다. \n");
	else
		printf("두 수 모두 0이 아닙니다. \n");
	return 0;
}