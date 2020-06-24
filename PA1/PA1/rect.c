#include <stdio.h>
int main(void)
{
	unsigned short r_length, r_width, t_length, t_width, people, space, seat;	// unsigned short: 0 ~ 65535까지 숫자 표현, 출력 %hu
	float l_table, w_table;

	printf("What are the length and width of the room (in meters)? \n");		// 0 < r_length, r_width < 1000 정수
	scanf("%hu %hu", &r_length, &r_width);
	printf("What are the length and width of each table (in meters)? \n");		// 0 < t_length, t_width < 1000 정수
	scanf("%hu %hu", &t_length, &t_width);
	printf("How much space is required between table (in meters)? \n");			// 0 < space < 10 정수
	scanf("%hu", &space);
	printf("How many people does each table seat? \n");							// 3 <= seat <= 20 정수
	scanf("%hu", &seat);

	l_table = ((float)r_length - space) / (t_length + space);
	w_table = ((float)r_width - space) / (t_width + space);
	people = (int)l_table * (int)w_table * seat;								// 테이블의 개수는 소수점 이하 자리가 무의미 하기에 int로 바꾼다.

	printf("This arrange seats %hu people.\n", people);

	return 0;
}