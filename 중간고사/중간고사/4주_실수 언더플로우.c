#include <stdio.h>
int main(void)
{
	float x = 1.23456e-38;	// float 최소 양의 실수 
	float y = 1.23456e-40;
	float z = 1.23456e-46;

	printf("x = %e \ny = %e \nz = %e \n", x, y, z);

	return 0;
}