#include <stdio.h>
#include <windows.h>
void gotoxy(int x, int y)
{
	COORD Cur = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}
int main()
{
	gotoxy(30, 11);
	printf("Hello, C!");
	gotoxy(79, 24);

	return 0;
}