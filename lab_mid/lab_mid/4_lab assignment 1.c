#include <stdio.h>
#define GRAVITY 9.8
int main()
{
	float Ek, Ep, Em;
	float g, ms, m;

	printf("물체의 질량<g> 속도<m/s> 높이<m>를 입력하세요:");
	scanf("%f %f %f", &g, &ms, &m);

	Ek = g * ms * ms / 2;
	Ep = g * GRAVITY * m;
	Em = Ek + Ep;
	printf("\n운동에너지 = %.2f[J]\n위치에너지 = %.2f[J]\n역학적에너지 = %.2f[J]\n", Ek,Ep, Em);

	return 0;
}