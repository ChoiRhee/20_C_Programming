/*
��ü�� ����m, ���ϼӵ�v, ����h�� �Է¹��� �� �������, ��ġ������, ������ �������� ���Ͻÿ�
�߷�g�� ��ȣ����� 9.8 ����
������� Ek=1/2mv^2
��ġ������ Ep=mgh
������������ Em=Ep+Ek
������ ���� �Ҽ��� ���� ��°�ڸ������� ���
*/
#include <stdio.h>
#define GRAVITY 9.8
int main(void)
{
	float m, v, h;
	double Ek, Ep, Em;

	printf("��ü�� ����<g>, �ӵ�<m/s> �� ����<m>�� �Է��Ͻÿ�: ");
	scanf("%f %f %f", &m, &v, &h);

	Ek = 1.0 / 2 * m * v * v;
	Ep = m * GRAVITY * h;
	Em = Ek + Ep;

	printf("\n�������: %.2lf[J] \n��ġ������: %.2f[J] \n������������: %.2lf[J] \n", Ek, Ep, Em);

	return 0;
}