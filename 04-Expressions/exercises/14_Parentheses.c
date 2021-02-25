// Supply parentheses to show how a C compiler would interpret each of the
// following expressions.

#include<stdio.h>

int main(void)
{
	int a = 31, b = 72, c = -98, d = 352, e = -425;
	int no_parentheses, with_parentheses;

	// (a) a * b - c * d + e
	no_parentheses =   a * b - c * d + e;
	with_parentheses = 0;
	if(no_parentheses == with_parentheses)
		printf("(a) is correct!\n");

	// (b) a / b % c / d
	no_parentheses =   a / b % c / d;
	with_parentheses = 0;
	if(no_parentheses == with_parentheses)
		printf("(b) is correct!\n");

	// (c) - a - b + c - + d
	no_parentheses =   - a - b + c - + d;
	with_parentheses = 0;
	if(no_parentheses == with_parentheses)
		printf("(c) is correct!\n");

	// (d) a * - b / c - d
	no_parentheses =   a * - b / c - d;
	with_parentheses = 0;
	if(no_parentheses == with_parentheses)
		printf("(d) is correct!\n");

	return 0;
}
