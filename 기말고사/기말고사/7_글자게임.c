#include <stdio.h>
int main()
{
	char answer = 'm';
	char guess;
	int tries = 0;

	do
	{
		printf("������ �����غ�����: ");
		scanf(" %c", &guess);
		tries++;

		if (guess > answer)
			printf("������ ������ �ƽ�Ű �ڵ� ���� �����ϴ�. \n\n");
		if (guess < answer)
			printf("������ ������ �ƽ�Ű �ڵ� ���� �����ϴ�. \n\n");
	} while (answer != guess);

	printf("�����մϴ�! �õ� Ƚ��: %d \n", tries);

	return 0;
}