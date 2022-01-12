// Which of the following would be valid prototypes for a function that returns
// nothing and has one double parameter?
// (a) void f(double x);
// ANSWER: Valid
// (b) void f(double);
// ANSWER: Valid, parameter name can be left till function definition
// (c) void f(x);
// ANSWER: Invalid, parameter type is necessary
// (d) f(double x);
// ANSWER: Invalid in c99 and newer, previously unspecified function type would
// default to int. This would also be invalid in prior versions as the implicit
// return type would conflict with later definition with void.
//
// Below I tested my answers. Interestingly although it is not standard to
// allow implicit function return types from C99 onwards, both gcc and clang
// seem to allow it.
#include<stdio.h>

f(double x);

int main(void)
{
	double user_input;
	printf("Please enter a double:\n");
	scanf("%lf", &user_input);

	f(user_input);

	return 0;
}

void f(double x)
{
	printf("%g doubled equals %g.\n", x, x * 2);
}
