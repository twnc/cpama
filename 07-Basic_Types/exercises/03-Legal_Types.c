// Which of the following are not legal types in C?
// (a) short unsigned int
// LEGAL
// (b) short float
// ILLEGAL
// (c) long double
// LEGAL
// (d) unsigned long
// LEGAL

// Program to test answers
#include<stdio.h>

int main(void)
{
	short unsigned int x;
	//short float y;
	long double z;
	unsigned long a;

	return 0;
}
