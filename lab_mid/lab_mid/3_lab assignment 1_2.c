#include <stdio.h>
int main()
{
	int age;
	double time;

	printf("���̸� �Է��ϼ���: ");
	scanf("%d", &age);

	time = age * 3.156e7;
	printf("%d���� %.0lf�� Ȥ�� %e�� �Դϴ�. \n", age, time, time);

	return 0;
}