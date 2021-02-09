// Write calls of printf that display a float variable x in the following formats

#include<stdio.h>

int main(void)
{
	float x = 12345.678901f;

	// (a) Exponential notation; left justified in a field of size 8;
	//     one digit after the decimal point.
	printf("(a) = %f\n", x);
	// (b) Exponential notation; right-justified in a field of size 10;
	//     six digits after the decimal point.
	printf("(b) = %f\n", x);
	// (c) Fixed decimal notation; left-justified in a field of size 8;
	//     three digits after the decimal point.
	printf("(c) = %f\n", x);
	// (d) Fixed decimal notation; right-justified in a field of size 6;
	//     no digits after the decimal point.
	printf("(d) = %f\n", x);

	return 0;
}
