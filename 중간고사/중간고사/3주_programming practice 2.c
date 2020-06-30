/*
<%f 형식지정자>
%f - 기본적으로 소수점 이하 6자리까지 출력
%13.1f - 13칸에 걸쳐서 출력, 오른쪽 정렬
%+4.2f - 4자리 이상 표시, 4자리 이상이므로 무시(rent는 7자리)
%4.2f - 4자리
%019.2f - 19자리 출력, 빈 칸은 0으로 채운다.(padding)

<%e 형식지정자>
%e - 기본적으로 소수점 이하 6자리까지 출력
%10.3e - 10자리 지수표기법으로 출력, 지수값 부포도 함꼐 표현한다.
** 5.1312e-10
*/
#include <stdio.h>
int main(void)
{
	float rent = 3852.99;

	printf("*%f* \n", rent);
	printf("*%e* \n", rent);
	printf("*%4.2f* \n", rent);
	printf("*%13.1f* \n", rent);
	printf("*%10.3e* \n", rent);
	printf("*%+4.2f* \n", rent);
	printf("*%019.2f* \n", rent);

	return 0;
}