/* �� �� ������ �Ÿ� ����ϴ� �Լ� 
main���� �� �� (a,b) (c,d)�� �Է� �ް� distȣ��
�� �� ������ �Ÿ��� ����ϴ� �Լ� dist ����
�Ÿ� = ��Ʈ( (a-c)^2 + (b-d)^2 )
����ڰ� ���α׷� ������ ������ �ݺ� ����
*/
#include <stdio.h>
#include <math.h>
void dist(double, double, double, double);
int main()
{
	double a, b, c, d;
	char ch;
	do
	{
		printf("ù ��° ���� ��ǥ�� �Է��ϼ���: ");
		scanf("%lf %lf", &a, &b);
		getchar();
		printf("�� ��° ���� ��ǥ�� �Է��ϼ���: ");
		scanf("%lf %lf", &c, &d);
		getchar();

		dist(a, b, c, d);
		printf("�ٽ� �����ϰڽ��ϱ�? (y/n)");
		scanf("%c", &ch);
		getchar();
	} while (ch != 'n');

	return 0;
}
void dist(double a, double b, double c, double d)
{
	int m;
	d = (a - c) * (a - c) + (b - d) * (b - d);
	printf("�� �� ������ �Ÿ��� %lf �Դϴ�. \n", sqrt(d));
}