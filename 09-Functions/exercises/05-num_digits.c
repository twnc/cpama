// Write a function num_digits(n) that returns the number of digits in n (a
// positive integer). Hint: To determine the number of digits in a number m,
// divide it by 10 repeatedly. When n reaches 0, the number of divisions
// indicates how many digits n originally had.

#include<stdio.h>

int num_digits(int n)
{
	int digits = 1;
	while (n >= 10) {
		n /= 10;
		++digits;
	}
	return digits;
}

int main(void)
{
	int n;
	printf("Please enter a positive number: ");
	fflush(stdout);
	scanf("%d", &n);

	printf("%d is %d digit(s) long.\n", n, num_digits(n));

	return 0;
}
