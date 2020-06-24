/* 
실수를 입력 받아 정수부와 소수부로 나눠 출력
main()에서 입력 받고 출력
get_int_real() 실수 값 하나를 매개변수로 전달, 정수 소수로 반환
*/
#include <stdio.h>
void get_int_real(float);
int main()
{
	float input;

	printf("실수를 입력하세요: ");
	scanf("%f", &input);
	get_int_real(input);
	return 0;
}
void get_int_real(float input)
{
	float real;
	int inte;

	inte = (int)input;
	real = input - inte;
	printf("정수 부분은 %d이고 소수점 이하 부분은 %.2f입니다. \n", inte, real);
}