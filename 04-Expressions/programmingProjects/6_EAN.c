// European countries use a 13-digit code, known as a European Article Number
// (EAN) instead of the 12-digit Universal Product Code (UPC) found in North
// America. Each EAN ends with a check digit, just as a UPC does. The technique
// for calculating the check digit is also similar:
// 	Add the second, fourth, sixth, eigth, tenth, and twelfth digits.
// 	Add the first, third, fifth, seventh, ninth, and eleventh digits.
// 	Multiply the first sum by 3 and add it to the second sum.
// 	Subtract 1 from the total.
// 	Compute the remainder when the adjusted total is divided by 10.
// 	Subtract the remainder from 9
// For exqmple, consider Guellueoglu Turkish Delight Pistachio & Coconut, which
// has an EAN of 869148426000. The first sum is 6 + 1 + 8 + 2 + 0 + 0 = 17, and
// the second sum is 8 + 9 + 4 + 4 + 6 + 0 = 31. Multiplying the first sum by 3
// and adding the second yields 82. Subtracting 1 gives 81. The remainder upon
// dividing by 10 is 1. When the remainder is subtracted from 9, the result is
// 8, which matches the last digit of the original code. Your job is to modify
// the upc.c program of Section 4.1 so that it calculates the check digit for an
// EAN. The user will enter the first 12 digits of the EAN as a single number:
//
// Enter the first 12 digits of an EAN: 869148426000
// Check digit: 8

#include <stdio.h>

int main(void)
{
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;

	printf("Enter the first (single) digit: ");
	scanf("%1d", &d);
	printf("Enter first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
	printf("Enter second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;

	printf("Check digit: %d\n", 9 - ((total - 1) % 10));

	return 0;
}