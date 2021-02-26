// Give the values of i and j after each of the following expression statements
// has been executed. (Assume that i has the value 1 initially and j has the
// value 2.)

#include<stdio.h>

int main(void)
{
	int i, j;

	// (a) i += j;
	// Answer: i = 3, j = 2
	i = 1; j = 2;
	i += j;
	printf("(a) i += j;\ni = %d\tj = %d\n\n", i, j);

	// (b) i--;
	// Answer: i = 0, j = 2
	i = 1; j = 2;
	i--;
	printf("(b) i--;\ni = %d\tj = %d\n\n", i, j);

	// (c) i * j / i;
	// Answer: i = 1, j = 2
	i = 1; j = 2;
	i * j / i;
	printf("(c) i * j / i;\ni = %d\tj = %d\n\n", i, j);

	// (d) i % ++j;
	// Answer: i = 1, j = 3
	i = 1; j = 2;
	i % ++j;
	printf("(d) i %% ++j;\ni = %d\tj = %d\n", i, j);


	return 0;
}
