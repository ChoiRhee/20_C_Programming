/*
이차방정식 ax^2 + bx + c = 0
a, b, c 입력 받고 근을 구하는 프로그램 작성
** a!=0, (b^2-4ac)>0 이라고 가정
a, b, c 는 정수형 변수로 사용
결과 소수점 이하 둘째 자리까지 표현
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
	int a, b, c;
	double x1, x2;

	printf("Enter a, b, c for a quadratic equation ax^2 + bx + c: ");
	scanf("%d %d %d", &a, &b, &c);

	x1 = (-b + sqrt((double)b * b - 4 * a * c)) / (2 * a);
	x2 = (-b - sqrt((double)b * b - 4 * a * c)) / (2 * a);

	printf("The answer id <%.2f,%.2f> \n", x1, x2);

	return 0;
}