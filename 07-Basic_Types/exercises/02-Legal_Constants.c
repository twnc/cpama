// Which of the following are not legal constants in C? Classify each legal
// constant as either integer or floating-point.
// (a) 010E2
// 	Legal double. This one was confusing, initially I thought it would be a
// 	legal octal integer. No decimal point and it begins with a zero. However
// 	it turns out, that any number written with an exponent must be a 
// 	floating point number, the default float type being a double. There is
// 	also no support for octal floating point literals in C, so this is read
// 	in decimal format.
// (b) 32.1E+5
// 	Legal double.
// (c) 0790
// 	Illegal octal integer. Initially I thought this would be legal, but I
// 	hadn't noticed that there is a 9, which obviously can't be used in an
// 	octal format.
// (d) 100_000
// 	Illegal, _ is not a legal character in a number in C.
// (e) 3.978e-2
// 	Legal double

// Included test below
#include<stdio.h>

int main(void)
{
	printf("%lf\n", 010E2);
	printf("%lf\n", 032.1E+5);
	//printf("%d\n", 0790);
	//printf("%d\n", 100_000);
	printf("%lf\n", 3.978e-2);

	return 0;
}
