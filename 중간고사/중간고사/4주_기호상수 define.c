#include <stdio.h>
#define PI 3.141592
int main(void)
{
	float radius, area, circumference;

	printf("반지름을 입력하시오: ");
	scanf("%f", &radius);

	area = PI * radius * radius;
	circumference = 2.0 * PI * radius;

	printf("반지름은 %f 입니다. \n", radius);
	printf("원의 면적은 %f이고 둘레는 %f입니다. \n", area, circumference);

	return 0;
}