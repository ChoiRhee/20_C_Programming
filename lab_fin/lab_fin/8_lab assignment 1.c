/* 
주사위 던지기 50번 실행, get_dice_face() 함수를 만들엇 주사위가 나온 면 횟수 출력
정적 지역 변수를 이용해 횟수 ++
주사위 면은 난수를 이용해 생성
*/
#include <stdio.h>
#include <stdlib.h>	//rand()
void get_dice_face();
int main()
{
	int x;

	printf("주사위 던지기를 시작합니다. \n");
	for (x = 0; x < 50; x++)
		get_dice_face();

	return 0;;
}
void get_dice_face()
{
	static int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0;
	int i;
	i = rand() % 6 + 1;
	printf("현재 나온 주사위 면: %d \n", i);
	switch (i)
	{
	case 1: one++; break;
	case 2: two++; break;
	case 3: three++; break;
	case 4: four++; break;
	case 5: five++; break;
	case 6: six++; break;
	}
	printf("주사위 숫자별 나온 횟수: \n");
	printf("1: %d  2: %d  3: %d  4: %d  5: %d  6: %d\n", one, two, three, four, five, six);
}