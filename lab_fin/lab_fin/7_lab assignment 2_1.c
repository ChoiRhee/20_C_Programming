/* 
1. ����Ű �Է��ϸ鼭 ���� Ŀ�� �����
2. ��ǻ�Ϳ� ���������� ���� -> ���º�0 ����ڽ¸�1 ��ǻ�ͽ¸�2 switch�� ���
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
