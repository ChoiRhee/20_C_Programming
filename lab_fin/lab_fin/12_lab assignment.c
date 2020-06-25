/*
2���� �迭�� �ٸ� 2���� �迭�� �����ϴ� ���α׷� �ۼ�
array_copy()�Լ����� ���� 
�迭�� �ε��� ��� ������ ���
array_print()�Լ��� 2���� �迭�� ��� ���� 2���� ��� ������ ���
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