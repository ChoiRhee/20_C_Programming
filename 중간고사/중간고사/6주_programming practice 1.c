#include <stdio.h>
int main(void)
{
	int x, y;
	printf("2���� ������ �Է��ϼ���: ");
	scanf("%d %d", &x, &y);

	if (x == 0)
		if (y == 0)
			printf("�� �� ��� 0�Դϴ�. \n");
		else
			printf("�� �߿��� �ϳ��� 0�Դϴ�. \n");
	return 0;
}