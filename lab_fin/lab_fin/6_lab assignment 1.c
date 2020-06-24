/*
1. while�� �̿�, i=1���� n���� i^2+1�� �� -- n�� �Է� ���� ����
2. �ݺ��� �̿�, �Է� ���� ���� ���� �Ųٷ� ���
*/
#include <stdio.h>
int sum_i(int n);
void reverse(int j);
int main()
{
	int i, j;
	
	printf("������ �Է��ϼ���: ");
	scanf("%d", &i);
	sum_i(i);

	printf("\n\n");

	printf("���� ������ �Է��ϼ���: ");
	scanf("%d", &j);
	reverse(j);

	return 0;
}
int sum_i(int n)
{
	int i, sum = 0;
	for (i = 1; i < n; i++)
	{
		sum += (i * i + 1);
		printf("%2d + ", i * i + 1);
	}
	if (i == n)
	{
		sum += (i * i + 1);
		printf("%2d = %2d", i * i + 1, sum);
	}
	return sum;
}
void reverse(int j)
{
	int i = 10;
	while (j > 0)
	{
		printf("%d",j%i);
		j = (j - j % i) / i;
	}
}