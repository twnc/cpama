// Translate the program fragment of Exercise 1 into a single for statement

#include<stdio.h>

int main(void)
{
	int i;

	i = 1;
	while (i <= 128) {
		printf("%d ", i);
		i *= 2;
	}
	printf("\n");

	return 0;
}
