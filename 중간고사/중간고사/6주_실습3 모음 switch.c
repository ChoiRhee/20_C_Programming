#include <stdio.h>
int main(void)
{
	char ch;
	printf("���ڸ� �ϳ� �Է��ϼ���: ");
	scanf("%c", &ch);

	if (ch >= 'a' && ch <= 'z') {
		switch (ch)
		{
		case 'a':
			printf("�����Դϴ�. \n");
			break;
		case 'e':
			printf("�����Դϴ�. \n");
			break;
		case 'i':
			printf("�����Դϴ�. \n");
			break;
		case 'o':
			printf("�����Դϴ�. \n");
			break;
		case 'u':
			printf("�����Դϴ�. \n");
			break;
		default:
			printf("�����Դϴ�. \n");
			break;
		}
	}
	else
		printf("���ĺ� �ҹ��ڰ� �ƴմϴ�. \n");

	return 0;
}