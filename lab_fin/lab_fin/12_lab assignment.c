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
	
	array_copy(tmp, score);
	array_print(tmp);

	return 0;
}
void array_copy(int* tmp, int* score)
{

}
void array_print(int* tmp)
{
	for (int i = 0; i < HEIGHT; i++)
		for (int j = 0; j < WIDTH; j++)
			printf("%3d ", *tmp[i][j]);
	printf("\n");
}