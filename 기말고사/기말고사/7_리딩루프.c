#include <stdio.h>
int main()
{
	int num;
	int sum = 0;

	printf("Enter an integer to be summed ");
	printf("(q to quit)");
	while (scanf("%d", &num) == 1)
	{
		sum += num;
		printf("Please enter next integer (q to quit)");
	}
	printf("Thoese integers sum to %d. \n", sum);

	return 0;
}