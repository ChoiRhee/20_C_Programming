#include <stdio.h>
int main(void)
{
	char c;
	int i;
	float f;

	c = 10000;				// 내림변환 10000(10) -> 010011100010000(2) 십진수에서 이진수
	i = 1.23456 + 10;		// i가 정수형이라 내림변환
	f = 10 + 20;			// f가 실수형이라 올림변환

	printf("c = %d \ni = %d \nf = %f\n", c, i, f);
	return 0;
}