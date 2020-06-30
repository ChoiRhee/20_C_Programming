#include <stdio.h>
int main(void)
{
	char ch;
	printf("문자를 하나 입력하세요: ");
	scanf("%c", &ch);

	if (ch >= 'a' && ch <= 'z')
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			printf("%c는 모음입니다. \n", ch);
		else
			printf("%c는 자음입니다. \n", ch);
	else
		printf("알파벳 소문자가 아닙니다. ");

	return 0;
}