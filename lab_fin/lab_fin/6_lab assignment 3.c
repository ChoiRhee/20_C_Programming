/* 
1. 중첩 반복문 사용 A~F 한글자씩 늘려가며 출력
2. 중첩 반복문 사용 F~A 한글자씩 늘려가며 출력
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