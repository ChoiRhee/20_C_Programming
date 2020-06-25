/*
기본임금 8350
30시간 넘으면 초과근무, 1.2배 임금
세율 주당 10만 이하 3% 10만 이상 5%
기호상수 사용, 주당 근무 시간 입력 받아 계산
*/
#include <stdio.h>
#define WAGE 8350.0
#define OVER 1.2
#define RATE1 0.03
#define RATE2 0.05
int main(void)
{
	float time, week;
	float otime, oweek;
	printf("근무 시간을 입력하세요(시간 단위): ");
	scanf("%f", &time);

	week = time * WAGE;
	otime = time - 30;
	oweek = (30 * WAGE) + (otime * WAGE * OVER);

	if (time <= 30)
		if (week <= 100000)
		{
			printf("주당 총 임금: %.0f원\n\n", week);
			printf("주급이 10만원 이하로 3%% 세율 적용, 세액: %.0f원\n\n", week * RATE1);
			printf("실수령액: %.0f원\n", week * (1 - RATE1));
		}
		else
		{
			printf("주당 총 임금: %.0f원\n\n", week);
			printf("주급이 10만원 초과로 5%% 세율 적용, 세액: %.0f원\n\n", week * RATE2);
			printf("실수령액: %.0f원\n", week * (1 - RATE2));
		}
	else
		if (oweek <= 100000)
		{
			printf("기본주급: %.0f원\n", WAGE * 30);
			printf("초과수당: %.0f시간, %.0f원\n", otime, otime * WAGE * OVER);
			printf("주당 총 임금: %.0f원\n\n", oweek);
			printf("주급이 10만원 이하로 3%% 세율 적용, 세액: %.0f원\n\n", oweek * RATE1);
			printf("실수령액: %.0f원\n", oweek * (1 - RATE1));
		}
		else
		{
			printf("기본주급: %.0f원\n", WAGE * 30);
			printf("초과수당: %.0f시간, %.0f원\n", otime, otime * WAGE * OVER);
			printf("주당 총 임금: %.0f원\n\n", oweek);
			printf("주급이 10만원 초과로 5%% 세율 적용, 세액: %.0f원\n\n", oweek * RATE2);
			printf("실수령액: %.0f원\n", oweek * (1 - RATE2));
		}
	return 0;
}