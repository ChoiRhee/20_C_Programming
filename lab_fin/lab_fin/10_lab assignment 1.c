/* 
�Ǽ��� �Է� �޾� �����ο� �Ҽ��η� ���� ���
main()���� �Է� �ް� ���
get_int_real() �Ǽ� �� �ϳ��� �Ű������� ����, ���� �Ҽ��� ��ȯ
*/
#include <stdio.h>
void get_int_real(float);
int main()
{
	float input;

	printf("�Ǽ��� �Է��ϼ���: ");
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
	printf("���� �κ��� %d�̰� �Ҽ��� ���� �κ��� %.2f�Դϴ�. \n", inte, real);
}