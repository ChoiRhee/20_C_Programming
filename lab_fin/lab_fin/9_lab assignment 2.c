/* 
������ ������ �Է� ���� �� ������ �����ϴ� ���ĺ��� �� ���
����ڰ� ����Ű�� �Է��� ������ ���� ���ڿ��� string[]�迭�� ����. 
���ڿ��� ���̴� 40�� ���� ����
string[]�迭���� ���ĺ��� ī��Ʈ�� �� ���
�ҹ��ڸ� �־����ٰ� �����Ѵ�. */
#include <stdio.h>
#include <string.h>
#define SIZE 40
int main()
{
	char string[40], a = 'A';
	int alpha[26] = { 0 };

	printf("������ �Է��ϼ���. \n");
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