/* 
임의의 문장을 입력 받은 후 문장을 구성하는 알파벳의 빈도 계산
사용자가 엔터키를 입력할 때까지 받은 문자열을 string[]배열에 저장. 
문자열의 길이는 40을 넘지 않음
string[]배열에서 알파벳만 카운트해 빈도 출력
소문자만 주어진다고 가정한다. */
#include <stdio.h>
#include <string.h>
#define SIZE 40
int main()
{
	char string[40], a = 'A';
	int alpha[26] = { 0 };

	printf("문장을 입력하세요. \n");
	gets_s(string, 40);

	for (int i = 0; i < 40; i++)
	{
		if ('a' <= string[i] && 'z' >= string[i])
			alpha[string[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%c: %d ", a, alpha[i]);
		a++;
	}
	return 0;
}