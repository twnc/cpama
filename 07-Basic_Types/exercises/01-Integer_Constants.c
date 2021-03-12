// Give the decimal value of each of the following integer constants.
// (a) 077
// Answer: 63
// (b) 0x77
// Answer: 7*16 + 7 = 7*10 + 7*6 + 7 = 70 + 42 + 7 = 119
// (c) 0XABC
// Answer: 10*16^2 + 11*16^1 + 12*16^0 = 10*256 + 11*16 + 12*1 = 2560 + 176 + 12
// = 2736 + 12 = 2748

// Test answers
#include<stdio.h>

int main(void)
{
	int a = 077;
	int b = 0x77;
	int c = 0XABC;

	printf("077 = %d\n", a);
	printf("0x77 = %d\n", b);
	printf("0XABC = %d\n", c);

	return 0;
}
