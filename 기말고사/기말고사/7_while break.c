#include <stdio.h>
#include <math.h>
int main()
{
	double v;
	while (1)
	{
		printf("�Ǽ����� �Է��ϼ���: ");
		scanf("%lf", &v);
		if (v < 0)
			break;
		printf("%f�� �������� %f�Դϴ�. \n", v, sqrt(v));
	}
	return 0;
}