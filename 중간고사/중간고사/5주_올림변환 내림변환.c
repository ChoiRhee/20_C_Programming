#include <stdio.h>
int main(void)
{
	char c;
	int i;
	float f;

	c = 10000;				// ������ȯ 10000(10) -> 010011100010000(2) ���������� ������
	i = 1.23456 + 10;		// i�� �������̶� ������ȯ
	f = 10 + 20;			// f�� �Ǽ����̶� �ø���ȯ

	printf("c = %d \ni = %d \nf = %f\n", c, i, f);
	return 0;
}