/*
����Ÿ�km, �������ӵ�km/h�� �Է� �ް� �� ���� �ð��� �ð�, ��, �� ������ ���
��ȣ��� ���, ������ �����ϰ� �ۼ�
�Ÿ� = �ӵ� * �ð�
*/
#include <stdio.h>
#define MINUTE 60
#define SECOND	3600
int main(void)
{
	int h, m, s;				// ��, ��, ��
	float km, kh, t;			// �Ÿ�, �ӵ�, �ð�

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