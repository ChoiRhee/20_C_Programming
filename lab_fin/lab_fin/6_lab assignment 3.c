/* 
1. ��ø �ݺ��� ��� A~F �ѱ��ھ� �÷����� ���
2. ��ø �ݺ��� ��� F~A �ѱ��ھ� �÷����� ���
*/
#include <stdio.h>
int main()
{
	char s, c;
	int row = 6;

	for (int i = 0; i < row; i++)
	{
		for (s='A'+i; s < ('A' + row); s++)
			printf("%c", s);
		printf("\n");
	}

	for (int i = 5; i >= 0; i--)
	{
		for (c = 'A' + i; c < ('A'+6); c++)
			printf("%c", c);
		printf("\n");
	}
	return 0;
}