// If c is a variable of type char, which one of the following statements is
// illegal?
// (a) i += c; /* i has type int */
// LEGAL
// (b) c = 2 * c - 1;
// LEGAL
// (c) putchar(c);
// LEGAL
// (d) printf(c);
// ILLEGAL

// Test answers
#include<stdio.h>

int main(void)
{
	int i = 0;
	char c = 'a';

	i += c;
	c = 2 * c - 1;
	putchar(c);
	//printf(c);
	printf("\n");

	return 0;
}
