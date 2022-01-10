// Write a function gcd(m, n) that calculates the greatest common divisor of the
// integers m and n. (Programming Project 2 in Chapter 6 describes Euclid's
// algorithm for computing the GCD.)

#include<stdio.h>

int gcd(int m, int n)
{
	int biggest, smallest, common_divisor;
	if (m > n) {
		biggest = m;
		smallest = n;
	} else {
		biggest = n;
		smallest = m;
	}
	common_divisor = smallest;

	while (common_divisor != 0) {
		common_divisor = biggest % smallest;
		biggest = smallest;
		smallest = common_divisor;
	}
	common_divisor = biggest;

	return common_divisor;
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
