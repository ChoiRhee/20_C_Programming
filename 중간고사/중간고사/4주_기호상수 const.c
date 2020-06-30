/*
기호상수
#define 이름 값
const 형태 이름=값
*/
#include <stdio.h>
int main(void)
{
	const double TAX_RATE = 0.15;
	double income, salary;

	printf("월급을 입력하세요: ");
	scanf("%lf", &salary);

	income = salary - TAX_RATE * salary;
	printf("순수입은 %.2lf 원 입니다. \n", income);

	return 0;
}