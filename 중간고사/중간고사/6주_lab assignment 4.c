#include <stdio.h>
int main(void)
{
	char c;
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%c", &c);

	if (c >= 'a' && c <= 'z')
		printf("%c -> Capital Letter: %c\n", c, 'A' + c - 'a');
	else if (c >= 'A' && c <= 'Z')
		printf("%c -> ASCII Code: %d\n", c, c);
	else
		printf("%c -> ���ĺ��� �ƴմϴ�. \n", c);

	return 0;
}