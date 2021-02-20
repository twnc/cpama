// Show the output produced by each of the following program fragments. Assume that i, j, and k are int variables.

#include<stdio.h>

int main(void)
{
	int i, j, k;

	// (a) 
	i = 5; j = 3;
	printf("%d %d\n", i / j, i % j);
	// Answer: 1 2
	
	// (b) 
	i = 2; j = 3;
	printf("%d\n", (i + 10) % j);
	// Answer: 0
	
	// (c)
	i = 7; j = 8; k = 9;
	printf("%d\n", (i + 10) % k / j);
	// Answer: 1
	
	// (d)
	i = 1; j = 2; k = 3;
	printf("%d\n", (i + 5) % (j + 2) / k);
	// Answer: 0

	return 0;
}
