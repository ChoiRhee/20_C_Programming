/*
<부동 소수점 자료형의 크기 계산>
같은 실수를 두가지 다른 자료형태에 저장했을 때 자료형마다 메모리 크기가 다르기 때문에 x, y의 결과값이 다르다.

**실수 상수는 소수점 이하 자리의 개수와 상관없이 double형
**정수 상수는 모두 int형
*/
#include <stdio.h>
int main(void)
{
	float x = 1.234567890123456789;
	double y = 1.1234567890123456789;

	printf("float의 크기: %d \n", sizeof(float));
	printf("double의 크기: %d \n", sizeof(double));
	printf("long double의 크기: %d \n\n", sizeof(long double));

	printf("x = %30.25f \n", x);
	printf("y = %30.25lf \n", y);

	return 0;
}