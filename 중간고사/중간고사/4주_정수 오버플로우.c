/*
범위를 벗어나는 값을 출력하게 되면 가장 작은 숫자부터 다시 시작한다.
int는 -2147483648 ~ +2147483647 이기 때문에 x+1 은 -2147483648
unsigned int는 0 ~ 4294967295이기 때문에 y+1은 0
*/
#include <stdio.h>
int main(void)
{
	int x;
	unsigned int y;

	x = 2147483647; // int 최대값
	printf("x + 1 = %d \n", x + 1);
	printf("x + 2 = %d \n", x + 2);
	printf("x + 3 = %d \n", x + 3);

	y = 4294967295; // unsigned int 최대값
	printf("y + 1 = %d \n", y + 1);
	printf("y + 2 = %d \n", y + 2);
	printf("y + 3 = %d \n", y + 3);

	return 0;
}