/* 두 점 사이의 거리 계산하는 함수 
main에서 두 점 (a,b) (c,d)를 입력 받고 dist호출
두 점 사이의 거리를 계산하는 함수 dist 생성
거리 = 루트( (a-c)^2 + (b-d)^2 )
사용자가 프로그램 종료할 때까지 반복 수행
*/
#include <stdio.h>
#include <math.h>
void dist(double, double, double, double);
int main()
{
	double a, b, c, d;
	char ch;
	do
	{
		printf("첫 번째 점의 좌표를 입력하세요: ");
		scanf("%lf %lf", &a, &b);
		getchar();
		printf("두 번째 점의 좌표를 입력하세요: ");
		scanf("%lf %lf", &c, &d);
		getchar();

		dist(a, b, c, d);
		printf("다시 수행하겠습니까? (y/n)");
		scanf("%c", &ch);
		getchar();
	} while (ch != 'n');

	return 0;
}
void dist(double a, double b, double c, double d)
{
	int m;
	d = (a - c) * (a - c) + (b - d) * (b - d);
	printf("두 점 사이의 거리는 %lf 입니다. \n", sqrt(d));
}