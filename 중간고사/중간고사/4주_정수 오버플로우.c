/*
������ ����� ���� ����ϰ� �Ǹ� ���� ���� ���ں��� �ٽ� �����Ѵ�.
int�� -2147483648 ~ +2147483647 �̱� ������ x+1 �� -2147483648
unsigned int�� 0 ~ 4294967295�̱� ������ y+1�� 0
*/
#include <stdio.h>
int main(void)
{
	int x;
	unsigned int y;

	x = 2147483647; // int �ִ밪
	printf("x + 1 = %d \n", x + 1);
	printf("x + 2 = %d \n", x + 2);
	printf("x + 3 = %d \n", x + 3);

	y = 4294967295; // unsigned int �ִ밪
	printf("y + 1 = %d \n", y + 1);
	printf("y + 2 = %d \n", y + 2);
	printf("y + 3 = %d \n", y + 3);

	return 0;
}