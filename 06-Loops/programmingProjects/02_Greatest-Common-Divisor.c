// Write a program that asks the user to enter two integers, then calculates and
// displays their greatest common divisor (GCD):
//
// Enter two integers: 12 28
// Greatest common divisor: 4
//
// Hint: The classic algorithm for computing the GCD, known as Euclid's
// algorithm, goes as follows; Let m and n be variables containing the two
// numbers. If n is 0, then stop: m contains the GCD. Otherwise, compute the
// remainder when m is divided by n. Copy n into m and copy the remainder into
// n. Then repeat the process, starting with testing whether n is 0.

#include<stdio.h>

int main(void)
{
	int int1, int2, temp, greatest_common_divisor = 1;
	printf("Enter two integers: ");
	scanf("%d%d", &int1, &int2);

	// Sort int1 and int2
	if(int1 > int2) {
		temp = int1;
		int1 = int2;
		int2 = temp;
	}

	// Find greatest common divisor
	for(int i = 2; i <= int1; ++i) {
		if(int1 % i == 0 && int2 % i == 0)
			greatest_common_divisor = i;
	}

	printf("Greatest common divisor: %d\n", greatest_common_divisor);

	return 0;
}
