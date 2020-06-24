/* 문장을 입력 받아 거꾸로 출력하는 재귀함수 작성 */
#include <stdio.h>
void reverse();
int main()
{
	printf("String: ");
	reverse();
	return 0;
}
void reverse()
{
	char ch;
	ch = getchar();

	if (ch != '\n')
	{
		reverse(ch + 1);
		printf("%c", ch);
	}
}