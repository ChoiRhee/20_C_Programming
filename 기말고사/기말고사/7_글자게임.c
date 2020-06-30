#include <stdio.h>
int main()
{
	char answer = 'm';
	char guess;
	int tries = 0;

	do
	{
		printf("정답을 추측해보세요: ");
		scanf(" %c", &guess);
		tries++;

		if (guess > answer)
			printf("제시한 문자의 아스키 코드 값이 높습니다. \n\n");
		if (guess < answer)
			printf("제시한 문자의 아스키 코드 값이 낮습니다. \n\n");
	} while (answer != guess);

	printf("축하합니다! 시도 횟수: %d \n", tries);

	return 0;
}