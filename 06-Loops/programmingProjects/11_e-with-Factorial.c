// The value of the constant of the mathematical constant e can be expressed as
// an infinite series:
// e = 1 + 1/1! + 1/2! + 1/3! + ...
// Write a program that approximates e by computing the value of
// 1 + 1/1! + 1/2! + 1/3! + ... 1/n!
// where n is an integer entered by the user.

#include<stdio.h>

int main(void)
{
	float e = 1, factorial = 1;
	int iterations;

	printf("The value of the constant of the mathematical constant e can ");
	printf("be expressed as an infinite series:\n");
	printf("e = 1 + 1/1! + 1/2! + 1/3! + ...\n");
	printf("We can aproximate the value of e by computing the value of \n");
	printf("1 + 1/1! + 1/2! + 1/3! + ... 1/n!\n");
	printf("What would you like n to be?\n");
	scanf("%d", &iterations);

	for(int i = 1; i <= iterations; i++) {
		factorial *= i;
		e += 1 / factorial;
	}

	printf("\ne = %f\n", e);

	return 0;
}
