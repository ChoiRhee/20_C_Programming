/* 
십진수 -> 이진수 변환
dec_to_bin(int, char*, int*)
이진수로 변환해 배열에 저장하고 
이진수 길이를 인수로 전달된 길이 저장 변수에 저장
*/
#include <stdio.h>
#define SIZE 32
void dec_to_bin(int, char*, int*);
int main()
{
	char bin[SIZE];				//이진수 저장 배열
	int num, count = 0, i;		//count 이진수 길이

	printf("양의 정수를 입력하세요: ");
	scanf("%d", &num);
	dec_to_bin(num, bin, &count);
	
	for (i = count - 1; i >= 0; i--)
		printf("%d", bin[i]);
	
	return 0;
}
void dec_to_bin(int num, char* bin, int* count)
{
	int index = 0;
	while (num)
	{
		bin[index] = num % 2;
		num /= 2;
		index++;
	}
	*count = index;
}