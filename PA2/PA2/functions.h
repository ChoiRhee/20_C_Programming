#include <stdio.h>
#include <stdlib.h>		// rand() 
#include <Windows.h>	// gotoxy, Sleep
#include <conio.h>		// ����Ű �̵� 
#include <locale.h>
#include <time.h>

#define WIDTH 50
#define HEIGHT 20
#define PLAYER "��"
#define FLAG "��"
#define TREASURE "��"
#define treasure 6
#define U 72	//����Ű �ƽ�Ű�ڵ� 
#define D 80
#define L 75
#define R 77

void gotoxy(int x, int y)
{
	COORD Cur = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}
void map()	// 50x20
{
	int i;
	for (i = 0; i < WIDTH; i++)
	{
		gotoxy(i, 0); printf("#");
		gotoxy(i, 19); printf("#");
	}	for (i = 0; i < HEIGHT; i++)
	{
		gotoxy(0, i); printf("#");
		gotoxy(49, i); printf("#");
	}
}
void level(int select)
{
	switch (select)
	{
	case 1:
		system("cls");
		printf("\n\n>> Level 1  �ʱ� << \n\n");
		printf("�÷��̾� ������: �� \n��� ������: ��\n���� ������: ��\n\n�� �����մϴ�.\n");
		Sleep(2000);
		system("cls");
		break;
	case 2:
		system("cls");
		printf("\n\n>> Level 2  �߱� << \n\n");
		printf("�÷��̾� ������: �� \n��� ������: ��\n���� ������: ��\n\n�� �����մϴ�.\n");
		Sleep(2000);
		system("cls");
		break;
	case 3:
		system("cls");
		printf("\n\n>> Level 3   ��� << \n\n");
		printf("�÷��̾� ������: �� \n��� ������: ��\n���� ������: ��\n\n�� �����մϴ�.\n");
		Sleep(2000);
		system("cls");
		break;
	case 4:
		system("cls");
		printf("\n\n   >>>�� ������ ���� ã�� �����Դϴ�.<<<\n\n");
		printf("���������� ���� ���� ������ ã���ּ���!\n\n");
		printf("====================��Ģ===================\n");
		printf("1. �÷��̾�߸� ������ ������ ã���ϴ�. \n");
		printf("2. ��ߢ��� ������ �ܰ踶�� �ٸ��ϴ�. \n");
		printf("3. ��¥���� 1���� ���������� 5���� �����մϴ�. \n");
		printf("4. Ű���带 ���� �����̸� ������ ã�ư��ϴ�. \n\n");
		printf("====================����===================\n");
		printf("1. ��� ���� ��¥������ ������ 50�� �Դϴ�. \n");
		printf("2. ������������ ������ ���� 10�� �Դϴ�. \n");
		printf("3. ��� �ܰ� ����� ������ \n   100�� �̻��̸� ���������� �����ϴ�. \n\n");
		printf("====================����===================\n");
		printf("1. ��� �ӿ��� ������ ��Ģ�� �����մϴ�. \n");
		printf("2. ���������� ȹ��� ����� ��ġ�� �ٲ�ϴ�. \n");
		printf("3. �ܰ躰�� �̵����� Ƚ���� �ֽ��ϴ�. \n");
		Sleep(8000);
		system("cls");
		break;
	case 5:
		break;
	}
}
void flags(int select, int* flag, int* trap, int* moving)
{
	switch (select)
	{
	case 1:
		*flag = 15; *trap = 3; *moving = 150; break;
	case 2:
		*flag = 30; *trap = 4; *moving = 200; break;
	case 3:
		*flag = 45; *trap = 5; *moving = 300; break;
	}
}