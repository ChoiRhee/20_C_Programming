/*
1�� = 3.156e7 ��!
���̸� �Է� ���� �� �� ������ ����ϴ� ���α׷�
*/
#include <stdio.h>
int main(void)
{
	int year;
	double second;

	printf("Enter your age: ");
	scanf("%d", &year);

	second = year * 3.156e7;
	printf("%d years old is %.0lf in seconds \nor %e in seconds", year, second, second);

	return 0;
}