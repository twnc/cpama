// Suppose that the function f has the following definition:
// int f(int a, int b) { ... }
// Which of the following statements are legal? (Assume that i has type int and
// x has type double.)
// (a) i = f(83, 12);
// ANSWER: Legal
// (b) x = f(83, 12);
// ANSWER: Legal, you can save an int into a double
// (c) i = f(3.15, 9.28);
// ANSWER: Legal, function parameters will have narrowing conversion to 3 and 9
// (d) x = f(3.15, 9.28);
// ANSWER: Legal, function parameters will have narrowing conversion to 3 and 9
// (e) f(83,12);
// ANSWER: Legal, you can call a function witout using it's output
// Answers checked by compiling the code below!

#include<stdio.h>

int f(int a, int b)
{
	return 1;
}

int main(void)
{
	int i;
	double x;

	// (a)
	i = f(83, 12);
	// (b)
	x = f(83, 12);
	// (c)
	i = f(3.15, 9.28);
	// (d)
	x = f(3.15, 9.28);
	// (e)
	f(83,12);

	return 0;
}
