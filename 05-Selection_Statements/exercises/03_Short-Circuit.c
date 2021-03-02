// The following program fragments illustrate the short-circuit behaviour of
// logical expressions. Show the output produced by each, assuming that i, j and
// k are int variables.

#include<stdio.h>

int main(void)
{
	int i, j, k;

	// (a)
	i = 3; j = 4; k = 5;
	printf("%d ", i < j || ++j < k);
	printf("%d %d %d\n", i, j, k);
	// Answer: 1 3 4 5

	// (b)
	i = 7; j = 8; k = 9;
	printf("%d ", i - 7 && j++ < k);
	printf("%d %d %d\n", i, j, k);
	// Answer: 0 7 8 9

	// (c)
	i = 7; j = 8; k = 9;
	printf("%d ", (i = j) || (j = k));
	printf("%d %d %d\n", i, j, k);
	// Answer: 1 8 8 9

	// (d)
	i = 1; j = 1; k = 1;
	printf("%d ", ++i || ++j && ++k);
	printf("%d %d %d\n", i, j, k);
	// Answer: 1 2 1 1

	return 0;
}
