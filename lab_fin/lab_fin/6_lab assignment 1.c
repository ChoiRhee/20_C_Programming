/*
1. while문 이용, i=1부터 n까지 i^2+1의 합 -- n은 입력 받은 정수
2. 반복문 이용, 입력 받은 양의 정수 거꾸로 출력
*/
#include <stdio.h>
int sum_i(int n);
void reverse(int j);
int main()
{
	int i, j;
	
	printf("정수를 입력하세요: ");
	scanf("%d", &i);
	sum_i(i);

	printf("\n\n");

	printf("양의 정수를 입력하세요: ");
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