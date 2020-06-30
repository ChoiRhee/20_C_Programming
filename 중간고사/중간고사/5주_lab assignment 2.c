/*
주행거리km, 평균주행속도km/h를 입력 받고 총 주행 시간을 시간, 분, 초 단위로 출력
기호상수 사용, 수식을 간단하게 작성
거리 = 속도 * 시간
*/
#include <stdio.h>
#define MINUTE 60
#define SECOND	3600
int main(void)
{
	int h, m, s;				// 시, 분, 초
	float km, kh, t;			// 거리, 속도, 시간

	printf("Enter the speed <km/h>: ");
	scanf("%f", &kh);
	printf("Enter the driving distance <km>: ");
	scanf("%f", &km);

	t = km / kh * SECOND;
	h = t / SECOND;
	m = t / MINUTE - h * MINUTE;
	s = t - m * MINUTE - h * SECOND;

	printf("The total driving time is %d hours %d minutes %d seconds \n", h, m, s);
	return 0;
}