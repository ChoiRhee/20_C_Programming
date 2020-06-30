#include <stdio.h>
int main(void)
{
	int x = 10;

	printf("수식 x++의 값: %d \n", x++);
	printf("현재 x의 값: %d \n\n", x);
	printf("수식 ++x의 값: %d \n", ++x);
	printf("현재 x의 값: %d \n\n", x);

	printf("수식 x--의 값: %d \n", x--);
	printf("현재 x의 값: %d \n\n", x);
	printf("수식 --x의 값: %d \n", --x);
	printf("현재 x의 값: %d \n", x);

	return 0;
}