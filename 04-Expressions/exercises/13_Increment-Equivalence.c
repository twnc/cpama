// Only one of the expressions ++i and i++ is exactly the same as (i += 1);
// which is it?
// Justify your answer

// Answer: ++i is the same as (i += 1)
// This is because ++i increments i as a side effect and then gives itself as a
// result. The += operator assigns the lvalue, itself + the rvalue, then gives
// itself as a result. However i++ does things the other way around, it gives
// itself as a value and the increments i as a side effect. The program below
// demonstrates this.

#include<stdio.h>

int main(void)
{
	int i, j, k;
	i = j = k = 1;

	printf("i = %d\nj = %d\nk = %d\n", i, j, k);
	printf("\n");

	printf("printf(++i) gives the following output: %d\n", ++i);
	printf("printf(j++) gives the following output: %d\n", j++);
	printf("printf(k += 1) gives the following output: %d\n", k += 1);
	printf("\n");

	printf("i = %d\nj = %d\nk = %d\n", i, j, k);

	return 0;
}
