/*
1년 = 3.156e7 초!
나이를 입력 받은 후 초 단위로 출력하는 프로그램
*/
#include <stdio.h>
int main(void)
{
	int year;
	double second;

	printf("Enter your age: ");
	scanf("%d", &year);

	second = year * 3.156e7;
	printf("%d years old is %.0lf in seconds \nor %e in seconds", year, second, second);

	return 0;
}