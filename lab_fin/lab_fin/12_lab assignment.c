/*
2차원 배열을 다른 2차원 배열로 복사하는 프로그램 작성
array_copy()함수에서 수행 
배열의 인덱스 대신 포인터 사용
array_print()함수로 2차원 배열의 모둔 원소 2차원 행렬 구조로 출력
*/
#include <stdio.h>
#define HEIGHT 10
#define WIDTH 10
void array_copy(int*, int*);
void array_print(int*);
int main()
{
	int score[HEIGHT][WIDTH] = { {100,30,67},{89,50,12},{19,60,90} };
	int tmp[HEIGHT][WIDTH];
	
	array_copy(&tmp, &score);
	array_print(&tmp);

	return 0;
}
void array_copy(int tmp[][WIDTH], int score[][WIDTH])
{
	int* sp, * tp, * endp;
	sp = &score[0][0];
	tp = &tmp[0][0];
	endp = &score[HEIGHT - 1][WIDTH - 1];

	while (sp <= endp)
	{
		*tp = *sp;
		tp++;
		sp++;
	}
}
void array_print(int tmp[][WIDTH])
{
	int* p, * endp, count = 0;
	p = &tmp[0][0];
	endp = &tmp[HEIGHT - 1][WIDTH - 1];

	while (p <= endp)
	{
		if (count % HEIGHT == 0 && count != 0)
			printf("\n");
		printf("%3d", *p);
		*p++;
		count++;
	}
}