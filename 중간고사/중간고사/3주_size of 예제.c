#include <stdio.h>
int main(void)
{
	short year = 0;
	int sale = 0;
	long total_sale = 0;

	year = 10;
	sale = 200000000;
	total_sale = year * sale;

	printf("total_sale = %d \n", total_sale);

	printf("short���� ũ��: %d ����Ʈ \nint���� ũ��: %d \nlong���� ũ��: %d", sizeof(short), sizeof(sale), sizeof(long));

	return 0;
}