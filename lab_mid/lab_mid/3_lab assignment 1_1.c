/* 부동 소수점 사용 */
#include <stdio.h>
#include <math.h>
int main()
{
	float w = 3.32e-3;
	float x = 9.76e-8;
	float y = 9.12e6;
	float z = 1.87e9;
	
	printf("%e", (w + x) / (y + z));
	return 0;
}