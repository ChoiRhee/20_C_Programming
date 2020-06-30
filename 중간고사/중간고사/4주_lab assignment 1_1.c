/*
수식의 값을 계산해주는 프로그램 작성
(3.32*10^-3 + 9.76*10^-8) / (9.12*10^6 + 1.87*10^9)
*/
#include <stdio.h>
int main(void)
{
	double a, b, c, d;
	a = 3.32e-3;
	b = 9.76e-8;
	c = 9.12e6;
	d = 1.87e9;

	printf("%e", (a + b) / (c + d));

	return 0;
}