/* 
2차원 벡터 (x,y)에 대해 두 개의 벡터 A=(x1,y1) B=(x2,y2) 
덧셈, 뺄셈, 내적, 스칼라 곱, 벡터의 크기 계산
벡터와 스칼라k 입력 받은 후 연산 수행 결과 출력
*/
#include <stdio.h>
#include <math.h>
struct vector {
	double x;
	double y;
};
int main()
{
	struct vector v[2];
	int k;

	printf("첫 번째 벡터 입력 : ");
	scanf("%lf %lf", &v[0].x, &v[0].y);
	printf("두 번째 벡터 입력 : ");
	scanf("%lf %lf", &v[1].x, &v[1].y);
	printf("스칼라k 입력 : ");
	scanf("%d", &k);

	printf("덧셈: (%.2f, %.2f)\n", v[0].x + v[1].x, v[0].y + v[1].y);
	printf("뺄셈: (%.2f, %.2f)\n", v[0].x - v[1].x, v[0].y - v[1].y);
	printf("내적: %.2f\n", v[0].x * v[1].x + v[0].y * v[1].y);
	printf("스칼라 곱: (%.2f, %.2f) \n", k * v[0].x, k * v[0].y);
	printf("크기: |%.2f|\n", sqrt(v[0].x * v[0].x + v[0].y * v[0].y));

	return 0;
}