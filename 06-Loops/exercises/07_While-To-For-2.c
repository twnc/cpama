// Translate the program fragment of Exercise 2 into a single for statement

#include<stdio.h>

int main(void)
{
	for(int i = 9384; i > 0; i /= 10)
		printf("%d ", i);
	printf("\n");

	return 0;
}
