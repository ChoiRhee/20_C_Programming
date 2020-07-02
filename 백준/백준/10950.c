#include <stdio.h>
int main()
{
	int T, A, B, c[100], i;
	scanf("%d", &T);

	for (i=0; T > i; i++)
	{
		scanf("%d %d", &A, &B);
		getchar();
		c[i] = A + B;
	}

	for (i = 0; i < T; i++)
		printf("%d\n", c[i]);

	return 0;
}