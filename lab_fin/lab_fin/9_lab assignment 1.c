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
	srand(time(NULL));		// 현재 시간으로
	
	do {
		for (i = 0; i < 5; i++)
			word[i] = rand() % 26 + 'a';
		word[i] = '\0';

		printf("%s \n", word);
		Sleep(2000);		// 2초간 화면 출력
		system("cls");

		printf("글자를 입력하세요: ");
		gets_s(input, SIZE);		// SIZE 개만큼 문자열 input에 입력

		if (!strcmp(input, word))
			printf("정답입니다. \n");
		else
			printf("오답입니다. \n");

		printf("다시 수행하겠습니까? ");
		gets_s(go, 2);
		system("cls");
	} while (go[0] == 'y' || go[0] == 'Y');

	return 0;
}