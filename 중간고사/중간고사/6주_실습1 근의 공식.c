/*
a, b, c �Է� ���� �� ���� ���ϴ� ���α׷�!
�Ǻ��� b^2-4ac
�Ǻ����� ����̸� �� ���� �Ǳ� ����
�Ǻ����� 0�̸� �� ���� �Ǳ��� ����
�Ǻ����� �����̸� �Ǳ��� �������� �ʴ´� ���
a�� 0�̸� ���� -c/b�� �ȴ�.
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
	int a, b, c;
	double x, x1, x2;	//�Ǻ���, ��1, ��2

	printf("a, b, c�� �Է��ϼ���: ");
	scanf("%d %d %d", &a, &b, &c);

	x = (float)b * b - 4.0 * a * c;
	x1 = (-b + sqrt(x)) / (2 * a);
	x2 = (-b - sqrt(x)) / (2 * a);

	if (a != 0)
		if (x > 0)
			printf("�� ���� �Ǳ��� �����մϴ�. <%.2f,%.2f>", x1, x2);
		else if (x < 0)
			printf("�Ǳ��� �������� �ʽ��ϴ�. ");
		else
			printf("�� ���� �Ǳ��� �����ϴ�. <%.2f>", x1);
	else
		printf("a�� 0�̹Ƿ� ���� -c/b�Դϴ�. <%.2f>", -(float)c / b);

	return 0;
}