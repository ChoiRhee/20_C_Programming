/* 
������ -> ������ ��ȯ
dec_to_bin(int, char*, int*)
�������� ��ȯ�� �迭�� �����ϰ� 
������ ���̸� �μ��� ���޵� ���� ���� ������ ����
*/
#include <stdio.h>
#define SIZE 32
void dec_to_bin(int, char*, int*);
int main()
{
	char bin[SIZE];				//������ ���� �迭
	int num, count = 0, i;		//count ������ ����

	printf("���� ������ �Է��ϼ���: ");
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