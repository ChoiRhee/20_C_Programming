/* 계산기 프로그램
A- Add / S-Subtract / M-Multiply / Q-Quit
do while문 이용, getchar 활용, 메뉴 제대로 입력할때까지 반복
연산 실행 switch문으로 구현
Q 입력시 프로그램 종료 */
#include <stdio.h>
int main()
{
	char menu;
	int a, b;
	float x, y;

	do {
		printf("**************************\n");
		printf("A__Add\nS__Subtract\nM__Multiply\nD__Divide\nQ__Quit\n");
		printf("**************************\n");

		printf("연산을 선택하세요: ");
		scanf("%c", &menu);
		switch (menu)
		{
		case 'A':
			printf("두 수를 입력하세요: ");
			scanf("%d %d", &a, &b);
			printf("%d + %d = %d\n", a, b, a + b); break;
		case 'S':
			printf("두 수를 입력하세요: ");
			scanf("%d %d", &a, &b);
			printf("%d + %d = %d\n", a, b, a - b); break;
		case 'M':
			printf("두 수를 입력하세요: ");
			scanf("%d %d", &a, &b);
			printf("%d x %d = %d\n", a, b, a * b); break;
		case 'D':
			printf("두 수를 입력하세요: ");
			scanf("%f %f", &x, &y);
			printf("%.2f / %.2f = %.2f\n", x, y, x / y); break;
		}
		getchar();
	} while (menu != 'Q');

	return 0;
}