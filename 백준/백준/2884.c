// �Է��� �ð� 45�������� ���
#include <stdio.h>
int main()
{
	int H, M;
	scanf("%d %d", &H, &M);

	if (H > 0 && M < 45)
	{
		printf("%d %d", H-1, M+15);
	}
	else if (H == 0 && M < 45)
	{
		H += 23;
		printf("%d %d", H,M + 15);
	}
	else
		printf("%d %d", H, M - 45);

	return 0;
}