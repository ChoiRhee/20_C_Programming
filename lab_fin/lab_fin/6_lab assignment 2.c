/* ���� ���α׷�
A- Add / S-Subtract / M-Multiply / Q-Quit
do while�� �̿�, getchar Ȱ��, �޴� ����� �Է��Ҷ����� �ݺ�
���� ���� switch������ ����
Q �Է½� ���α׷� ���� */
#include <stdio.h>
int main()
{
	char menu;
	int a, b;
	float x, y;

	do {
		printf("**************************\n");
		printf("A__Add\nS__Subtract\nM__Multiply\nD__Divide\nQ__Quit\n");
		printf("**************************\n");

		printf("������ �����ϼ���: ");
		scanf("%c", &menu);
		switch (menu)
		{
		case 'A':
			printf("�� ���� �Է��ϼ���: ");
			scanf("%d %d", &a, &b);
			printf("%d + %d = %d\n", a, b, a + b); break;
		case 'S':
			printf("�� ���� �Է��ϼ���: ");
			scanf("%d %d", &a, &b);
			printf("%d + %d = %d\n", a, b, a - b); break;
		case 'M':
			printf("�� ���� �Է��ϼ���: ");
			scanf("%d %d", &a, &b);
			printf("%d x %d = %d\n", a, b, a * b); break;
		case 'D':
			printf("�� ���� �Է��ϼ���: ");
			scanf("%f %f", &x, &y);
			printf("%.2f / %.2f = %.2f\n", x, y, x / y); break;
		}
		getchar();
	} while (menu != 'Q');

	return 0;
}