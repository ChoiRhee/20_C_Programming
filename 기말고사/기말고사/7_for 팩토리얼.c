#include <stdio.h>
int main()
{
	long fact = 1;
	int i, n;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		fact *= i;

	printf("%d !�� %d �Դϴ�. \n", n, fact);

	return 0;
}