#include <stdio.h>
int main()
{
	float c, f;
	printf("ȭ�� �µ��� �Է��ϼ���: ");
	scanf("%f", &f);

	c = 5.0 / 9 * (f - 32);

	printf("���� �µ��� %.2f �Դϴ�. \n", c);
	return 0;
}