/*
�Է¹��� �������� ���� ����ϴ� ���α׷�
\a : ���� �� ����� "��"
\b : ������ �Űܼ� �ۼ�, ����ٿ� \b�� ������ ���� �Է���
\t : Ŀ���� ���� �� ��ġ�� �ű��. �� �ѹ� �� ��ŭ ���� ���� ���
\r : Ŀ���� ���� ���� ��ġ(�� ��)���� �Űܼ� Gee!�ۼ�
*/
#include <stdio.h>
int main(void)
{
	float salary;

	printf("\a Enter your desired monthly salary: ");
	printf("$__________\b\b\b\b\b\b\b\b\b\b");
	scanf("%f", &salary);

	printf("\n\t$%.2f a month is $%.2f a yaer.", salary, salary * 12.0);
	printf("\rGee!\n");

	return 0;
}