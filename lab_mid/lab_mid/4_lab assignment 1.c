#include <stdio.h>
#define GRAVITY 9.8
int main()
{
	float Ek, Ep, Em;
	float g, ms, m;

	printf("��ü�� ����<g> �ӵ�<m/s> ����<m>�� �Է��ϼ���:");
	scanf("%f %f %f", &g, &ms, &m);

	Ek = g * ms * ms / 2;
	Ep = g * GRAVITY * m;
	Em = Ek + Ep;
	printf("\n������� = %.2f[J]\n��ġ������ = %.2f[J]\n������������ = %.2f[J]\n", Ek,Ep, Em);

	return 0;
}