// Modify Programming Project 11 so that the program continues adding terms
// until the current term becomes less than ɛ, where ɛ is a small
// (floating-point) number entered by the user.
// ORIGINAL:
// The value of the constant of the mathematical constant e can be expressed as
// an infinite series:
// e = 1 + 1/1! + 1/2! + 1/3! + ...
// Write a program that approximates e by computing the value of
// 1 + 1/1! + 1/2! + 1/3! + ... 1/n!
// where n is an integer entered by the user.

#include<stdio.h>

int main(void)
{
	float e = 1, factorial = 1, minimum_increase, increase;

	printf("The value of the constant of the mathematical constant e can ");
	printf("be expressed as an infinite series:\n");
	printf("e = 1 + 1/1! + 1/2! + 1/3! + ...\n");
	printf("We can aproximate the value of e by computing the value of \n");
	printf("1 + 1/1! + 1/2! + 1/3! + ... 1/n!\n");
	printf("We will keep calculating until 1/n! is really small. ");
	printf("How small shall we make the minimum increase?\n");
	scanf("%f", &minimum_increase);

	for (int i = 1; (increase = 1 / (factorial *= i)) >= minimum_increase; i++) {
		e += increase;
	}

	printf("\ne = %f\n", e);

	return 0;
}
