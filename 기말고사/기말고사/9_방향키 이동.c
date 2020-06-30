#include <stdio.h>
#include <Windows.h>
#include <conio.h>
void gotoxy(int x, int y)
{
	COORD Cur = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}
int main()
{
	int x = 40, y = 12, ch;
	while (1)
	{
		gotoxy(x, y);
		printf("*");
		ch = _getch();
		if (ch == 224)
			ch = _getch();
		switch (ch) {
		case 72: y--; break;
		case 80: y++; break;
		case 75: x--; break;
		case 77: x++; break;
		}
	}
	return 0;
}