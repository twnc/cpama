// Write a recursive version of the gcd function (see Exercise 3). Here's the
// strategy to use for computing gcd(m, n): If n is 0, return m. Otherwise, call
// gcd recursively, passing n as the first argument and m % n as the second.
#include<stdio.h>

int gcd(int m, int n)
{
	if (n == 0)
		return m;
	else
		return gcd(n, m % n);
}

int main(void)
{
	int n1, n2;

	printf("Please enter two integers: ");
	fflush(stdout);
	scanf("%d%d", &n1, &n2);

	printf("The greatest common divisor of %d and %d is %d.\n", n1, n2, gcd(n1, n2));
	return 0;
}
