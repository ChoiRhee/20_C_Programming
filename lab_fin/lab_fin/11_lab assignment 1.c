/* 
2���� ���� (x,y)�� ���� �� ���� ���� A=(x1,y1) B=(x2,y2) 
����, ����, ����, ��Į�� ��, ������ ũ�� ���
���Ϳ� ��Į��k �Է� ���� �� ���� ���� ��� ���
*/
#include <stdio.h>
#include <math.h>
struct vector {
	double x;
	double y;
};
int main()
{
	struct vector v[2];
	int k;

	printf("ù ��° ���� �Է� : ");
	scanf("%lf %lf", &v[0].x, &v[0].y);
	printf("�� ��° ���� �Է� : ");
	scanf("%lf %lf", &v[1].x, &v[1].y);
	printf("��Į��k �Է� : ");
	scanf("%d", &k);

	printf("����: (%.2f, %.2f)\n", v[0].x + v[1].x, v[0].y + v[1].y);
	printf("����: (%.2f, %.2f)\n", v[0].x - v[1].x, v[0].y - v[1].y);
	printf("����: %.2f\n", v[0].x * v[1].x + v[0].y * v[1].y);
	printf("��Į�� ��: (%.2f, %.2f) \n", k * v[0].x, k * v[0].y);
	printf("ũ��: |%.2f|\n", sqrt(v[0].x * v[0].x + v[0].y * v[0].y));

	return 0;
}