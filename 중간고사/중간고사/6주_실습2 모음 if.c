#include <stdio.h>
int main(void)
{
	char ch;
	printf("���ڸ� �ϳ� �Է��ϼ���: ");
	scanf("%c", &ch);

	if (ch >= 'a' && ch <= 'z')
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			printf("%c�� �����Դϴ�. \n", ch);
		else
			printf("%c�� �����Դϴ�. \n", ch);
	else
		printf("���ĺ� �ҹ��ڰ� �ƴմϴ�. ");

	return 0;
}