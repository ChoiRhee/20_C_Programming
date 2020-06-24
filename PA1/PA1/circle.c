#include <stdio.h>
int main(void)
{
	unsigned short length, width, people, radius, space, seat;				// unsigned short: 0 ~ 65535���� ���� ǥ��, ��� %hu
	float l_table, w_table;

	printf("What are the length and width of the room (in meters)? \n");	// 0 < length, width < 1000 ����
	scanf("%hu %hu", &length, &width);
	printf("What is the radius of each table (in meters)? \n");				// 1 <= radius <= 500 ����
	scanf("%hu", &radius);
	printf("How much space is required between table (in meters)? \n");		// 0 < space < 10 ����
	scanf("%hu", &space);
	printf("How many people does each table seat? \n");						// // 3 <= seat <= 20 ����
	scanf("%hu", &seat);

	l_table = ((float)length - space) / (2 * radius + space);				// ���̺��� ũ��� �������� �ƴ� �����̱� ������ 2 * radius
	w_table = ((float)width - space) / (2 * radius + space);
	people = (int)l_table * (int)w_table * seat;							// ���̺��� �Ҽ��� ���� �ڸ��� ���ǹ� �ϱ⿡ int�� �ٲ۴�.

	printf("This arrange seats %hu people.\n", people);

	return 0;
}