/* 
�ֻ��� ������ 50�� ����, get_dice_face() �Լ��� ����� �ֻ����� ���� �� Ƚ�� ���
���� ���� ������ �̿��� Ƚ�� ++
�ֻ��� ���� ������ �̿��� ����
*/
#include <stdio.h>
#include <stdlib.h>	//rand()
void get_dice_face();
int main()
{
	int x;

	printf("�ֻ��� �����⸦ �����մϴ�. \n");
	for (x = 0; x < 50; x++)
		get_dice_face();

	return 0;;
}
void get_dice_face()
{
	static int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0;
	int i;
	i = rand() % 6 + 1;
	printf("���� ���� �ֻ��� ��: %d \n", i);
	switch (i)
	{
	case 1: one++; break;
	case 2: two++; break;
	case 3: three++; break;
	case 4: four++; break;
	case 5: five++; break;
	case 6: six++; break;
	}
	printf("�ֻ��� ���ں� ���� Ƚ��: \n");
	printf("1: %d  2: %d  3: %d  4: %d  5: %d  6: %d\n", one, two, three, four, five, six);
}