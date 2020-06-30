/*
화씨온도로 섭씨 온도 계산하기
c = 5.0/9.0 * (f-32)

scanf 사용해서 f화씨온도 입력 받자!
*/
#include <stdio.h>
int main(void)
{
	float c;
	int f = 63;

	printf("화씨온도를 입력하세요:");
	scanf("%d", &f);

	c = 5.0 / 9 * (f - 32);

	printf("\n화씨온도: %d \n섭씨온도: %.2f \n", f, c);

	return 0;
}