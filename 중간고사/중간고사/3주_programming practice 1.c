/*
<%d 형식지정자>
%d - 정수 출력
%2d - 2칸을 오른쪽에 출력 (931은 2자리 이상이므로 원래 값 출력)\
%10d - 10칸을 출력, 오른쪽 정렬
%-10d - 10칸을 출력, 왼쪽 정렬
%+d - +부호 출력
*/
#include <stdio.h>
int main(void)
{
	int pages = 931;

	printf("*%d* \n", pages);
	printf("*%2d* \n", pages);
	printf("*%10d* \n", pages);
	printf("*%-10d* \n", pages);
	printf("*%+d* \n", pages);

	return 0;
}