/*
ȭ���µ��� ���� �µ� ����ϱ�
c = 5.0/9.0 * (f-32)

scanf ����ؼ� fȭ���µ� �Է� ����!
*/
#include <stdio.h>
int main(void)
{
	float c;
	int f = 63;

	printf("ȭ���µ��� �Է��ϼ���:");
	scanf("%d", &f);

	c = 5.0 / 9 * (f - 32);

	printf("\nȭ���µ�: %d \n�����µ�: %.2f \n", f, c);

	return 0;
}