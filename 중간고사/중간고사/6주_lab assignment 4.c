#include <stdio.h>
int main(void)
{
	char c;
	printf("문자를 입력하세요: ");
	scanf("%c", &c);

	if (c >= 'a' && c <= 'z')
		printf("%c -> Capital Letter: %c\n", c, 'A' + c - 'a');
	else if (c >= 'A' && c <= 'Z')
		printf("%c -> ASCII Code: %d\n", c, c);
	else
		printf("%c -> 알파벳이 아닙니다. \n", c);

	return 0;
}