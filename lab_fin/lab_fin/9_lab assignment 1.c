#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#define SIZE 6
int main()
{
	char word[SIZE], input[SIZE], go[2];
	int i;
	srand(time(NULL));		// ���� �ð�����
	
	do {
		for (i = 0; i < 5; i++)
			word[i] = rand() % 26 + 'a';
		word[i] = '\0';

		printf("%s \n", word);
		Sleep(2000);		// 2�ʰ� ȭ�� ���
		system("cls");

		printf("���ڸ� �Է��ϼ���: ");
		gets_s(input, SIZE);		// SIZE ����ŭ ���ڿ� input�� �Է�

		if (!strcmp(input, word))
			printf("�����Դϴ�. \n");
		else
			printf("�����Դϴ�. \n");

		printf("�ٽ� �����ϰڽ��ϱ�? ");
		gets_s(go, 2);
		system("cls");
	} while (go[0] == 'y' || go[0] == 'Y');

	return 0;
}