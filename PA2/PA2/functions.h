#include <stdio.h>
#include <stdlib.h>		// rand() 
#include <Windows.h>	// gotoxy, Sleep
#include <conio.h>		// 방향키 이동 
#include <locale.h>
#include <time.h>

#define WIDTH 50
#define HEIGHT 20
#define PLAYER "◆"
#define FLAG "▶"
#define TREASURE "★"
#define treasure 6
#define U 72	//방향키 아스키코드 
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
		printf("\n\n>> Level 1  초급 << \n\n");
		printf("플레이어 아이콘: ◆ \n깃발 아이콘: ▶\n보물 아이콘: ★\n\n곧 시작합니다.\n");
		Sleep(2000);
		system("cls");
		break;
	case 2:
		system("cls");
		printf("\n\n>> Level 2  중급 << \n\n");
		printf("플레이어 아이콘: ◆ \n깃발 아이콘: ▶\n보물 아이콘: ★\n\n곧 시작합니다.\n");
		Sleep(2000);
		system("cls");
		break;
	case 3:
		system("cls");
		printf("\n\n>> Level 3   고급 << \n\n");
		printf("플레이어 아이콘: ◆ \n깃발 아이콘: ▶\n보물 아이콘: ★\n\n곧 시작합니다.\n");
		Sleep(2000);
		system("cls");
		break;
	case 4:
		system("cls");
		printf("\n\n   >>>이 게임은 보물 찾기 게임입니다.<<<\n\n");
		printf("보물섬으로 가기 위해 보물을 찾아주세요!\n\n");
		printf("====================규칙===================\n");
		printf("1. 플레이어◆를 조작해 보물을 찾습니다. \n");
		printf("2. 깃발▶의 개수는 단계마다 다릅니다. \n");
		printf("3. 진짜보물 1개와 작은보물★ 5개가 존재합니다. \n");
		printf("4. 키보드를 통해 움직이며 보물을 찾아갑니다. \n\n");
		printf("====================점수===================\n");
		printf("1. 깃발 뒤의 진짜보물의 점수는 50점 입니다. \n");
		printf("2. 작은보물★의 점수는 개당 10점 입니다. \n");
		printf("3. 고급 단계 종료시 점수가 \n   100점 이상이면 보물섬으로 떠납니다. \n\n");
		printf("====================주의===================\n");
		printf("1. 깃발 속에는 숨겨진 벌칙이 존재합니다. \n");
		printf("2. 작은보물★ 획득시 사용자 위치가 바뀝니다. \n");
		printf("3. 단계별로 이동제한 횟수가 있습니다. \n");
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