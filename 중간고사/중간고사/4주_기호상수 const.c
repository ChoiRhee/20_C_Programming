/*
��ȣ���
#define �̸� ��
const ���� �̸�=��
*/
#include <stdio.h>
int main(void)
{
	const double TAX_RATE = 0.15;
	double income, salary;

	printf("������ �Է��ϼ���: ");
	scanf("%lf", &salary);

	income = salary - TAX_RATE * salary;
	printf("�������� %.2lf �� �Դϴ�. \n", income);

	return 0;
}