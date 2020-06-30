/*
a, b, c 입력 받은 후 근을 구하는 프로그램!
판별식 b^2-4ac
판별식이 양수이면 두 개의 실근 존재
판별식이 0이면 두 개의 실근이 같다
판별식이 음수이면 실근이 존재하지 않는다 출력
a가 0이면 근은 -c/b가 된다.
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
	int a, b, c;
	double x, x1, x2;	//판별식, 근1, 근2

	printf("a, b, c를 입력하세요: ");
	scanf("%d %d %d", &a, &b, &c);

	x = (float)b * b - 4.0 * a * c;
	x1 = (-b + sqrt(x)) / (2 * a);
	x2 = (-b - sqrt(x)) / (2 * a);

	if (a != 0)
		if (x > 0)
			printf("두 개의 실근이 존재합니다. <%.2f,%.2f>", x1, x2);
		else if (x < 0)
			printf("실근이 존재하지 않습니다. ");
		else
			printf("두 개의 실근이 같습니다. <%.2f>", x1);
	else
		printf("a가 0이므로 근은 -c/b입니다. <%.2f>", -(float)c / b);

	return 0;
}