/* ������ �Է� �޾� �Ųٷ� ����ϴ� ����Լ� �ۼ� */
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