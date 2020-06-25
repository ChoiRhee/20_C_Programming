#include <stdio.h>
int main()
{
	float c, f;
	printf("화씨 온도를 입력하세요: ");
	scanf("%f", &f);

	c = 5.0 / 9 * (f - 32);

	printf("섭씨 온도는 %.2f 입니다. \n", c);
	return 0;
}