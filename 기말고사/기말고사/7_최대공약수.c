#include <stdio.h>
int main()
{
	int x, y, r;
	printf("두 개의 정수를 입력하세요 (큰수, 작은수)\n");
	scanf("%d %d", &x, &y);

	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}
	printf("최대 공약수: %d", x);
	return 0;
}
/* 유클리드 알고리즘
1. 두 수 가운데 큰 수를 x, 작은 수를 y라고 한다.
2. y가 0이면 공약수는 x와 같다.
3. r=x%y
4. x=y
5. y=r
6. 2단계로 돌아간다.
*/