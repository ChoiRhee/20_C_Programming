#include <stdio.h>
int main()
{
	int i = 0;
	do
	{
		printf("1--���θ���� \n");
		printf("2--���Ͽ��� \n");
		printf("3--���� �ݱ� \n");
		printf("�ϳ��� �����ϼ���. \n");
		scanf("%d", &i);
	} while (i < 1 || i>3);

	printf("���õ� �޴�: %d \n", i);
	return 0;
}
