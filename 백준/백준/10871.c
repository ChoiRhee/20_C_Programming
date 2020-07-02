#include <stdio.h>
int main()
{
	int N, X, i, A;
	scanf("%d %d", &N, &X);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &A);
		if (A < X)
			printf("%d ", A);
	}

	return 0;
}
// A 배열로 하면 안됨 ㅡㅡ