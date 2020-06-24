#include <stdio.h>
int main(void)
{
	unsigned short length, width, people, radius, space, seat;				// unsigned short: 0 ~ 65535까지 숫자 표현, 출력 %hu
	float l_table, w_table;

	printf("What are the length and width of the room (in meters)? \n");	// 0 < length, width < 1000 정수
	scanf("%hu %hu", &length, &width);
	printf("What is the radius of each table (in meters)? \n");				// 1 <= radius <= 500 정수
	scanf("%hu", &radius);
	printf("How much space is required between table (in meters)? \n");		// 0 < space < 10 정수
	scanf("%hu", &space);
	printf("How many people does each table seat? \n");						// // 3 <= seat <= 20 정수
	scanf("%hu", &seat);

	l_table = ((float)length - space) / (2 * radius + space);				// 테이블의 크기는 반지름이 아닌 지름이기 때문에 2 * radius
	w_table = ((float)width - space) / (2 * radius + space);
	people = (int)l_table * (int)w_table * seat;							// 테이블은 소수점 이하 자리가 무의미 하기에 int로 바꾼다.

	printf("This arrange seats %hu people.\n", people);

	return 0;
}