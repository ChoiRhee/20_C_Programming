/*
입력받은 월급으로 연봉 계산하는 프로그램
\a : 시작 시 경고음 "삐"
\b : 앞으로 옮겨서 작성, 언더바와 \b의 개수를 맞춰 입력함
\t : 커서를 다음 탭 위치로 옮긴다. 탭 한번 한 만큼 띄우고 문장 출력
\r : 커서를 줄의 시작 위치(맨 앞)으로 옮겨서 Gee!작성
*/
#include <stdio.h>
int main(void)
{
	float salary;

	printf("\a Enter your desired monthly salary: ");
	printf("$__________\b\b\b\b\b\b\b\b\b\b");
	scanf("%f", &salary);

	printf("\n\t$%.2f a month is $%.2f a yaer.", salary, salary * 12.0);
	printf("\rGee!\n");

	return 0;
}