/*
�⺻�ӱ� 8350
30�ð� ������ �ʰ��ٹ�, 1.2�� �ӱ�
���� �ִ� 10�� ���� 3% 10�� �̻� 5%
��ȣ��� ���, �ִ� �ٹ� �ð� �Է� �޾� ���
*/
#include <stdio.h>
#define WAGE 8350.0
#define OVER 1.2
#define RATE1 0.03
#define RATE2 0.05
int main(void)
{
	float time, week;
	float otime, oweek;
	printf("�ٹ� �ð��� �Է��ϼ���(�ð� ����): ");
	scanf("%f", &time);

	week = time * WAGE;
	otime = time - 30;
	oweek = (30 * WAGE) + (otime * WAGE * OVER);

	if (time <= 30)
		if (week <= 100000)
		{
			printf("�ִ� �� �ӱ�: %.0f��\n\n", week);
			printf("�ֱ��� 10���� ���Ϸ� 3%% ���� ����, ����: %.0f��\n\n", week * RATE1);
			printf("�Ǽ��ɾ�: %.0f��\n", week * (1 - RATE1));
		}
		else
		{
			printf("�ִ� �� �ӱ�: %.0f��\n\n", week);
			printf("�ֱ��� 10���� �ʰ��� 5%% ���� ����, ����: %.0f��\n\n", week * RATE2);
			printf("�Ǽ��ɾ�: %.0f��\n", week * (1 - RATE2));
		}
	else
		if (oweek <= 100000)
		{
			printf("�⺻�ֱ�: %.0f��\n", WAGE * 30);
			printf("�ʰ�����: %.0f�ð�, %.0f��\n", otime, otime * WAGE * OVER);
			printf("�ִ� �� �ӱ�: %.0f��\n\n", oweek);
			printf("�ֱ��� 10���� ���Ϸ� 3%% ���� ����, ����: %.0f��\n\n", oweek * RATE1);
			printf("�Ǽ��ɾ�: %.0f��\n", oweek * (1 - RATE1));
		}
		else
		{
			printf("�⺻�ֱ�: %.0f��\n", WAGE * 30);
			printf("�ʰ�����: %.0f�ð�, %.0f��\n", otime, otime * WAGE * OVER);
			printf("�ִ� �� �ӱ�: %.0f��\n\n", oweek);
			printf("�ֱ��� 10���� �ʰ��� 5%% ���� ����, ����: %.0f��\n\n", oweek * RATE2);
			printf("�Ǽ��ɾ�: %.0f��\n", oweek * (1 - RATE2));
		}
	return 0;
}