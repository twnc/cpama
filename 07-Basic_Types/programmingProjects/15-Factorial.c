// Write a program that computes the factorial of a positive integer.
//
// Enter a positive integer: 6
// Factorial of 6: 720
//
// (a)
// Use a short variable to store the value of the factorial. What is the largest
// value of n for which the program correctly prints the factorial of n?
// (b)
// Repeat part (a), using an int variable instead.
// (c)
// Repeat part (a), using a long variable instead.
// (d)
// Repeat part (a), using a long long variable instead (If your compiler
// supports the long long type).
// (e)
// Repeat part (a), using a float variable instead.
// (f)
// Repeat part (a), using a double variable instead.
// (g)
// Repeat part (a), using a short double variable instead.
//
// In cases (e)-(g), the program will display a close approximation of the
// factorial, not necessarily the exact value.

#include<stdio.h>

int main(void)
{
	short user_number, factorial = 1, next_factorial, maximum_short;

	printf("Enter a positive integer: ");
	scanf("%hd", &user_number);

	for(short i = 1; i <= user_number; ++i)
		factorial *= i;
	printf("Factorial of %d: %d\n", user_number, factorial);

	factorial = 1;
	for(maximum_short = 1; (next_factorial = factorial * (maximum_short + 1)) > factorial; maximum_short++)
		factorial = next_factorial;
	printf("Maximum short whose factorial can calculated is %hd\n", maximum_short);


	return 0;
}
