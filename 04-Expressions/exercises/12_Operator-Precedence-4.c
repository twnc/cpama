// Show the output produced by each of the following program fragments. Assume
// that i and j are int variables.

#include<stdio.h>

int main(void)
{
	int i, j;

	// (a)
	i = 5;
	j = ++i * 3 - 2;
	printf("%d %d\n", i, j);

	// (b)
	i = 5;
	j = 3 - 2 * i++;
	printf("%d %d\n", i, j);

	// (c)
	i = 7;
	j = 3 * i-- + 2;
	printf("%d %d\n", i, j);

	// (d)
	i = 7;
	j = 3 + --i * 2;
	printf("%d %d\n", i, j);

	return 0;
}
