#include <stdio.h>
int main()
{
	int T, A, B, i;
	scanf("%d", &T);

	for (i = 0; T > i; i++)
	{
		scanf("%d %d", &A, &B);
		getchar();
		printf("%d\n", A + B);
	}

	return 0;
}