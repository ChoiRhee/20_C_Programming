/*
<%d ����������>
%d - ���� ���
%2d - 2ĭ�� �����ʿ� ��� (931�� 2�ڸ� �̻��̹Ƿ� ���� �� ���)\
%10d - 10ĭ�� ���, ������ ����
%-10d - 10ĭ�� ���, ���� ����
%+d - +��ȣ ���
*/
#include <stdio.h>
int main(void)
{
	int pages = 931;

	printf("*%d* \n", pages);
	printf("*%2d* \n", pages);
	printf("*%10d* \n", pages);
	printf("*%-10d* \n", pages);
	printf("*%+d* \n", pages);

	return 0;
}