// Write a single expression whose value is either -1, 0, or +1, depending on
// whether i is less than, equal to, or greater than j, respectively.
// Answer: i < j ? -1 : i == j ? 0 : 1

#include<stdio.h>

int main(void)
{
	int i, j;

	i = 7; j = 10;
	printf("%d\n", i < j ? -1 : i == j ? 0 : 1);
	i = 7; j = 7;
	printf("%d\n", i < j ? -1 : i == j ? 0 : 1);
	i = 10; j = 7;
	printf("%d\n", i < j ? -1 : i == j ? 0 : 1);

	return 0;
}
