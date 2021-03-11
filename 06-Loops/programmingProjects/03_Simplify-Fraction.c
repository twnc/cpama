// Write a program that asks the user to enter a fraction, then reduces the
// fraction to lowest terms:
//
// Enter a fraction: 6/12
// In lowest terms: 1/2
//
// Hint: To reduce a fraction to lowest terms, first compute the GCD of the
// numerator and the denoniminator. Then divide both the numerator and the
// denominator by the GCD.

#include<stdio.h>

int main(void)
{
	int numerator, denominator, temp, greatest_common_divisor;

	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);

	// Euclid's algorithm to calculate greatest common divisor
	int m = numerator, n = denominator;
	while(n != 0) {
		temp =  m % n;
		m = n;
		n = temp;
	}
	greatest_common_divisor = m;

	// Simplify fraction
	numerator /= greatest_common_divisor;
	denominator /= greatest_common_divisor;

	printf("In lowest terms: %d/%d\n", numerator, denominator);

	return 0;
}
