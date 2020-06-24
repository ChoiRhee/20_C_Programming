/* 2. ��ǻ�Ϳ� ���������� ����->���º�0 ����ڽ¸�1 ��ǻ�ͽ¸�2 switch�� ��� */
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
		printf("\n\n ������ ��� �����Ϸ��� �ƹ� Ű�� ��������. \n��, q�� ������ �����ϴ�. \n");
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
	printf("����0 ����1 ��2 �߿� �Է��ϼ���: ");
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
		printf("���º��Դϴ�. \n"); break;
	case 1:
		printf("������� �¸��Դϴ�. \n"); break;
	case 2:
		printf("�������� �¸��Դϴ�. \n"); break;
	}
}
