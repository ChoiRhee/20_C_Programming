#include <stdio.h>
#define MINUTE 60 
int main(void)
{
	int d, t1, t2, h, m, s;							// unsigned int: 0 ~ 4294967295���� ���� ǥ��, ��� %u
	float time, d_t1, d_t2;

	printf("�� ���� ������ �Ÿ��� �Է��Ͻÿ�: \n");				// O < distance ����
	scanf("%d", &d);
	printf("ù ��° ������ �ӵ� (km/h)�� �Է��Ͻÿ�: \n");		// 0 < km_1 ����
	scanf("%d", &t1);
	printf("�� ��° ������ �ӵ� (km/h)�� �Է��Ͻÿ�: \n");		// 0 < km_2 ����
	scanf("%d", &t2);

	time = (float)d / (t1 + t2) * MINUTE;						// time�� �Ǽ��� �����̱� ������ �Ÿ� d�� �Ͻ������� �Ǽ������� �ٲ㼭 ����Ѵ�. 

	h = time / MINUTE;											// �ð��� �� ������ �����߱� ������ 60���� �����ش�. 
	m = time - h * MINUTE;
	s = time * MINUTE - m * MINUTE - h * MINUTE * MINUTE;

	d_t1 = t1 * (time / MINUTE);									// �ӵ��� ������ ���߱� ���� �� ������ ���� time�� MINUTE(60)�� ���Ѵ�. -> �ð� ������ �Ÿ� ���
	d_t2 = t2 * (time / MINUTE);

	printf("�浹���� �� %.3f �� (%d �ð� %d �� %d ��)�� �ҿ�˴ϴ�. \n", time, h, m, s);
	printf("ù ��° ������ ���� �Ÿ��� �� %.2f (km) �Դϴ�. \n", d_t1);
	printf("�� ��° ������ ���� �Ÿ��� �� %.2f (km) �Դϴ�. \n", d_t2);

	return 0;
}