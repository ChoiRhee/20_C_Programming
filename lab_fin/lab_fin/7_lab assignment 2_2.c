/* 2. 컴퓨터와 가위바위보 게임->무승부0 사용자승리1 컴퓨터승리2 switch문 사용 */
#include <stdio.h>
int set_random();
int decision(int, int);
void print_result();
int get_input();

int main()
{
	int computer, user, result;
	char sel;

	while (1)
	{
		computer = set_random();
		user = get_input();
		printf("\n computer: %d \n user: %d \n", computer, user);
		result = decision(computer, user);
		print_result(result);
		printf("\n\n 게임을 계속 진행하려면 아무 키나 누르세요. \n단, q를 누르면 끝납니다. \n");
		while ((sel = getchar()) == '\n');
		if (sel == 'q')
			break;
	}
	return 0;
}
int set_random()
{
	return rand() % 3;
}
int get_input()
{
	int input;
	printf("가위0 바위1 보2 중에 입력하세요: ");
	scanf("%d", &input);
	return input;
}
int decision(int computer, int user)
{
	switch (user)
	{
	case 0:
		switch (computer)
		{
		case 0: return 0; break;
		case 1: return 2; break;
		case 2: return 1; break;
		} break;
	case 1:
		switch (computer)
		{
		case 0: return 1; break;
		case 1: return 0; break;
		case 2: return 2; break;
		} break;
	case 2:
		switch (computer)
		{
		case 0: return 2; break;
		case 1: return 1; break;
		case 2: return 0; break;
		} break;
	}
}
void print_result(int result)
{
	switch (result)
	{
	case 0:
		printf("무승부입니다. \n"); break;
	case 1:
		printf("사용자의 승리입니다. \n"); break;
	case 2:
		printf("컴츄터의 승리입니다. \n"); break;
	}
}
