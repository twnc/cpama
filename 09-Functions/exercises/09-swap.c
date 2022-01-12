// What will be the output of the following program?
// ANSWER: i = 1, j = 2
// This will be because the function only modifies copies of the values and
// doesn't return them.
#include<stdio.h>

void swap (int a, int b);

int main(void)
{
	int i = 1, j = 2;

	swap(i, j);
	printf("i = %d, j = %d\n", i, j);
	return 0;
}

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
