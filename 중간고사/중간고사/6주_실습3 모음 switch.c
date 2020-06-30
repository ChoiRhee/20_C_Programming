#include <stdio.h>
int main(void)
{
	char ch;
	printf("문자를 하나 입력하세요: ");
	scanf("%c", &ch);

	if (ch >= 'a' && ch <= 'z') {
		switch (ch)
		{
		case 'a':
			printf("모음입니다. \n");
			break;
		case 'e':
			printf("모음입니다. \n");
			break;
		case 'i':
			printf("모음입니다. \n");
			break;
		case 'o':
			printf("모음입니다. \n");
			break;
		case 'u':
			printf("모음입니다. \n");
			break;
		default:
			printf("자음입니다. \n");
			break;
		}
	}
	else
		printf("알파벳 소문자가 아닙니다. \n");

	return 0;
}