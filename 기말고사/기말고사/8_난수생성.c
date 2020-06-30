#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void get_random(int n);
int main()
{
	srand((unsigned)time(NULL));
	get_random(10);
	return 0;
}
void get_random(int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d \n", rand());
}