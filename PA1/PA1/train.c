#include <stdio.h>
#define MINUTE 60 
int main(void)
{
	int d, t1, t2, h, m, s;							// unsigned int: 0 ~ 4294967295까지 숫자 표현, 출력 %u
	float time, d_t1, d_t2;

	printf("두 기차 사이의 거리를 입력하시오: \n");				// O < distance 정수
	scanf("%d", &d);
	printf("첫 번째 기차의 속도 (km/h)를 입력하시오: \n");		// 0 < km_1 정수
	scanf("%d", &t1);
	printf("두 번째 기차의 속도 (km/h)를 입력하시오: \n");		// 0 < km_2 정수
	scanf("%d", &t2);

	time = (float)d / (t1 + t2) * MINUTE;						// time이 실수형 변수이기 때문에 거리 d를 일시적으로 실수형으로 바꿔서 계산한다. 

	h = time / MINUTE;											// 시간을 분 단위로 지정했기 떄문에 60으로 나눠준다. 
	m = time - h * MINUTE;
	s = time * MINUTE - m * MINUTE - h * MINUTE * MINUTE;

	d_t1 = t1 * (time / MINUTE);									// 속도와 단위를 맞추기 위해 분 단위로 계산된 time에 MINUTE(60)을 곱한다. -> 시간 단위의 거리 계산
	d_t2 = t2 * (time / MINUTE);

	printf("충돌까지 총 %.3f 분 (%d 시간 %d 분 %d 초)가 소요됩니다. \n", time, h, m, s);
	printf("첫 번째 기차의 운행 거리는 총 %.2f (km) 입니다. \n", d_t1);
	printf("두 번째 기차의 운행 거리는 총 %.2f (km) 입니다. \n", d_t2);

	return 0;
}