/*
<�ε� �Ҽ��� �ڷ����� ũ�� ���>
���� �Ǽ��� �ΰ��� �ٸ� �ڷ����¿� �������� �� �ڷ������� �޸� ũ�Ⱑ �ٸ��� ������ x, y�� ������� �ٸ���.

**�Ǽ� ����� �Ҽ��� ���� �ڸ��� ������ ������� double��
**���� ����� ��� int��
*/
#include <stdio.h>
int main(void)
{
	float x = 1.234567890123456789;
	double y = 1.1234567890123456789;

	printf("float�� ũ��: %d \n", sizeof(float));
	printf("double�� ũ��: %d \n", sizeof(double));
	printf("long double�� ũ��: %d \n\n", sizeof(long double));

	printf("x = %30.25f \n", x);
	printf("y = %30.25lf \n", y);

	return 0;
}