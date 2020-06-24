/* 
1. 방향키 입력하면서 이전 커서 지우기
2. 컴퓨터와 가위바위보 게임 -> 무승부0 사용자승리1 컴퓨터승리2 switch문 사용
*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>
void gotoxy(int, int);
int main()
{
	int x = 3, y = 3;
	char ch;

	while (1)
	{
		gotoxy(x, y); printf("*\b");
		ch = _getch();
		if (ch == 224)
			ch = _getch();
		switch (ch)
		{
		case 72: printf("  "); y--; break;
		case 80: printf("  "); y++; break;
		case 75: printf("  "); x--; break;
		case 77: printf("  "); x++; break;
		}
		gotoxy(x, y); printf("*");
	}
	return 0;
}
void gotoxy(int x, int y)
{
	COORD Cur = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}
