// Show the output produced by each of the following program fragments. Assume
// that i, j, and k are int variables.

#include<stdio.h>

int main(void)
{
	int i, j, k;

	// (a)
	i = 7; j = 8;
	j *= j + 1;
	printf("%d %d", i, j);

	// (b)
	i = j = k = 1;
	i += j += k;
	printf("%d %d %d", i, j, k);

	// (c)
	i = 1; j = 2; k = 3;
	i -= j -= k;
	printf("%d %d %d", i, j, k);

	// (d)
	i = 2; j = 1; k = 0;
	i *= j *= k;
	printf("%d %d %d", i, j, k);

	return 0;
}
