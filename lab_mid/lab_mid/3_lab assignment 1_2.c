#include <stdio.h>
int main()
{
	int age;
	double time;

	printf("나이를 입력하세요: ");
	scanf("%d", &age);

	time = age * 3.156e7;
	printf("%d살은 %.0lf초 혹은 %e초 입니다. \n", age, time, time);

	return 0;
}