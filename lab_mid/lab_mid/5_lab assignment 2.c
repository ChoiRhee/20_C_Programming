#include <stdio.h>
int main(void)
{
	char ch;
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%c", &ch);

	if (ch >= 'a' && ch <= 'z')
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			printf("%c�� �����Դϴ�. \n", ch);
		else
			printf("%c�� �����Դϴ�. \n", ch);
	else
		printf("%c�� ���ĺ� �ҹ��ڰ� �ƴմϴ�. \n", ch);
	return 0;
}