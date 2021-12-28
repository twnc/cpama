// The Fibonacci numbers are 0, 1, 1, 2, 3, 5, 8, 13, ..., where each number is
// the sum of the two preceding numbers. Write a program fragment that declares
// an array named fib_numbers of length 40 and fills the array with the first 40
// Fibonacci numbers. Hint: Fill in the first two numbers individually, then use
// a loop to compute the remaining numbers.

#include<stdio.h>

#define SIZE ((int) (sizeof(fib_numbers) / sizeof(fib_numbers[0])))

int main(void)
{
	// Initialise array with first two elements
	int fib_numbers[40] = {0, 1};

	// Calculate next 38 Fibonacci numbers and store in array
	for (int i = 2; i < SIZE; ++i) {
		fib_numbers[i] = fib_numbers[i-2] + fib_numbers[i-1];
	}

	// Print output
	for (int i = 0; i < SIZE; ++i) {
		printf("%8d ", fib_numbers[i]);
		if (i % 5 == 4)
			putchar('\n');
	}

	return 0;
}
