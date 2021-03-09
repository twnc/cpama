// Find the error in the following program fragment and fix it

#include<stdio.h>

int main(void)
{
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	if (n % 2 == 0);
		printf("n is even\n");

	return 0;
}
