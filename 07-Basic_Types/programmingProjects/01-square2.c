// The square 2.c program of Section 6.3 will fail (usually by printing strange
// answers) if i * i exceeds the maximum int value. Run the program and
// determine the smallest value of n that causes failure. Try changing the type
// of i to short and running the porgram again. (Don't forget to update the
// conversion specifications in the call of printf!) Then try long. From these
// experiments, what can you conclude about the number of bits used to store
// integer types on your macihne?
// Prints a table of squares using a for statement.

#include<stdio.h>

int main(void)
{
	int i, n;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++) {
		printf("%d %d\n", i, i * i);
	}

	return 0;
}
