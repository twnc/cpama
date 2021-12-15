// Modify the reverse.c program of Section 8.1 to use the expression (int)
// (sizeof(a) / sizeof(a[0])) (or a macro with this value) for the array length.
// ORIGINAL:
// Reverses a series of numbers
// Enter 10 numbers: 34 82 49 102 7 94 23 11 50 31
// In reverse order: 31 50 11 23 94 7 102 49 82 34

#include<stdio.h>

#define N 10
#define SIZE ((int) (sizeof(array)/sizeof(array[0])))

int main(void)
{
	int array[N], i;

	printf("Enter %d numbers: ", N);
	fflush(stdout);
	for (i = 0; i < SIZE; ++i)
		scanf("%d", &array[i]);

	printf("In reverse order:");
	for (i = SIZE - 1; i >= 0; --i)
		printf(" %d", array[i]);
	printf("\n");

	return 0;
}
