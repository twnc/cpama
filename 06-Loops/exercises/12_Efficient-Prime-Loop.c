// The following "prime testing" loop appeared in Section 6.4 as an example:
// for (d = 2; d < n; d++)
//    if (n % d == 0)
//       break;
// This loop isn't very efficient. It's not necessary to divide n by all numbers
// between 2 and n-1 to determine whether it's prime. In fact, we need only
// check divisors up to the square root of n. Modify the loop to take advantage
// of this fac. Hint: Don't try to compare the square root of n; instead,
// compare d * d with n.

#include<stdio.h>

int main(void)
{
	int d, n = 104729;

	for (d = 2; d < n; d++)
		if (n % d == 0)
			break;

	if (n != d)
		printf("%d is not a prime. %d divides by %d.\n", n, n, d);
	else
		printf("%d is a prime number.\n", n);

	return 0;
}
