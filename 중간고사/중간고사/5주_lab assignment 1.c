/*
물체의 질량m, 낙하속도v, 높이h를 입력받은 후 운동에너지, 위치에너지, 역학적 에너지를 구하시오
중력g는 기호상수로 9.8 지정
운동에너지 Ek=1/2mv^2
위치에너지 Ep=mgh
역학적에너지 Em=Ep+Ek
에너지 값은 소수점 이하 둘째자리까지만 출력
*/
#include <stdio.h>
#define GRAVITY 9.8
int main(void)
{
	float m, v, h;
	double Ek, Ep, Em;

	printf("물체의 질량<g>, 속도<m/s> 및 높이<m>를 입력하시오: ");
	scanf("%f %f %f", &m, &v, &h);

	Ek = 1.0 / 2 * m * v * v;
	Ep = m * GRAVITY * h;
	Em = Ek + Ep;

	printf("\n운동에너지: %.2lf[J] \n위치에너지: %.2f[J] \n역학적에너지: %.2lf[J] \n", Ek, Ep, Em);

	return 0;
}